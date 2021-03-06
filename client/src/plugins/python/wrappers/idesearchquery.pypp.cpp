// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "idesearchquery.h"
#include "idesearchglobalparams.h"
#include "searchquery.h"
#include "xmlstylesheet.h"
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
#include "idesearchquery.pypp.hpp"

namespace bp = boost::python;

struct IdeSearchQuery_wrapper : ::osiris::IdeSearchQuery, ::osiris::PythonWrapper< ::osiris::IdeSearchQuery > {

    IdeSearchQuery_wrapper(::boost::shared_ptr< osiris::SearchQuery > query=nullptr )
    : ::osiris::IdeSearchQuery( query )
      , ::osiris::PythonWrapper< ::osiris::IdeSearchQuery >(){
        // constructor
    
    }

    static boost::python::object getQuery( ::osiris::IdeSearchQuery const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::SearchQuery> result = inst.getQuery();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getShowParams( ::osiris::IdeSearchQuery const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getShowParams();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getDirectRun( ::osiris::IdeSearchQuery const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getDirectRun();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static void doFeed( ::osiris::IdeSearchQuery & inst, ::osiris::String const & title, ::osiris::String const & description, ::osiris::String const & body, ::osiris::String const & link, ::osiris::String const & language ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.doFeed(title, description, body, link, language);
        __pythreadSaver.restore();
    }

    virtual ::osiris::String getTemplatePath(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getTemplatePath = this->get_override( "getTemplatePath" ) )
            return func_getTemplatePath(  );
        else{
            __pystate.leave();
            return this->::osiris::IdeSearchQuery::getTemplatePath(  );
        }
    }
    
    ::osiris::String default_getTemplatePath(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IdeSearchQuery::getTemplatePath( );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IdeSearchQuery::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeSearchQuery::onInit( );
    }

    virtual void onLoad(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IdeSearchQuery::onLoad(  );
        }
    }
    
    virtual void default_onLoad(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeSearchQuery::onLoad( );
    }

    virtual void onPreRender(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::IdeSearchQuery::onPreRender(  );
        }
    }
    
    virtual void default_onPreRender(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdeSearchQuery::onPreRender( );
    }

    static void setDirectRun( ::osiris::IdeSearchQuery & inst, bool const directRun ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setDirectRun(directRun);
        __pythreadSaver.restore();
    }

    static void setQuery( ::osiris::IdeSearchQuery & inst, ::boost::shared_ptr< osiris::SearchQuery > query ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setQuery(query);
        __pythreadSaver.restore();
    }

    static void setShowParams( ::osiris::IdeSearchQuery & inst, bool const showParams ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setShowParams(showParams);
        __pythreadSaver.restore();
    }

    bool decodeEvent( ::osiris::String const & command, ::osiris::String & eventName, ::osiris::HtmlEvent & e ) const {
        return ::osiris::IHtmlControl::decodeEvent( boost::ref(command), boost::ref(eventName), boost::ref(e) );
    }

    ::osiris::String encodeEvent( ::osiris::String const & eventName, ::osiris::HtmlEvent const * e=(nullptr) ) const {
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

    virtual void onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(nullptr) ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEvent = this->get_override( "onEvent" ) )
            func_onEvent( boost::ref(name), boost::python::ptr(e) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
        }
    }
    
    virtual void default_onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(nullptr) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
    }

    virtual void onInitStylesheet(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInitStylesheet = this->get_override( "onInitStylesheet" ) )
            func_onInitStylesheet(  );
        else{
            __pystate.leave();
            this->::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInitStylesheet(  );
        }
    }
    
    virtual void default_onInitStylesheet(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInitStylesheet( );
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

void register_IdeSearchQuery_class(){

    { //::osiris::IdeSearchQuery
        typedef ::boost::python::class_< IdeSearchQuery_wrapper, ::boost::python::bases< ::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > > >, ::boost::noncopyable > IdeSearchQuery_exposer_t;
        IdeSearchQuery_exposer_t IdeSearchQuery_exposer = IdeSearchQuery_exposer_t( "IdeSearchQuery", ::boost::python::init< ::boost::python::optional< ::boost::shared_ptr< osiris::SearchQuery > > >(( ::boost::python::arg("query")=nullptr )) );
        ::boost::python::scope IdeSearchQuery_scope( IdeSearchQuery_exposer );
        ::boost::python::implicitly_convertible< ::boost::shared_ptr< osiris::SearchQuery >, ::osiris::IdeSearchQuery >();
        { //::osiris::IdeSearchQuery::getQuery
        
            typedef boost::python::object ( *getQuery_function_type )( ::osiris::IdeSearchQuery const & );
            
            IdeSearchQuery_exposer.def( 
                "getQuery"
                , getQuery_function_type( &IdeSearchQuery_wrapper::getQuery ) );
        
        }
        { //::osiris::IdeSearchQuery::getShowParams
        
            typedef boost::python::object ( *getShowParams_function_type )( ::osiris::IdeSearchQuery const & );
            
            IdeSearchQuery_exposer.def( 
                "getShowParams"
                , getShowParams_function_type( &IdeSearchQuery_wrapper::getShowParams ) );
        
        }
        { //::osiris::IdeSearchQuery::getDirectRun
        
            typedef boost::python::object ( *getDirectRun_function_type )( ::osiris::IdeSearchQuery const & );
            
            IdeSearchQuery_exposer.def( 
                "getDirectRun"
                , getDirectRun_function_type( &IdeSearchQuery_wrapper::getDirectRun ) );
        
        }
        { //::osiris::IdeSearchQuery::doFeed
        
            typedef void ( *doFeed_function_type )( ::osiris::IdeSearchQuery &,::osiris::String const &,::osiris::String const &,::osiris::String const &,::osiris::String const &,::osiris::String const & );
            
            IdeSearchQuery_exposer.def( 
                "doFeed"
                , doFeed_function_type( &IdeSearchQuery_wrapper::doFeed )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("title"), ::boost::python::arg("description"), ::boost::python::arg("body"), ::boost::python::arg("link"), ::boost::python::arg("language") ) );
        
        }
        { //::osiris::IdeSearchQuery::getTemplatePath
        
            typedef ::osiris::String ( ::osiris::IdeSearchQuery::*getTemplatePath_function_type )(  ) ;
            typedef ::osiris::String ( IdeSearchQuery_wrapper::*default_getTemplatePath_function_type )(  ) ;
            
            IdeSearchQuery_exposer.def( 
                "getTemplatePath"
                , getTemplatePath_function_type(&::osiris::IdeSearchQuery::getTemplatePath)
                , default_getTemplatePath_function_type(&IdeSearchQuery_wrapper::default_getTemplatePath) );
        
        }
        { //::osiris::IdeSearchQuery::onInit
        
            typedef void ( IdeSearchQuery_wrapper::*onInit_function_type )(  ) ;
            
            IdeSearchQuery_exposer.def( 
                "onInit"
                , onInit_function_type( &IdeSearchQuery_wrapper::default_onInit ) );
        
        }
        { //::osiris::IdeSearchQuery::onLoad
        
            typedef void ( IdeSearchQuery_wrapper::*onLoad_function_type )(  ) ;
            
            IdeSearchQuery_exposer.def( 
                "onLoad"
                , onLoad_function_type( &IdeSearchQuery_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IdeSearchQuery::onPreRender
        
            typedef void ( IdeSearchQuery_wrapper::*onPreRender_function_type )(  ) ;
            
            IdeSearchQuery_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &IdeSearchQuery_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IdeSearchQuery::setDirectRun
        
            typedef void ( *setDirectRun_function_type )( ::osiris::IdeSearchQuery &,bool const );
            
            IdeSearchQuery_exposer.def( 
                "setDirectRun"
                , setDirectRun_function_type( &IdeSearchQuery_wrapper::setDirectRun )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("directRun") ) );
        
        }
        { //::osiris::IdeSearchQuery::setQuery
        
            typedef void ( *setQuery_function_type )( ::osiris::IdeSearchQuery &,::boost::shared_ptr<osiris::SearchQuery> );
            
            IdeSearchQuery_exposer.def( 
                "setQuery"
                , setQuery_function_type( &IdeSearchQuery_wrapper::setQuery )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("query") ) );
        
        }
        { //::osiris::IdeSearchQuery::setShowParams
        
            typedef void ( *setShowParams_function_type )( ::osiris::IdeSearchQuery &,bool const );
            
            IdeSearchQuery_exposer.def( 
                "setShowParams"
                , setShowParams_function_type( &IdeSearchQuery_wrapper::setShowParams )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("showParams") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( IdeSearchQuery_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            IdeSearchQuery_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &IdeSearchQuery_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( IdeSearchQuery_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            IdeSearchQuery_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &IdeSearchQuery_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(nullptr) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( IdeSearchQuery_wrapper::*default_getSession_function_type )(  ) const;
            
            IdeSearchQuery_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&IdeSearchQuery_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( IdeSearchQuery_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            IdeSearchQuery_exposer.def( 
                "onEvent"
                , onEvent_function_type( &IdeSearchQuery_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(nullptr) ) );
        
        }
        { //::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInitStylesheet
        
            typedef ::osiris::IdeSearchQuery exported_class_t;
            typedef void ( IdeSearchQuery_wrapper::*onInitStylesheet_function_type )(  ) ;
            
            IdeSearchQuery_exposer.def( 
                "onInitStylesheet"
                , onInitStylesheet_function_type( &IdeSearchQuery_wrapper::default_onInitStylesheet ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( IdeSearchQuery_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            IdeSearchQuery_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &IdeSearchQuery_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onRender
        
            typedef void ( IdeSearchQuery_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdeSearchQuery_exposer.def( 
                "onRender"
                , onRender_function_type( &IdeSearchQuery_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( IdeSearchQuery_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdeSearchQuery_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &IdeSearchQuery_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdeSearchQuery_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdeSearchQuery_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&IdeSearchQuery_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdeSearchQuery_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdeSearchQuery_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&IdeSearchQuery_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( IdeSearchQuery_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdeSearchQuery_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &IdeSearchQuery_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "query"[fget=::osiris::IdeSearchQuery::getQuery, fset=::osiris::IdeSearchQuery::setQuery]
        
            typedef ::boost::shared_ptr<osiris::SearchQuery> ( ::osiris::IdeSearchQuery::*fget )(  ) const;
            typedef void ( ::osiris::IdeSearchQuery::*fset )( ::boost::shared_ptr<osiris::SearchQuery> ) ;
            
            IdeSearchQuery_exposer.add_property( 
                "query"
                , fget( &::osiris::IdeSearchQuery::getQuery )
                , fset( &::osiris::IdeSearchQuery::setQuery )
                , "get\\set property, built on top of \"boost::shared_ptr<osiris::SearchQuery> osiris::IdeSearchQuery::getQuery() const [member function]\" and \"void osiris::IdeSearchQuery::setQuery(boost::shared_ptr<osiris::SearchQuery> query) [member function]\"" );
        
        }
        { //property "showParams"[fget=::osiris::IdeSearchQuery::getShowParams]
        
            typedef bool ( ::osiris::IdeSearchQuery::*fget )(  ) const;
            
            IdeSearchQuery_exposer.add_property( 
                "showParams"
                , fget( &::osiris::IdeSearchQuery::getShowParams )
                , "get property, built on top of \"bool osiris::IdeSearchQuery::getShowParams() const [member function]\"" );
        
        }
        { //property "directRun"[fget=::osiris::IdeSearchQuery::getDirectRun]
        
            typedef bool ( ::osiris::IdeSearchQuery::*fget )(  ) const;
            
            IdeSearchQuery_exposer.add_property( 
                "directRun"
                , fget( &::osiris::IdeSearchQuery::getDirectRun )
                , "get property, built on top of \"bool osiris::IdeSearchQuery::getDirectRun() const [member function]\"" );
        
        }
    }

}
