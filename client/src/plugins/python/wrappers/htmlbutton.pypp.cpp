// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmlbutton.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "htmlbutton.pypp.hpp"

namespace bp = boost::python;

struct HtmlButton_wrapper : ::osiris::HtmlButton, ::osiris::PythonWrapper< ::osiris::HtmlButton > {

    HtmlButton_wrapper(::osiris::String const & caption=osiris::String::EMPTY )
    : ::osiris::HtmlButton( boost::ref(caption) )
      , ::osiris::PythonWrapper< ::osiris::HtmlButton >(){
        // constructor
    
    }

    static boost::python::object getCaption( ::osiris::HtmlButton const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getCaption();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getEventClick( ::osiris::HtmlButton const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::EventSource> result = inst.getEventClick();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::HtmlButton::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlButton::onInit( );
    }

    virtual void onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::HtmlButton::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlButton::onRender( boost::ref(writer) );
    }

    virtual void renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderAttributes = this->get_override( "renderAttributes" ) )
            func_renderAttributes( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::HtmlButton::renderAttributes( boost::ref(writer) );
        }
    }
    
    void default_renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlButton::renderAttributes( boost::ref(writer) );
    }

    static void setCaption( ::osiris::HtmlButton & inst, ::osiris::String const & caption ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setCaption(caption);
        __pythreadSaver.restore();
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

    virtual void onLoad(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onLoad(  );
        }
    }
    
    virtual void default_onLoad(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onLoad( );
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

void register_HtmlButton_class(){

    { //::osiris::HtmlButton
        typedef ::boost::python::class_< HtmlButton_wrapper, ::boost::python::bases< ::osiris::IHtmlControl >, ::boost::noncopyable > HtmlButton_exposer_t;
        HtmlButton_exposer_t HtmlButton_exposer = HtmlButton_exposer_t( "HtmlButton", ::boost::python::init< ::boost::python::optional< ::osiris::String const & > >(( ::boost::python::arg("caption")=osiris::String::EMPTY )) );
        ::boost::python::scope HtmlButton_scope( HtmlButton_exposer );
        ::boost::python::implicitly_convertible< ::osiris::String const &, ::osiris::HtmlButton >();
        { //::osiris::HtmlButton::getCaption
        
            typedef boost::python::object ( *getCaption_function_type )( ::osiris::HtmlButton const & );
            
            HtmlButton_exposer.def( 
                "getCaption"
                , getCaption_function_type( &HtmlButton_wrapper::getCaption ) );
        
        }
        { //::osiris::HtmlButton::getEventClick
        
            typedef boost::python::object ( *getEventClick_function_type )( ::osiris::HtmlButton const & );
            
            HtmlButton_exposer.def( 
                "getEventClick"
                , getEventClick_function_type( &HtmlButton_wrapper::getEventClick ) );
        
        }
        { //::osiris::HtmlButton::onInit
        
            typedef void ( HtmlButton_wrapper::*onInit_function_type )(  ) ;
            
            HtmlButton_exposer.def( 
                "onInit"
                , onInit_function_type( &HtmlButton_wrapper::default_onInit ) );
        
        }
        { //::osiris::HtmlButton::onRender
        
            typedef void ( HtmlButton_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlButton_exposer.def( 
                "onRender"
                , onRender_function_type( &HtmlButton_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::HtmlButton::renderAttributes
        
            typedef void ( ::osiris::HtmlButton::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlButton_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlButton_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::HtmlButton::renderAttributes)
                , default_renderAttributes_function_type(&HtmlButton_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::HtmlButton::setCaption
        
            typedef void ( *setCaption_function_type )( ::osiris::HtmlButton &,::osiris::String const & );
            
            HtmlButton_exposer.def( 
                "setCaption"
                , setCaption_function_type( &HtmlButton_wrapper::setCaption )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("caption") ) );
        
        }
        HtmlButton_exposer.def_readonly( "EVENT_ONCLICK", ::osiris::HtmlButton::EVENT_ONCLICK );
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( HtmlButton_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            HtmlButton_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &HtmlButton_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( HtmlButton_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            HtmlButton_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &HtmlButton_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( HtmlButton_wrapper::*default_getSession_function_type )(  ) const;
            
            HtmlButton_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&HtmlButton_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( HtmlButton_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            HtmlButton_exposer.def( 
                "onEvent"
                , onEvent_function_type( &HtmlButton_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( HtmlButton_wrapper::*onLoad_function_type )(  ) ;
            
            HtmlButton_exposer.def( 
                "onLoad"
                , onLoad_function_type( &HtmlButton_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( HtmlButton_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            HtmlButton_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &HtmlButton_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( HtmlButton_wrapper::*onPreRender_function_type )(  ) ;
            
            HtmlButton_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &HtmlButton_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( HtmlButton_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlButton_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &HtmlButton_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlButton_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlButton_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&HtmlButton_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( HtmlButton_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlButton_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &HtmlButton_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "caption"[fget=::osiris::HtmlButton::getCaption, fset=::osiris::HtmlButton::setCaption]
        
            typedef ::osiris::String const & ( ::osiris::HtmlButton::*fget )(  ) const;
            typedef void ( ::osiris::HtmlButton::*fset )( ::osiris::String const & ) ;
            
            HtmlButton_exposer.add_property( 
                "caption"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlButton::getCaption )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlButton::setCaption )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlButton::getCaption() const [member function]\" and \"void osiris::HtmlButton::setCaption(osiris::String const & caption) [member function]\"" );
        
        }
        { //property "eventClick"[fget=::osiris::HtmlButton::getEventClick]
        
            typedef ::boost::shared_ptr<osiris::EventSource> ( ::osiris::HtmlButton::*fget )(  ) const;
            
            HtmlButton_exposer.add_property( 
                "eventClick"
                , fget( &::osiris::HtmlButton::getEventClick )
                , "get property, built on top of \"boost::shared_ptr<osiris::EventSource> osiris::HtmlButton::getEventClick() const [member function]\"" );
        
        }
    }

}