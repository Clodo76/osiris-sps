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
#include "htmlscript.h"

#include "htmlwriter.h"

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_BEGIN()

//////////////////////////////////////////////////////////////////////

HtmlScript::HtmlScript(const String &code)
{
	m_code = code;
}

HtmlScript::~HtmlScript()
{

}

String HtmlScript::linkCommand(const String &code)
{
	return _S("javascript:")+code;
}

void HtmlScript::renderAttributes(HtmlWriter &writer)
{
	ControlBase::renderAttributes(writer);

	writer.writeAttribute(_S("type"), _S("text/javascript"));
}

void HtmlScript::onRender(HtmlWriter &writer)
{
	writer.openTag(_S("script"));
	renderAttributes(writer);
	writer.closeTag();
	//writer.add(_S("<![CDATA["));	// TODO questi ci andrebbero, ma non funziano... forse ci vuole qualcosa in output che specifichi che � XHTML e non HTML?
	writer.add(getCode());
	//writer.add(_S("]]>"));
	writer.closeTag(_S("script"), false);
	writer.writeLine();
}

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_END()

//////////////////////////////////////////////////////////////////////
