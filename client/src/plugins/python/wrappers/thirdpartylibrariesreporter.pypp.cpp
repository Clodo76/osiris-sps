// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "thirdpartylibrariesreporter.h"
#include "thirdpartylibrariesreporter.pypp.hpp"

namespace bp = boost::python;

struct ThirdPartyLibrariesReporter_wrapper : ::osiris::ThirdPartyLibrariesReporter, ::osiris::PythonWrapper< ::osiris::ThirdPartyLibrariesReporter > {

    ThirdPartyLibrariesReporter_wrapper( )
    : ::osiris::ThirdPartyLibrariesReporter( )
      , ::osiris::PythonWrapper< ::osiris::ThirdPartyLibrariesReporter >(){
        // null constructor
    
    }

    static boost::python::object getLibraries( ::osiris::ThirdPartyLibrariesReporter const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::LockPtr<const std::list<boost::shared_ptr<osiris::ThirdPartyLibrary>, osiris::StdAllocator<boost::shared_ptr<osiris::ThirdPartyLibrary>, osiris::NedAllocator<boost::shared_ptr<osiris::ThirdPartyLibrary> > > >,boost::recursive_mutex,boost::unique_lock<boost::recursive_mutex> > result = inst.getLibraries();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object addLibrary( ::osiris::ThirdPartyLibrariesReporter & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::ThirdPartyLibrary> result = inst.addLibrary();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

};

void register_ThirdPartyLibrariesReporter_class(){

    { //::osiris::ThirdPartyLibrariesReporter
        typedef ::boost::python::class_< ThirdPartyLibrariesReporter_wrapper, ::boost::python::bases< ::osiris::StaticSingleton< osiris::ThirdPartyLibrariesReporter, true > >, ::boost::noncopyable > ThirdPartyLibrariesReporter_exposer_t;
        ThirdPartyLibrariesReporter_exposer_t ThirdPartyLibrariesReporter_exposer = ThirdPartyLibrariesReporter_exposer_t( "ThirdPartyLibrariesReporter", ::boost::python::no_init );
        ::boost::python::scope ThirdPartyLibrariesReporter_scope( ThirdPartyLibrariesReporter_exposer );
        ThirdPartyLibrariesReporter_exposer.def( ::boost::python::init< >() );
        { //::osiris::ThirdPartyLibrariesReporter::getLibraries
        
            typedef boost::python::object ( *getLibraries_function_type )( ::osiris::ThirdPartyLibrariesReporter const & );
            
            ThirdPartyLibrariesReporter_exposer.def( 
                "getLibraries"
                , getLibraries_function_type( &ThirdPartyLibrariesReporter_wrapper::getLibraries ) );
        
        }
        { //::osiris::ThirdPartyLibrariesReporter::addLibrary
        
            typedef boost::python::object ( *addLibrary_function_type )( ::osiris::ThirdPartyLibrariesReporter & );
            
            ThirdPartyLibrariesReporter_exposer.def( 
                "addLibrary"
                , addLibrary_function_type( &ThirdPartyLibrariesReporter_wrapper::addLibrary ) );
        
        }
        { //property "libraries"[fget=::osiris::ThirdPartyLibrariesReporter::getLibraries]
        
            typedef ::osiris::LockPtr<const std::list<boost::shared_ptr<osiris::ThirdPartyLibrary>, osiris::StdAllocator<boost::shared_ptr<osiris::ThirdPartyLibrary>, osiris::NedAllocator<boost::shared_ptr<osiris::ThirdPartyLibrary> > > >,boost::recursive_mutex,boost::unique_lock<boost::recursive_mutex> > ( ::osiris::ThirdPartyLibrariesReporter::*fget )(  ) const;
            
            ThirdPartyLibrariesReporter_exposer.add_property( 
                "libraries"
                , fget( &::osiris::ThirdPartyLibrariesReporter::getLibraries )
                , "get property, built on top of \"osiris::LockPtr<const std::list<boost::shared_ptr<osiris::ThirdPartyLibrary>, osiris::StdAllocator<boost::shared_ptr<osiris::ThirdPartyLibrary>, osiris::NedAllocator<boost::shared_ptr<osiris::ThirdPartyLibrary> > > >,boost::recursive_mutex,boost::unique_lock<boost::recursive_mutex> > osiris::ThirdPartyLibrariesReporter::getLibraries() const [member function]\"" );
        
        }
    }

}