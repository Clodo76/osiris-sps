// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "omla.h"
#include "omla.pypp.hpp"

namespace bp = boost::python;

struct OMLA_wrapper : ::osiris::OMLA, ::osiris::PythonWrapper< ::osiris::OMLA > {

    OMLA_wrapper(::osiris::OMLA const & arg )
    : ::osiris::OMLA( arg )
      , ::osiris::PythonWrapper< ::osiris::OMLA >(){
        // copy constructor
        
    }

    OMLA_wrapper(::osiris::String const & tag )
    : ::osiris::OMLA( boost::ref(tag) )
      , ::osiris::PythonWrapper< ::osiris::OMLA >(){
        // constructor
    
    }

    virtual ::osiris::String processHtml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_processHtml = this->get_override( "processHtml" ) )
            return func_processHtml( i, context );
        else{
            __pystate.leave();
            return this->::osiris::OMLA::processHtml( i, context );
        }
    }
    
    ::osiris::String default_processHtml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::OMLA::processHtml( i, context );
    }

    virtual bool allowRowMode(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_allowRowMode = this->get_override( "allowRowMode" ) )
            return func_allowRowMode(  );
        else{
            __pystate.leave();
            return this->::osiris::OMLHtmlWrapper::allowRowMode(  );
        }
    }
    
    bool default_allowRowMode(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::OMLHtmlWrapper::allowRowMode( );
    }

    virtual ::std::wstring onEncodeParam( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context, ::std::wstring const & name, ::std::wstring const & value ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEncodeParam = this->get_override( "onEncodeParam" ) )
            return func_onEncodeParam( i, context, name, value );
        else{
            __pystate.leave();
            return this->::osiris::OMLHtmlWrapper::onEncodeParam( i, context, name, value );
        }
    }
    
    ::std::wstring default_onEncodeParam( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context, ::std::wstring const & name, ::std::wstring const & value ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::OMLHtmlWrapper::onEncodeParam( i, context, name, value );
    }

    virtual ::osiris::String processOsml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_processOsml = this->get_override( "processOsml" ) )
            return func_processOsml( i, context );
        else{
            __pystate.leave();
            return this->::osiris::IOMLCode::processOsml( i, context );
        }
    }
    
    ::osiris::String default_processOsml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IOMLCode::processOsml( i, context );
    }

};

void register_OMLA_class(){

    { //::osiris::OMLA
        typedef ::boost::python::class_< OMLA_wrapper, ::boost::python::bases< ::osiris::OMLHtmlWrapper > > OMLA_exposer_t;
        OMLA_exposer_t OMLA_exposer = OMLA_exposer_t( "OMLA", ::boost::python::init< ::osiris::String const & >(( ::boost::python::arg("tag") )) );
        ::boost::python::scope OMLA_scope( OMLA_exposer );
        ::boost::python::implicitly_convertible< ::osiris::String const &, ::osiris::OMLA >();
        { //::osiris::OMLA::processHtml
        
            typedef ::osiris::String ( ::osiris::OMLA::*processHtml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            typedef ::osiris::String ( OMLA_wrapper::*default_processHtml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            
            OMLA_exposer.def( 
                "processHtml"
                , processHtml_function_type(&::osiris::OMLA::processHtml)
                , default_processHtml_function_type(&OMLA_wrapper::default_processHtml)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
        { //::osiris::OMLHtmlWrapper::allowRowMode
        
            typedef bool ( ::osiris::OMLHtmlWrapper::*allowRowMode_function_type )(  ) const;
            typedef bool ( OMLA_wrapper::*default_allowRowMode_function_type )(  ) const;
            
            OMLA_exposer.def( 
                "allowRowMode"
                , allowRowMode_function_type(&::osiris::OMLHtmlWrapper::allowRowMode)
                , default_allowRowMode_function_type(&OMLA_wrapper::default_allowRowMode) );
        
        }
        { //::osiris::OMLHtmlWrapper::onEncodeParam
        
            typedef ::std::wstring ( ::osiris::OMLHtmlWrapper::*onEncodeParam_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext >,::std::wstring const &,::std::wstring const & ) const;
            typedef ::std::wstring ( OMLA_wrapper::*default_onEncodeParam_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext >,::std::wstring const &,::std::wstring const & ) const;
            
            OMLA_exposer.def( 
                "onEncodeParam"
                , onEncodeParam_function_type(&::osiris::OMLHtmlWrapper::onEncodeParam)
                , default_onEncodeParam_function_type(&OMLA_wrapper::default_onEncodeParam)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context"), ::boost::python::arg("name"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::IOMLCode::processOsml
        
            typedef ::osiris::String ( ::osiris::IOMLCode::*processOsml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            typedef ::osiris::String ( OMLA_wrapper::*default_processOsml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            
            OMLA_exposer.def( 
                "processOsml"
                , processOsml_function_type(&::osiris::IOMLCode::processOsml)
                , default_processOsml_function_type(&OMLA_wrapper::default_processOsml)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
    }

}
