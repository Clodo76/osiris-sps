// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/list.hpp"
#include "_portalptr__value_traits.pypp.hpp"
#include "portallist.pypp.hpp"

namespace bp = boost::python;

void register_PortalList_class(){

    { //::std::list<boost::shared_ptr<osiris::Portal>, osiris::StdAllocator<boost::shared_ptr<osiris::Portal>, osiris::SysAllocator<boost::shared_ptr<osiris::Portal> > > >
        typedef ::boost::python::class_< ::std::list<boost::shared_ptr<osiris::Portal>, osiris::StdAllocator<boost::shared_ptr<osiris::Portal>, osiris::SysAllocator<boost::shared_ptr<osiris::Portal> > > > > PortalList_exposer_t;
        PortalList_exposer_t PortalList_exposer = PortalList_exposer_t( "PortalList" );
        ::boost::python::scope PortalList_scope( PortalList_exposer );
        PortalList_exposer.def( ::boost::python::indexing::list_suite< ::std::list<boost::shared_ptr<osiris::Portal>, osiris::StdAllocator<boost::shared_ptr<osiris::Portal>, osiris::SysAllocator<boost::shared_ptr<osiris::Portal> > > > >() );
    }

}
