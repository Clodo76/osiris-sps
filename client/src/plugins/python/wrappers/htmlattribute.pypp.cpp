// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmlattribute.h"
#include "ihtmlcontrol.h"
#include "htmlattribute.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getControl_449579926ebf105f5589db3bfbeb65ae( ::osiris::HtmlAttribute & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::IHtmlControl & result = inst.getControl();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::reference_existing_object > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::IHtmlControl & >( result ) );
}

static boost::python::object getControl_a9c439e4a86d872c45c4e80e415852b4( ::osiris::HtmlAttribute const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::IHtmlControl const & result = inst.getControl();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::IHtmlControl const & >( result ) );
}

static boost::python::object getName_6e41cc5b7282b463073c7983cc0705fe( ::osiris::HtmlAttribute const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getName();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static boost::python::object getValue_8f32cc1177788c8cb2c94830d00be158( ::osiris::HtmlAttribute const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getValue();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static void setName_c50f9c78a8c846016d07333217fd51a8( ::osiris::HtmlAttribute & inst, ::osiris::String const & name ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setName(name);
    __pythreadSaver.restore();
}

static void setValue_d0174907353418a7ba980091be66b36f( ::osiris::HtmlAttribute & inst, ::osiris::String const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setValue(value);
    __pythreadSaver.restore();
}

void register_HtmlAttribute_class(){

    { //::osiris::HtmlAttribute
        typedef ::boost::python::class_< ::osiris::HtmlAttribute, ::boost::noncopyable > HtmlAttribute_exposer_t;
        HtmlAttribute_exposer_t HtmlAttribute_exposer = HtmlAttribute_exposer_t( "HtmlAttribute", ::boost::python::init< ::osiris::IHtmlControl &, ::osiris::String const &, ::osiris::String const & >(( ::boost::python::arg("control"), ::boost::python::arg("name"), ::boost::python::arg("value") )) );
        ::boost::python::scope HtmlAttribute_scope( HtmlAttribute_exposer );
        { //::osiris::HtmlAttribute::getControl
        
            typedef boost::python::object ( *getControl_function_type )( ::osiris::HtmlAttribute & );
            
            HtmlAttribute_exposer.def( 
                "getControl"
                , getControl_function_type( &getControl_449579926ebf105f5589db3bfbeb65ae ) );
        
        }
        { //::osiris::HtmlAttribute::getControl
        
            typedef boost::python::object ( *getControl_function_type )( ::osiris::HtmlAttribute const & );
            
            HtmlAttribute_exposer.def( 
                "getControl"
                , getControl_function_type( &getControl_a9c439e4a86d872c45c4e80e415852b4 ) );
        
        }
        { //::osiris::HtmlAttribute::getName
        
            typedef boost::python::object ( *getName_function_type )( ::osiris::HtmlAttribute const & );
            
            HtmlAttribute_exposer.def( 
                "getName"
                , getName_function_type( &getName_6e41cc5b7282b463073c7983cc0705fe ) );
        
        }
        { //::osiris::HtmlAttribute::getValue
        
            typedef boost::python::object ( *getValue_function_type )( ::osiris::HtmlAttribute const & );
            
            HtmlAttribute_exposer.def( 
                "getValue"
                , getValue_function_type( &getValue_8f32cc1177788c8cb2c94830d00be158 ) );
        
        }
        { //::osiris::HtmlAttribute::setName
        
            typedef void ( *setName_function_type )( ::osiris::HtmlAttribute &,::osiris::String const & );
            
            HtmlAttribute_exposer.def( 
                "setName"
                , setName_function_type( &setName_c50f9c78a8c846016d07333217fd51a8 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("name") ) );
        
        }
        { //::osiris::HtmlAttribute::setValue
        
            typedef void ( *setValue_function_type )( ::osiris::HtmlAttribute &,::osiris::String const & );
            
            HtmlAttribute_exposer.def( 
                "setValue"
                , setValue_function_type( &setValue_d0174907353418a7ba980091be66b36f )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //property "name"[fget=::osiris::HtmlAttribute::getName, fset=::osiris::HtmlAttribute::setName]
        
            typedef ::osiris::String const & ( ::osiris::HtmlAttribute::*fget )(  ) const;
            typedef void ( ::osiris::HtmlAttribute::*fset )( ::osiris::String const & ) ;
            
            HtmlAttribute_exposer.add_property( 
                "name"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlAttribute::getName )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlAttribute::setName )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlAttribute::getName() const [member function]\" and \"void osiris::HtmlAttribute::setName(osiris::String const & name) [member function]\"" );
        
        }
        { //property "value"[fget=::osiris::HtmlAttribute::getValue, fset=::osiris::HtmlAttribute::setValue]
        
            typedef ::osiris::String const & ( ::osiris::HtmlAttribute::*fget )(  ) const;
            typedef void ( ::osiris::HtmlAttribute::*fset )( ::osiris::String const & ) ;
            
            HtmlAttribute_exposer.add_property( 
                "value"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlAttribute::getValue )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlAttribute::setValue )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlAttribute::getValue() const [member function]\" and \"void osiris::HtmlAttribute::setValue(osiris::String const & value) [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::HtmlAttribute > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HtmlAttribute >, boost::shared_ptr< ::osiris::Object > >();
    }

}