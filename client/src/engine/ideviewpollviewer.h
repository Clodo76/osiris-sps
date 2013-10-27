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

#ifndef _IDE_VIEW_POLLVIEWER_H
#define _IDE_VIEW_POLLVIEWER_H

#include "ideviewcommentableobjectviewer.h"

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_BEGIN()
namespace ide {
namespace view {

//////////////////////////////////////////////////////////////////////

class PollViewer : public CommentableObjectViewer
{
	typedef CommentableObjectViewer ControlBase;

// Construction
public:
	PollViewer(shared_ptr<EntitiesEntity> entity = null);
	virtual ~PollViewer();

// IXSLRenderer interface
public:
	virtual String getTemplatePath();

// CommentableObjectViewer overrides
public:
	virtual void onInit();
	virtual void renderObject(shared_ptr<XMLPortalExporter> exporter, shared_ptr<ObjectsIRevisionable> object);

// Operations
private:
	void exportPollOption(const shared_ptr<XMLNode> &option_node, shared_ptr<ObjectsPollOption> option, bool current);

	void onVote(IEvent *e);
	void onUnvote();

private:
	shared_ptr<ObjectsPollVote> m_vote;

	static const String EVENT_ONVOTE;
	static const String EVENT_ONUNVOTE;
};

//////////////////////////////////////////////////////////////////////

} // view
} // ide
OS_NAMESPACE_END()

//////////////////////////////////////////////////////////////////////

#endif // _IDE_VIEW_POLLVIEWER_H