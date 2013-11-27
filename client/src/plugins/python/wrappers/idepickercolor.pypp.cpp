// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "idepickercolor.h"
#include "ideskin.h"
#include "idesession.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "idepickercolor.pypp.hpp"

namespace bp = boost::python;

struct IdePickerColor_wrapper : ::osiris::IdePickerColor, ::osiris::PythonWrapper< ::osiris::IdePickerColor > {

    IdePickerColor_wrapper( )
    : ::osiris::IdePickerColor( )
      , ::osiris::PythonWrapper< ::osiris::IdePickerColor >(){
        // null constructor
    
    }

    virtual ::osiris::String getValue(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getValue = this->get_override( "getValue" ) )
            return func_getValue(  );
        else{
            __pystate.leave();
            return this->::osiris::IdePickerColor::getValue(  );
        }
    }
    
    ::osiris::String default_getValue(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IdePickerColor::getValue( );
    }

    virtual void onLoad(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IdePickerColor::onLoad(  );
        }
    }
    
    void default_onLoad(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerColor::onLoad( );
    }

    virtual void setValue( ::osiris::String const & value ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_setValue = this->get_override( "setValue" ) )
            func_setValue( boost::ref(value) );
        else{
            __pystate.leave();
            this->::osiris::IdePickerColor::setValue( boost::ref(value) );
        }
    }
    
    void default_setValue( ::osiris::String const & value ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerColor::setValue( boost::ref(value) );
    }

    bool decodeEvent( ::osiris::String const & command, ::osiris::String & eventName, ::osiris::HtmlEvent & e ) const {
        return ::osiris::IHtmlControl::decodeEvent( boost::ref(command), boost::ref(eventName), boost::ref(e) );
    }

    ::osiris::String encodeEvent( ::osiris::String const & eventName, ::osiris::HtmlEvent const * e=(osiris::null) ) const {
        return ::osiris::IHtmlControl::encodeEvent( boost::ref(eventName), boost::python::ptr(e) );
    }

    virtual ::boost::shared_ptr< osiris::HttpSession > getSession(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getSession = this->get_override( "getSession" ) )
            return func_getSession(  );
        else{
            __pystate.leave();
            return this->::osiris::IHtmlControl::getSession(  );
        }
    }
    
    ::boost::shared_ptr< osiris::HttpSession > default_getSession(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHtmlControl::getSession( );
    }

    virtual void onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(osiris::null) ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEvent = this->get_override( "onEvent" ) )
            func_onEvent( boost::ref(name), boost::python::ptr(e) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
        }
    }
    
    virtual void default_onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(osiris::null) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onInit( );
    }

    virtual void onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoadViewState = this->get_override( "onLoadViewState" ) )
            func_onLoadViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onLoadViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onLoadViewState( boost::ref(state) );
    }

    virtual void onPreRender(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onPreRender(  );
        }
    }
    
    virtual void default_onPreRender(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onPreRender( );
    }

    virtual void onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onRender( boost::ref(writer) );
    }

    virtual void onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onSaveViewState = this->get_override( "onSaveViewState" ) )
            func_onSaveViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onSaveViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onSaveViewState( boost::ref(state) );
    }

    virtual void renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderAttributes = this->get_override( "renderAttributes" ) )
            func_renderAttributes( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::renderAttributes( boost::ref(writer) );
        }
    }
    
    void default_renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::renderAttributes( boost::ref(writer) );
    }

    virtual void renderChilds( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderChilds = this->get_override( "renderChilds" ) )
            func_renderChilds( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::renderChilds( boost::ref(writer) );
        }
    }
    
    void default_renderChilds( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::renderChilds( boost::ref(writer) );
    }

    void saveViewState( ::osiris::DataTree & states ){
        ::osiris::IHtmlControl::saveViewState( boost::ref(states) );
    }

};

void register_IdePickerColor_class(){

    { //::osiris::IdePickerColor
        typedef ::boost::python::class_< IdePickerColor_wrapper, ::boost::python::bases< ::osiris::IPageControl< osiris::IHtmlControl > >, ::boost::noncopyable > IdePickerColor_exposer_t;
        IdePickerColor_exposer_t IdePickerColor_exposer = IdePickerColor_exposer_t( "IdePickerColor", ::boost::python::init< >() );
        ::boost::python::scope IdePickerColor_scope( IdePickerColor_exposer );
        { //::osiris::IdePickerColor::getValue
        
            typedef ::osiris::String ( ::osiris::IdePickerColor::*getValue_function_type )(  ) const;
            typedef ::osiris::String ( IdePickerColor_wrapper::*default_getValue_function_type )(  ) const;
            
            IdePickerColor_exposer.def( 
                "getValue"
                , getValue_function_type(&::osiris::IdePickerColor::getValue)
                , default_getValue_function_type(&IdePickerColor_wrapper::default_getValue) );
        
        }
        { //::osiris::IdePickerColor::onLoad
        
            typedef void ( ::osiris::IdePickerColor::*onLoad_function_type )(  ) ;
            typedef void ( IdePickerColor_wrapper::*default_onLoad_function_type )(  ) ;
            
            IdePickerColor_exposer.def( 
                "onLoad"
                , onLoad_function_type(&::osiris::IdePickerColor::onLoad)
                , default_onLoad_function_type(&IdePickerColor_wrapper::default_onLoad) );
        
        }
        { //::osiris::IdePickerColor::setValue
        
            typedef void ( ::osiris::IdePickerColor::*setValue_function_type )( ::osiris::String const & ) ;
            typedef void ( IdePickerColor_wrapper::*default_setValue_function_type )( ::osiris::String const & ) ;
            
            IdePickerColor_exposer.def( 
                "setValue"
                , setValue_function_type(&::osiris::IdePickerColor::setValue)
                , default_setValue_function_type(&IdePickerColor_wrapper::default_setValue)
                , ( ::boost::python::arg("value") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( IdePickerColor_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            IdePickerColor_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &IdePickerColor_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( IdePickerColor_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            IdePickerColor_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &IdePickerColor_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( IdePickerColor_wrapper::*default_getSession_function_type )(  ) const;
            
            IdePickerColor_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&IdePickerColor_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( IdePickerColor_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            IdePickerColor_exposer.def( 
                "onEvent"
                , onEvent_function_type( &IdePickerColor_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onInit
        
            typedef void ( IdePickerColor_wrapper::*onInit_function_type )(  ) ;
            
            IdePickerColor_exposer.def( 
                "onInit"
                , onInit_function_type( &IdePickerColor_wrapper::default_onInit ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( IdePickerColor_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            IdePickerColor_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &IdePickerColor_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( IdePickerColor_wrapper::*onPreRender_function_type )(  ) ;
            
            IdePickerColor_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &IdePickerColor_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IHtmlControl::onRender
        
            typedef void ( IdePickerColor_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdePickerColor_exposer.def( 
                "onRender"
                , onRender_function_type( &IdePickerColor_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( IdePickerColor_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdePickerColor_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &IdePickerColor_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdePickerColor_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdePickerColor_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&IdePickerColor_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdePickerColor_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdePickerColor_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&IdePickerColor_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( IdePickerColor_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdePickerColor_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &IdePickerColor_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "value"[fget=::osiris::IdePickerColor::getValue, fset=::osiris::IdePickerColor::setValue]
        
            typedef ::osiris::String ( ::osiris::IdePickerColor::*fget )(  ) const;
            typedef void ( ::osiris::IdePickerColor::*fset )( ::osiris::String const & ) ;
            
            IdePickerColor_exposer.add_property( 
                "value"
                , fget( &::osiris::IdePickerColor::getValue )
                , fset( &::osiris::IdePickerColor::setValue )
                , "get\\set property, built on top of \"osiris::String osiris::IdePickerColor::getValue() const [member function]\" and \"void osiris::IdePickerColor::setValue(osiris::String const & value) [member function]\"" );
        
        }
    }

}
