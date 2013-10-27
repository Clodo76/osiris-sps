// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmlunit.h"
#include "htmlunit.pypp.hpp"

namespace bp = boost::python;

static boost::python::object empty_7544d3d07a8a2f7a72e1ad342e86e5da( ::osiris::HtmlUnit const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.empty();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getType_580b2e9e8e42d144ec0b46e1db635008( ::osiris::HtmlUnit const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::HtmlUnit::Type result = inst.getType();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getValue_cfa95ff5752ad39d42fa5d245fc0e579( ::osiris::HtmlUnit const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::int32 result = inst.getValue();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object toString_5ed36e58f9ff2f147b3e804e082a2bff( ::osiris::HtmlUnit const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.toString();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object fromString_8e0032d89e5666dfe345b56cbbd901aa( ::osiris::String value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::HtmlUnit result = ::osiris::HtmlUnit::fromString(value);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object percent_42c8ae5afc7d6e9d72e62fd41beb20ae( ::osiris::int32 value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::HtmlUnit result = ::osiris::HtmlUnit::percent(value);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object pixels_0b475befabea80bb6aa3437fdbfbb726( ::osiris::int32 value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::HtmlUnit result = ::osiris::HtmlUnit::pixels(value);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object units_15b0bf50511be1298709130b6c695c7e( ::osiris::int32 value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::HtmlUnit result = ::osiris::HtmlUnit::units(value);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

void register_HtmlUnit_class(){

    { //::osiris::HtmlUnit
        typedef ::boost::python::class_< ::osiris::HtmlUnit > HtmlUnit_exposer_t;
        HtmlUnit_exposer_t HtmlUnit_exposer = HtmlUnit_exposer_t( "HtmlUnit", ::boost::python::init< ::boost::python::optional< ::osiris::int32, ::osiris::HtmlUnit::Type > >(( ::boost::python::arg("value")=(::osiris::int32)(0), ::boost::python::arg("type")=(long)(::osiris::HtmlUnit::utPure) )) );
        ::boost::python::scope HtmlUnit_scope( HtmlUnit_exposer );
        ::boost::python::enum_< ::osiris::HtmlUnit::Type>("Type")
            .value("utPure", ::osiris::HtmlUnit::utPure)
            .value("utPercent", ::osiris::HtmlUnit::utPercent)
            .value("utPixels", ::osiris::HtmlUnit::utPixels)
            .export_values()
            ;
        ::boost::python::implicitly_convertible< ::osiris::int32, ::osiris::HtmlUnit >();
        HtmlUnit_exposer.def( ::boost::python::init< ::osiris::HtmlUnit const & >(( ::boost::python::arg("second") )) );
        HtmlUnit_exposer.def( "as__scope_osiris_scope_String", &::osiris::HtmlUnit::operator ::osiris::String  );
        HtmlUnit_exposer.def( "__int__", &::osiris::HtmlUnit::operator ::osiris::int32  );
        { //::osiris::HtmlUnit::empty
        
            typedef boost::python::object ( *empty_function_type )( ::osiris::HtmlUnit const & );
            
            HtmlUnit_exposer.def( 
                "empty"
                , empty_function_type( &empty_7544d3d07a8a2f7a72e1ad342e86e5da ) );
        
        }
        { //::osiris::HtmlUnit::getType
        
            typedef boost::python::object ( *getType_function_type )( ::osiris::HtmlUnit const & );
            
            HtmlUnit_exposer.def( 
                "getType"
                , getType_function_type( &getType_580b2e9e8e42d144ec0b46e1db635008 ) );
        
        }
        { //::osiris::HtmlUnit::getValue
        
            typedef boost::python::object ( *getValue_function_type )( ::osiris::HtmlUnit const & );
            
            HtmlUnit_exposer.def( 
                "getValue"
                , getValue_function_type( &getValue_cfa95ff5752ad39d42fa5d245fc0e579 ) );
        
        }
        { //::osiris::HtmlUnit::toString
        
            typedef boost::python::object ( *toString_function_type )( ::osiris::HtmlUnit const & );
            
            HtmlUnit_exposer.def( 
                "toString"
                , toString_function_type( &toString_5ed36e58f9ff2f147b3e804e082a2bff ) );
        
        }
        { //::osiris::HtmlUnit::fromString
        
            typedef boost::python::object ( *fromString_function_type )( ::osiris::String );
            
            HtmlUnit_exposer.def( 
                "fromString"
                , fromString_function_type( &fromString_8e0032d89e5666dfe345b56cbbd901aa )
                , ( ::boost::python::arg("value") ) );
        
        }
        { //::osiris::HtmlUnit::operator=
        
            typedef ::osiris::HtmlUnit & ( ::osiris::HtmlUnit::*assign_function_type )( ::osiris::HtmlUnit const & ) ;
            
            HtmlUnit_exposer.def( 
                "assign"
                , assign_function_type( &::osiris::HtmlUnit::operator= )
                , ( ::boost::python::arg("second") )
                , bp::return_self< >() );
        
        }
        { //::osiris::HtmlUnit::percent
        
            typedef boost::python::object ( *percent_function_type )( ::osiris::int32 );
            
            HtmlUnit_exposer.def( 
                "percent"
                , percent_function_type( &percent_42c8ae5afc7d6e9d72e62fd41beb20ae )
                , ( ::boost::python::arg("value") ) );
        
        }
        { //::osiris::HtmlUnit::pixels
        
            typedef boost::python::object ( *pixels_function_type )( ::osiris::int32 );
            
            HtmlUnit_exposer.def( 
                "pixels"
                , pixels_function_type( &pixels_0b475befabea80bb6aa3437fdbfbb726 )
                , ( ::boost::python::arg("value") ) );
        
        }
        { //::osiris::HtmlUnit::units
        
            typedef boost::python::object ( *units_function_type )( ::osiris::int32 );
            
            HtmlUnit_exposer.def( 
                "units"
                , units_function_type( &units_15b0bf50511be1298709130b6c695c7e )
                , ( ::boost::python::arg("value") ) );
        
        }
        HtmlUnit_exposer.staticmethod( "fromString" );
        HtmlUnit_exposer.staticmethod( "percent" );
        HtmlUnit_exposer.staticmethod( "pixels" );
        HtmlUnit_exposer.staticmethod( "units" );
        { //property "value"[fget=::osiris::HtmlUnit::getValue]
        
            typedef ::osiris::int32 ( ::osiris::HtmlUnit::*fget )(  ) const;
            
            HtmlUnit_exposer.add_property( 
                "value"
                , fget( &::osiris::HtmlUnit::getValue )
                , "get property, built on top of \"osiris::int32 osiris::HtmlUnit::getValue() const [member function]\"" );
        
        }
        { //property "type"[fget=::osiris::HtmlUnit::getType]
        
            typedef ::osiris::HtmlUnit::Type ( ::osiris::HtmlUnit::*fget )(  ) const;
            
            HtmlUnit_exposer.add_property( 
                "type"
                , fget( &::osiris::HtmlUnit::getType )
                , "get property, built on top of \"osiris::HtmlUnit::Type osiris::HtmlUnit::getType() const [member function]\"" );
        
        }
    }

}