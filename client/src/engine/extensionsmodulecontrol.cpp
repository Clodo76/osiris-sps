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
#include "extensionsmodulecontrol.h"

#include "objectsinstance.h"
#include "xmldocument.h"

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_BEGIN()

//////////////////////////////////////////////////////////////////////

ExtensionsModuleControl::ExtensionsModuleControl() : m_moduleDocument(OS_NEW XMLDocument())
{

}

ExtensionsModuleControl::~ExtensionsModuleControl()
{

}

bool ExtensionsModuleControl::init(shared_ptr<IExtensionsModule> module, const String &title, const EntityID &instance, const String &xml)
{
	// module pu� essere nullptr. Ad esempio InvalidModule.

	m_module = module;
	m_title = title;
	m_instance = instance;
	
	if(xml.empty() == false)
	{
		if(getModuleDocument()->parseString(xml) == false)
			return false;
	}

	if(module != nullptr)
		module->initXML(getModuleDocument());

	return true;
}

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_END()

//////////////////////////////////////////////////////////////////////
