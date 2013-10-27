// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "thirdpartylibrary.h"
#include "thirdpartylibrary.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getName_4ce8f5e1611871f665eaebd1788a53a6( ::osiris::ThirdPartyLibrary const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = inst.getName();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getVersion_6759e1a3e89c21f1d2eaee971832a166( ::osiris::ThirdPartyLibrary const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = inst.getVersion();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getDescription_ddc9b286fc5afe7b13351322a538ba9c( ::osiris::ThirdPartyLibrary const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = inst.getDescription();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getUrl_afc2a30db9bd2860272a40d958a26535( ::osiris::ThirdPartyLibrary const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = inst.getUrl();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getLicense_3b0f676123e054069131858551391aa4( ::osiris::ThirdPartyLibrary const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = inst.getLicense();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getLicenseUrl_5e3600c9371342a45eb12bf93ceba000( ::osiris::ThirdPartyLibrary const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = inst.getLicenseUrl();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void setDescription_3d449f3b968d8f3d74e8ec2a8d5bc052( ::osiris::ThirdPartyLibrary & inst, ::std::string const & description ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setDescription(description);
    __pythreadSaver.restore();
}

static void setLicense_d94231a9300a303e2533f6398cd81b75( ::osiris::ThirdPartyLibrary & inst, ::std::string const & license ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setLicense(license);
    __pythreadSaver.restore();
}

static void setLicenseUrl_516541fcaf0a7e5c92f0f8207e04e26f( ::osiris::ThirdPartyLibrary & inst, ::std::string const & licenseUrl ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setLicenseUrl(licenseUrl);
    __pythreadSaver.restore();
}

static void setName_04cbefe1117c676de94f3cc7d9574747( ::osiris::ThirdPartyLibrary & inst, ::std::string const & name ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setName(name);
    __pythreadSaver.restore();
}

static void setUrl_c5a0e1bf43a99b28480c9c1d771dbb3f( ::osiris::ThirdPartyLibrary & inst, ::std::string const & url ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setUrl(url);
    __pythreadSaver.restore();
}

static void setVersion_3e09c4c045ad317539822e6f7feca6a9( ::osiris::ThirdPartyLibrary & inst, ::std::string const & version ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setVersion(version);
    __pythreadSaver.restore();
}

void register_ThirdPartyLibrary_class(){

    { //::osiris::ThirdPartyLibrary
        typedef ::boost::python::class_< ::osiris::ThirdPartyLibrary, ::boost::noncopyable > ThirdPartyLibrary_exposer_t;
        ThirdPartyLibrary_exposer_t ThirdPartyLibrary_exposer = ThirdPartyLibrary_exposer_t( "ThirdPartyLibrary", ::boost::python::no_init );
        ::boost::python::scope ThirdPartyLibrary_scope( ThirdPartyLibrary_exposer );
        ThirdPartyLibrary_exposer.def( ::boost::python::init< >() );
        { //::osiris::ThirdPartyLibrary::getName
        
            typedef boost::python::object ( *getName_function_type )( ::osiris::ThirdPartyLibrary const & );
            
            ThirdPartyLibrary_exposer.def( 
                "getName"
                , getName_function_type( &getName_4ce8f5e1611871f665eaebd1788a53a6 ) );
        
        }
        { //::osiris::ThirdPartyLibrary::getVersion
        
            typedef boost::python::object ( *getVersion_function_type )( ::osiris::ThirdPartyLibrary const & );
            
            ThirdPartyLibrary_exposer.def( 
                "getVersion"
                , getVersion_function_type( &getVersion_6759e1a3e89c21f1d2eaee971832a166 ) );
        
        }
        { //::osiris::ThirdPartyLibrary::getDescription
        
            typedef boost::python::object ( *getDescription_function_type )( ::osiris::ThirdPartyLibrary const & );
            
            ThirdPartyLibrary_exposer.def( 
                "getDescription"
                , getDescription_function_type( &getDescription_ddc9b286fc5afe7b13351322a538ba9c ) );
        
        }
        { //::osiris::ThirdPartyLibrary::getUrl
        
            typedef boost::python::object ( *getUrl_function_type )( ::osiris::ThirdPartyLibrary const & );
            
            ThirdPartyLibrary_exposer.def( 
                "getUrl"
                , getUrl_function_type( &getUrl_afc2a30db9bd2860272a40d958a26535 ) );
        
        }
        { //::osiris::ThirdPartyLibrary::getLicense
        
            typedef boost::python::object ( *getLicense_function_type )( ::osiris::ThirdPartyLibrary const & );
            
            ThirdPartyLibrary_exposer.def( 
                "getLicense"
                , getLicense_function_type( &getLicense_3b0f676123e054069131858551391aa4 ) );
        
        }
        { //::osiris::ThirdPartyLibrary::getLicenseUrl
        
            typedef boost::python::object ( *getLicenseUrl_function_type )( ::osiris::ThirdPartyLibrary const & );
            
            ThirdPartyLibrary_exposer.def( 
                "getLicenseUrl"
                , getLicenseUrl_function_type( &getLicenseUrl_5e3600c9371342a45eb12bf93ceba000 ) );
        
        }
        { //::osiris::ThirdPartyLibrary::setDescription
        
            typedef void ( *setDescription_function_type )( ::osiris::ThirdPartyLibrary &,::std::string const & );
            
            ThirdPartyLibrary_exposer.def( 
                "setDescription"
                , setDescription_function_type( &setDescription_3d449f3b968d8f3d74e8ec2a8d5bc052 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("description") ) );
        
        }
        { //::osiris::ThirdPartyLibrary::setLicense
        
            typedef void ( *setLicense_function_type )( ::osiris::ThirdPartyLibrary &,::std::string const & );
            
            ThirdPartyLibrary_exposer.def( 
                "setLicense"
                , setLicense_function_type( &setLicense_d94231a9300a303e2533f6398cd81b75 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("license") ) );
        
        }
        { //::osiris::ThirdPartyLibrary::setLicenseUrl
        
            typedef void ( *setLicenseUrl_function_type )( ::osiris::ThirdPartyLibrary &,::std::string const & );
            
            ThirdPartyLibrary_exposer.def( 
                "setLicenseUrl"
                , setLicenseUrl_function_type( &setLicenseUrl_516541fcaf0a7e5c92f0f8207e04e26f )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("licenseUrl") ) );
        
        }
        { //::osiris::ThirdPartyLibrary::setName
        
            typedef void ( *setName_function_type )( ::osiris::ThirdPartyLibrary &,::std::string const & );
            
            ThirdPartyLibrary_exposer.def( 
                "setName"
                , setName_function_type( &setName_04cbefe1117c676de94f3cc7d9574747 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("name") ) );
        
        }
        { //::osiris::ThirdPartyLibrary::setUrl
        
            typedef void ( *setUrl_function_type )( ::osiris::ThirdPartyLibrary &,::std::string const & );
            
            ThirdPartyLibrary_exposer.def( 
                "setUrl"
                , setUrl_function_type( &setUrl_c5a0e1bf43a99b28480c9c1d771dbb3f )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("url") ) );
        
        }
        { //::osiris::ThirdPartyLibrary::setVersion
        
            typedef void ( *setVersion_function_type )( ::osiris::ThirdPartyLibrary &,::std::string const & );
            
            ThirdPartyLibrary_exposer.def( 
                "setVersion"
                , setVersion_function_type( &setVersion_3e09c4c045ad317539822e6f7feca6a9 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("version") ) );
        
        }
        { //property "name"[fget=::osiris::ThirdPartyLibrary::getName, fset=::osiris::ThirdPartyLibrary::setName]
        
            typedef ::std::string ( ::osiris::ThirdPartyLibrary::*fget )(  ) const;
            typedef void ( ::osiris::ThirdPartyLibrary::*fset )( ::std::string const & ) ;
            
            ThirdPartyLibrary_exposer.add_property( 
                "name"
                , fget( &::osiris::ThirdPartyLibrary::getName )
                , fset( &::osiris::ThirdPartyLibrary::setName )
                , "get\\set property, built on top of \"std::string osiris::ThirdPartyLibrary::getName() const [member function]\" and \"void osiris::ThirdPartyLibrary::setName(std::string const & name) [member function]\"" );
        
        }
        { //property "version"[fget=::osiris::ThirdPartyLibrary::getVersion, fset=::osiris::ThirdPartyLibrary::setVersion]
        
            typedef ::std::string ( ::osiris::ThirdPartyLibrary::*fget )(  ) const;
            typedef void ( ::osiris::ThirdPartyLibrary::*fset )( ::std::string const & ) ;
            
            ThirdPartyLibrary_exposer.add_property( 
                "version"
                , fget( &::osiris::ThirdPartyLibrary::getVersion )
                , fset( &::osiris::ThirdPartyLibrary::setVersion )
                , "get\\set property, built on top of \"std::string osiris::ThirdPartyLibrary::getVersion() const [member function]\" and \"void osiris::ThirdPartyLibrary::setVersion(std::string const & version) [member function]\"" );
        
        }
        { //property "description"[fget=::osiris::ThirdPartyLibrary::getDescription, fset=::osiris::ThirdPartyLibrary::setDescription]
        
            typedef ::std::string ( ::osiris::ThirdPartyLibrary::*fget )(  ) const;
            typedef void ( ::osiris::ThirdPartyLibrary::*fset )( ::std::string const & ) ;
            
            ThirdPartyLibrary_exposer.add_property( 
                "description"
                , fget( &::osiris::ThirdPartyLibrary::getDescription )
                , fset( &::osiris::ThirdPartyLibrary::setDescription )
                , "get\\set property, built on top of \"std::string osiris::ThirdPartyLibrary::getDescription() const [member function]\" and \"void osiris::ThirdPartyLibrary::setDescription(std::string const & description) [member function]\"" );
        
        }
        { //property "url"[fget=::osiris::ThirdPartyLibrary::getUrl, fset=::osiris::ThirdPartyLibrary::setUrl]
        
            typedef ::std::string ( ::osiris::ThirdPartyLibrary::*fget )(  ) const;
            typedef void ( ::osiris::ThirdPartyLibrary::*fset )( ::std::string const & ) ;
            
            ThirdPartyLibrary_exposer.add_property( 
                "url"
                , fget( &::osiris::ThirdPartyLibrary::getUrl )
                , fset( &::osiris::ThirdPartyLibrary::setUrl )
                , "get\\set property, built on top of \"std::string osiris::ThirdPartyLibrary::getUrl() const [member function]\" and \"void osiris::ThirdPartyLibrary::setUrl(std::string const & url) [member function]\"" );
        
        }
        { //property "license"[fget=::osiris::ThirdPartyLibrary::getLicense, fset=::osiris::ThirdPartyLibrary::setLicense]
        
            typedef ::std::string ( ::osiris::ThirdPartyLibrary::*fget )(  ) const;
            typedef void ( ::osiris::ThirdPartyLibrary::*fset )( ::std::string const & ) ;
            
            ThirdPartyLibrary_exposer.add_property( 
                "license"
                , fget( &::osiris::ThirdPartyLibrary::getLicense )
                , fset( &::osiris::ThirdPartyLibrary::setLicense )
                , "get\\set property, built on top of \"std::string osiris::ThirdPartyLibrary::getLicense() const [member function]\" and \"void osiris::ThirdPartyLibrary::setLicense(std::string const & license) [member function]\"" );
        
        }
        { //property "licenseUrl"[fget=::osiris::ThirdPartyLibrary::getLicenseUrl, fset=::osiris::ThirdPartyLibrary::setLicenseUrl]
        
            typedef ::std::string ( ::osiris::ThirdPartyLibrary::*fget )(  ) const;
            typedef void ( ::osiris::ThirdPartyLibrary::*fset )( ::std::string const & ) ;
            
            ThirdPartyLibrary_exposer.add_property( 
                "licenseUrl"
                , fget( &::osiris::ThirdPartyLibrary::getLicenseUrl )
                , fset( &::osiris::ThirdPartyLibrary::setLicenseUrl )
                , "get\\set property, built on top of \"std::string osiris::ThirdPartyLibrary::getLicenseUrl() const [member function]\" and \"void osiris::ThirdPartyLibrary::setLicenseUrl(std::string const & licenseUrl) [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::ThirdPartyLibrary > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::ThirdPartyLibrary >, boost::shared_ptr< ::osiris::Object > >();
    }

}