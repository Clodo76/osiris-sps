// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/list.hpp"
#include "ihttpdirectoryhandlerlist.pypp.hpp"

namespace bp = boost::python;

void register_IHttpDirectoryHandlerList_class(){

    { //::std::list<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::StdAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::SysAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler> > > >
        typedef ::boost::python::class_< ::std::list<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::StdAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::SysAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler> > > > > IHttpDirectoryHandlerList_exposer_t;
        IHttpDirectoryHandlerList_exposer_t IHttpDirectoryHandlerList_exposer = IHttpDirectoryHandlerList_exposer_t( "IHttpDirectoryHandlerList" );
        ::boost::python::scope IHttpDirectoryHandlerList_scope( IHttpDirectoryHandlerList_exposer );
        IHttpDirectoryHandlerList_exposer.def( ::boost::python::indexing::list_suite< ::std::list<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::StdAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::SysAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler> > > > >() );
    }

}
