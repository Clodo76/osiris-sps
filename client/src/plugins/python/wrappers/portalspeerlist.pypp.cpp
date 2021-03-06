// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/list.hpp"
#include "portalspeerlist.pypp.hpp"

namespace bp = boost::python;

void register_PortalsPeerList_class(){

    ::boost::python::class_< ::std::list<boost::shared_ptr<osiris::PortalsPeer>,osiris::StdAllocator<boost::shared_ptr<osiris::PortalsPeer>, osiris::SysAllocator<boost::shared_ptr<osiris::PortalsPeer> > > > >("PortalsPeerList")    
        .def( ::boost::python::indexing::list_suite< ::std::list<boost::shared_ptr<osiris::PortalsPeer>,osiris::StdAllocator<boost::shared_ptr<osiris::PortalsPeer>, osiris::SysAllocator<boost::shared_ptr<osiris::PortalsPeer> > > > >() );

}
