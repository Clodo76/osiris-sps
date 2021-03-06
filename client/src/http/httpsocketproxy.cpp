// <osiris_sps_source_header>
// This file is part of Osiris Serverless Portal System.
// Copyright (C)2005-2012 Osiris Team (info@osiris-sps.org) / http://www.osiris-sps.org )
//
// Osiris Serverless Portal System is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Osiris Serverless Portal System is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Osiris Serverless Portal System.  If not, see <http://www.gnu.org/licenses/>.
// </osiris_sps_source_header>

#include "stdafx.h"
#include "httpsocketproxy.h"

#include "boost/bind.hpp"
#include "boost/lexical_cast.hpp"
#include "cryptmanager.h"
#include "httpresponse.h"

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_BEGIN()

//////////////////////////////////////////////////////////////////////

HttpSocketProxy::HttpSocketProxy(shared_ptr<socket_type> socket) : ProxyBase(socket),
																   m_enableHttpConnect(true)
{

}

HttpSocketProxy::~HttpSocketProxy()
{

}

void HttpSocketProxy::proxy_connect(boost::system::error_code &e)
{
	if(m_enableHttpConnect == false)
		return;

	if(initRequest() == false)
	{
		e = boost::asio::error::no_recovery;
		return;
	}

	size_t size = boost::asio::write(*ProxyBase::getSocket(), boost::asio::buffer(m_request), boost::asio::transfer_all());
	if(size != m_request.size())
	{
		e = boost::asio::error::no_recovery;
		return;
	}

	m_response.reset(OS_NEW HttpResponse());

	bool loop = true;
	while(loop)
	{
		uint32 size = static_cast<uint32>(ProxyBase::getSocket()->read_some(boost::asio::buffer(m_buffer)));
		if(size == 0)
		{
			e = boost::asio::error::no_recovery;
			return;
		}
		
		switch(m_response->writeData(m_buffer.data(), static_cast<uint32>(size)))
		{
		case HttpResponse::statusWaitingHeader:
		case HttpResponse::statusWaitingContent:
													break;

		case HttpResponse::statusCompleted:			loop = false;
													break;

		case HttpResponse::statusError:				e = boost::asio::error::no_recovery;
													return;													

		default:									OS_ASSERTFALSE();
													e = boost::asio::error::no_recovery;
													return;													
		}				
	}

	uint32 statusCode = m_response->getStatusCode();
	if(statusCode != httpStatusOK)
	{
		e = convertHttpErrorCode(statusCode);
		return;
	}
}

void HttpSocketProxy::proxy_async_connect(const boost::system::error_code &e, shared_ptr<callback_type> callback)
{
	if(m_enableHttpConnect == false)
	{
		(*callback)(e);
		return;
	}

	if(initRequest() == false)
	{
		notify_error(*callback, boost::asio::error::no_recovery);
		return;
	}

	boost::asio::async_write(*ProxyBase::getSocket(), boost::asio::buffer(m_request), boost::asio::transfer_all(), boost::bind(&HttpSocketProxy::handshake1, this, _1, callback));
}

bool HttpSocketProxy::initRequest()
{
	m_request.clear();

	m_request.append("CONNECT " + boost::lexical_cast<std::string>(ProxyBase::getProxyEndpoint()) + " HTTP/1.0");
	m_request.append(OS_HTTP_HEADER_LINE_TERMINATOR);
	if(m_proxyUsername.empty() == false)
	{
		OS_ASSERT(m_proxyPassword.empty() == false);

		std::string plainAuthorization = m_proxyUsername + ":" + m_proxyPassword;
		std::string encodedAuthorization;
		if(CryptManager::instance()->encodeBase64(plainAuthorization.data(), plainAuthorization.size(), encodedAuthorization) == false)
		{
			OS_ASSERTFALSE();
			return false;
		}

		m_request.append("Proxy-Authorization: Basic " + encodedAuthorization + OS_HTTP_HEADER_LINE_TERMINATOR);
	}

	m_request.append(OS_HTTP_HEADER_LINE_TERMINATOR);

	return true;
}

void HttpSocketProxy::handshake1(const boost::system::error_code &e, shared_ptr<callback_type> callback)
{
	m_request.clear();

	if(e)
	{
		notify_error(*callback, e);
		return;
	}

	m_response.reset(OS_NEW HttpResponse());
	ProxyBase::getSocket()->async_read_some(boost::asio::buffer(m_buffer), boost::bind(&HttpSocketProxy::handshake2, this, _1, _2, callback));
}

void HttpSocketProxy::handshake2(const boost::system::error_code &e, size_t bytes_transferred, shared_ptr<callback_type> callback)
{
	if(e)
	{
		notify_error(*callback, e);
		return;
	}

	bool error = false;

	switch(m_response->writeData(m_buffer.data(), static_cast<uint32>(bytes_transferred)))
	{
	case HttpResponse::statusWaitingHeader:
	case HttpResponse::statusWaitingContent:
												ProxyBase::getSocket()->async_read_some(boost::asio::buffer(m_buffer), boost::bind(&HttpSocketProxy::handshake2, this, _1, _2, callback));
												return;

	case HttpResponse::statusCompleted:
												break;

	case HttpResponse::statusError:				error = true;
												break;

	default:									OS_ASSERTFALSE();
												error = true;
												break;
	}

	if(error)
	{
		notify_error(*callback, boost::asio::error::no_recovery);
		return;
	}

	uint32 statusCode = m_response->getStatusCode();
	if(statusCode != httpStatusOK)
	{
		notify_error(*callback, convertHttpErrorCode(statusCode));
		return;
	}

	(*callback)(e);
}

boost::system::error_code HttpSocketProxy::convertHttpErrorCode(uint32 httpErrorCode)
{
	boost::system::error_code e = boost::asio::error::fault;
	switch(httpErrorCode)
	{
	case httpStatusBadRequest:				e = boost::asio::error::invalid_argument;
											break;

	case httpStatusUnauthorized:			e = boost::asio::error::access_denied; 
											break;

	case httpStatusForbidden:				e = boost::asio::error::try_again;
											break;

	case httpStatusNotFound:				e = boost::asio::error::not_found;
											break;

	case httpStatusInternalServerError:		e = boost::asio::error::no_recovery;
											break;

	case httpStatusNotImplemented:			e = boost::asio::error::operation_not_supported;
											break;

	case httpStatusBadGateway:				e = boost::asio::error::operation_aborted;
											break;

	case httpStatusServiceUnavailable:		e = boost::asio::error::service_not_found;
											break;

	default:								OS_ASSERTFALSE();
											break;
	}	

	return e;
}

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_END()

//////////////////////////////////////////////////////////////////////
