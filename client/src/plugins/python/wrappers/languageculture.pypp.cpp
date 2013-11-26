// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "languageculture.h"
#include "languageculture.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getID_60839160da9d00c03e880e1649f18906( ::osiris::LanguageCulture const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getID();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static boost::python::object getEnglishName_23ec61c33f00dfbd7ff742d47ae8f884( ::osiris::LanguageCulture const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getEnglishName();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static boost::python::object getNativeName_abb919119b8bd7fc6e179de6408bd626( ::osiris::LanguageCulture const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getNativeName();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static boost::python::object isNeutralCulture_3db51552a5521f8bd0d7c45c819ca905( ::osiris::LanguageCulture const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.isNeutralCulture();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getDefaultNotNeutral_05ee53c1df1bdd22e4abc06b64b8e863( ::osiris::LanguageCulture const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getDefaultNotNeutral();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static boost::python::object getIsoName_d20e3d97f9d95bc513255b9facf48b77( ::osiris::LanguageCulture const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getIsoName();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static boost::python::object getLCID_daf5fcb4cc81302d14e0fc53e967cc90( ::osiris::LanguageCulture const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = inst.getLCID();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getDefaultTimeOffset_2a3c5054efdbbb4421c9af8164538670( ::osiris::LanguageCulture const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::int32 result = inst.getDefaultTimeOffset();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getTranslationAvaible_cf9a00aa22b51289041864974cb06852( ::osiris::LanguageCulture const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.getTranslationAvaible();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getParent_26ae642c2911eff34d042d04247dcf04( ::osiris::LanguageCulture const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::LanguageCulture> result = inst.getParent();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getCultures_1eaf3311369acf1b1987225bd3c8df74( ::osiris::LanguageCulture & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::unordered::unordered_map<osiris::String, boost::shared_ptr<osiris::LanguageCulture>, boost::hash<osiris::String>, std::equal_to<osiris::String>, osiris::StdAllocator<std::pair<osiris::String const, boost::shared_ptr<osiris::LanguageCulture> >, osiris::SysAllocator<std::pair<osiris::String const, boost::shared_ptr<osiris::LanguageCulture> > > > > & result = inst.getCultures();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::reference_existing_object > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::boost::unordered::unordered_map<osiris::String, boost::shared_ptr<osiris::LanguageCulture>, boost::hash<osiris::String>, std::equal_to<osiris::String>, osiris::StdAllocator<std::pair<osiris::String const, boost::shared_ptr<osiris::LanguageCulture> >, osiris::SysAllocator<std::pair<osiris::String const, boost::shared_ptr<osiris::LanguageCulture> > > > > & >( result ) );
}

static boost::python::object getTranslationDerivedAvaible_4eceba898de696aef49118b54c299e5b( ::osiris::LanguageCulture & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.getTranslationDerivedAvaible();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object formatDate_a01831df696dc694d6d5390f539505c4( ::osiris::LanguageCulture const & inst, ::osiris::DateTime const & dt, ::osiris::DateTime::DateTimePattern const & pattern, ::osiris::int32 timeOffset, ::osiris::int32 timeDST ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.formatDate(dt, pattern, timeOffset, timeDST);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object formatDate_a8af6b7ec46f5b6808c69180330c8ac9( ::osiris::LanguageCulture const & inst, ::osiris::DateTime const & dt, ::osiris::String const & pattern, ::osiris::int32 timeOffset, ::osiris::int32 timeDST ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.formatDate(dt, pattern, timeOffset, timeDST);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object addCulture_d077b3cc07aa630c20e33f78387efb4d( ::osiris::LanguageCulture & inst, ::osiris::String const & id ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::LanguageCulture> result = inst.addCulture(id);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object formatTime_5078c1ec4093b46d47de09ae35017ba8( ::osiris::LanguageCulture const & inst, double time ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.formatTime(time);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getCulture_dec6ccca77531ad388e7f01316f1e1a7( ::osiris::LanguageCulture const & inst, ::osiris::String const & id ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::LanguageCulture> result = inst.getCulture(id);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object isParentOf_bf291a1af71a415c38e4b77d9f28cae1( ::osiris::LanguageCulture & inst, ::osiris::String const & id ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.isParentOf(id);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void parse_53ce8e2d1f556fc30776b82d0c1b845c( ::osiris::LanguageCulture & inst, ::boost::shared_ptr< osiris::XMLNode > node ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.parse(node);
    __pythreadSaver.restore();
}

static void setTranslationAvaible_2407d32fd2ba6d9f4955e624baced45b( ::osiris::LanguageCulture & inst, bool value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setTranslationAvaible(value);
    __pythreadSaver.restore();
}

void register_LanguageCulture_class(){

    { //::osiris::LanguageCulture
        typedef ::boost::python::class_< ::osiris::LanguageCulture, ::boost::noncopyable > LanguageCulture_exposer_t;
        LanguageCulture_exposer_t LanguageCulture_exposer = LanguageCulture_exposer_t( "LanguageCulture", ::boost::python::init< ::boost::python::optional< ::boost::shared_ptr< osiris::LanguageCulture > > >(( ::boost::python::arg("parent")=osiris::null )) );
        ::boost::python::scope LanguageCulture_scope( LanguageCulture_exposer );
        ::boost::python::implicitly_convertible< ::boost::shared_ptr< osiris::LanguageCulture >, ::osiris::LanguageCulture >();
        { //::osiris::LanguageCulture::getID
        
            typedef boost::python::object ( *getID_function_type )( ::osiris::LanguageCulture const & );
            
            LanguageCulture_exposer.def( 
                "getID"
                , getID_function_type( &getID_60839160da9d00c03e880e1649f18906 ) );
        
        }
        { //::osiris::LanguageCulture::getEnglishName
        
            typedef boost::python::object ( *getEnglishName_function_type )( ::osiris::LanguageCulture const & );
            
            LanguageCulture_exposer.def( 
                "getEnglishName"
                , getEnglishName_function_type( &getEnglishName_23ec61c33f00dfbd7ff742d47ae8f884 ) );
        
        }
        { //::osiris::LanguageCulture::getNativeName
        
            typedef boost::python::object ( *getNativeName_function_type )( ::osiris::LanguageCulture const & );
            
            LanguageCulture_exposer.def( 
                "getNativeName"
                , getNativeName_function_type( &getNativeName_abb919119b8bd7fc6e179de6408bd626 ) );
        
        }
        { //::osiris::LanguageCulture::isNeutralCulture
        
            typedef boost::python::object ( *isNeutralCulture_function_type )( ::osiris::LanguageCulture const & );
            
            LanguageCulture_exposer.def( 
                "isNeutralCulture"
                , isNeutralCulture_function_type( &isNeutralCulture_3db51552a5521f8bd0d7c45c819ca905 ) );
        
        }
        { //::osiris::LanguageCulture::getDefaultNotNeutral
        
            typedef boost::python::object ( *getDefaultNotNeutral_function_type )( ::osiris::LanguageCulture const & );
            
            LanguageCulture_exposer.def( 
                "getDefaultNotNeutral"
                , getDefaultNotNeutral_function_type( &getDefaultNotNeutral_05ee53c1df1bdd22e4abc06b64b8e863 ) );
        
        }
        { //::osiris::LanguageCulture::getIsoName
        
            typedef boost::python::object ( *getIsoName_function_type )( ::osiris::LanguageCulture const & );
            
            LanguageCulture_exposer.def( 
                "getIsoName"
                , getIsoName_function_type( &getIsoName_d20e3d97f9d95bc513255b9facf48b77 ) );
        
        }
        { //::osiris::LanguageCulture::getLCID
        
            typedef boost::python::object ( *getLCID_function_type )( ::osiris::LanguageCulture const & );
            
            LanguageCulture_exposer.def( 
                "getLCID"
                , getLCID_function_type( &getLCID_daf5fcb4cc81302d14e0fc53e967cc90 ) );
        
        }
        { //::osiris::LanguageCulture::getDefaultTimeOffset
        
            typedef boost::python::object ( *getDefaultTimeOffset_function_type )( ::osiris::LanguageCulture const & );
            
            LanguageCulture_exposer.def( 
                "getDefaultTimeOffset"
                , getDefaultTimeOffset_function_type( &getDefaultTimeOffset_2a3c5054efdbbb4421c9af8164538670 ) );
        
        }
        { //::osiris::LanguageCulture::getTranslationAvaible
        
            typedef boost::python::object ( *getTranslationAvaible_function_type )( ::osiris::LanguageCulture const & );
            
            LanguageCulture_exposer.def( 
                "getTranslationAvaible"
                , getTranslationAvaible_function_type( &getTranslationAvaible_cf9a00aa22b51289041864974cb06852 ) );
        
        }
        { //::osiris::LanguageCulture::getParent
        
            typedef boost::python::object ( *getParent_function_type )( ::osiris::LanguageCulture const & );
            
            LanguageCulture_exposer.def( 
                "getParent"
                , getParent_function_type( &getParent_26ae642c2911eff34d042d04247dcf04 ) );
        
        }
        { //::osiris::LanguageCulture::getCultures
        
            typedef boost::python::object ( *getCultures_function_type )( ::osiris::LanguageCulture & );
            
            LanguageCulture_exposer.def( 
                "getCultures"
                , getCultures_function_type( &getCultures_1eaf3311369acf1b1987225bd3c8df74 ) );
        
        }
        { //::osiris::LanguageCulture::getTranslationDerivedAvaible
        
            typedef boost::python::object ( *getTranslationDerivedAvaible_function_type )( ::osiris::LanguageCulture & );
            
            LanguageCulture_exposer.def( 
                "getTranslationDerivedAvaible"
                , getTranslationDerivedAvaible_function_type( &getTranslationDerivedAvaible_4eceba898de696aef49118b54c299e5b ) );
        
        }
        { //::osiris::LanguageCulture::formatDate
        
            typedef boost::python::object ( *formatDate_function_type )( ::osiris::LanguageCulture const &,::osiris::DateTime const &,::osiris::DateTime::DateTimePattern const &,::osiris::int32,::osiris::int32 );
            
            LanguageCulture_exposer.def( 
                "formatDate"
                , formatDate_function_type( &formatDate_a01831df696dc694d6d5390f539505c4 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("dt"), ::boost::python::arg("pattern"), ::boost::python::arg("timeOffset"), ::boost::python::arg("timeDST") ) );
        
        }
        { //::osiris::LanguageCulture::formatDate
        
            typedef boost::python::object ( *formatDate_function_type )( ::osiris::LanguageCulture const &,::osiris::DateTime const &,::osiris::String const &,::osiris::int32,::osiris::int32 );
            
            LanguageCulture_exposer.def( 
                "formatDate"
                , formatDate_function_type( &formatDate_a8af6b7ec46f5b6808c69180330c8ac9 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("dt"), ::boost::python::arg("pattern"), ::boost::python::arg("timeOffset"), ::boost::python::arg("timeDST") ) );
        
        }
        { //::osiris::LanguageCulture::addCulture
        
            typedef boost::python::object ( *addCulture_function_type )( ::osiris::LanguageCulture &,::osiris::String const & );
            
            LanguageCulture_exposer.def( 
                "addCulture"
                , addCulture_function_type( &addCulture_d077b3cc07aa630c20e33f78387efb4d )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::LanguageCulture::formatTime
        
            typedef boost::python::object ( *formatTime_function_type )( ::osiris::LanguageCulture const &,double );
            
            LanguageCulture_exposer.def( 
                "formatTime"
                , formatTime_function_type( &formatTime_5078c1ec4093b46d47de09ae35017ba8 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("time") ) );
        
        }
        { //::osiris::LanguageCulture::getCulture
        
            typedef boost::python::object ( *getCulture_function_type )( ::osiris::LanguageCulture const &,::osiris::String const & );
            
            LanguageCulture_exposer.def( 
                "getCulture"
                , getCulture_function_type( &getCulture_dec6ccca77531ad388e7f01316f1e1a7 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::LanguageCulture::isParentOf
        
            typedef boost::python::object ( *isParentOf_function_type )( ::osiris::LanguageCulture &,::osiris::String const & );
            
            LanguageCulture_exposer.def( 
                "isParentOf"
                , isParentOf_function_type( &isParentOf_bf291a1af71a415c38e4b77d9f28cae1 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::LanguageCulture::parse
        
            typedef void ( *parse_function_type )( ::osiris::LanguageCulture &,::boost::shared_ptr<osiris::XMLNode> );
            
            LanguageCulture_exposer.def( 
                "parse"
                , parse_function_type( &parse_53ce8e2d1f556fc30776b82d0c1b845c )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("node") ) );
        
        }
        { //::osiris::LanguageCulture::setTranslationAvaible
        
            typedef void ( *setTranslationAvaible_function_type )( ::osiris::LanguageCulture &,bool );
            
            LanguageCulture_exposer.def( 
                "setTranslationAvaible"
                , setTranslationAvaible_function_type( &setTranslationAvaible_2407d32fd2ba6d9f4955e624baced45b )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //property "translationAvaible"[fget=::osiris::LanguageCulture::getTranslationAvaible, fset=::osiris::LanguageCulture::setTranslationAvaible]
        
            typedef bool ( ::osiris::LanguageCulture::*fget )(  ) const;
            typedef void ( ::osiris::LanguageCulture::*fset )( bool ) ;
            
            LanguageCulture_exposer.add_property( 
                "translationAvaible"
                , fget( &::osiris::LanguageCulture::getTranslationAvaible )
                , fset( &::osiris::LanguageCulture::setTranslationAvaible )
                , "get\\set property, built on top of \"bool osiris::LanguageCulture::getTranslationAvaible() const [member function]\" and \"void osiris::LanguageCulture::setTranslationAvaible(bool value) [member function]\"" );
        
        }
        { //property "id"[fget=::osiris::LanguageCulture::getID]
        
            typedef ::osiris::String const & ( ::osiris::LanguageCulture::*fget )(  ) const;
            
            LanguageCulture_exposer.add_property( 
                "id"
                , ::boost::python::make_function( 
                      fget( &::osiris::LanguageCulture::getID )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::String const & osiris::LanguageCulture::getID() const [member function]\"" );
        
        }
        { //property "englishName"[fget=::osiris::LanguageCulture::getEnglishName]
        
            typedef ::osiris::String const & ( ::osiris::LanguageCulture::*fget )(  ) const;
            
            LanguageCulture_exposer.add_property( 
                "englishName"
                , ::boost::python::make_function( 
                      fget( &::osiris::LanguageCulture::getEnglishName )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::String const & osiris::LanguageCulture::getEnglishName() const [member function]\"" );
        
        }
        { //property "nativeName"[fget=::osiris::LanguageCulture::getNativeName]
        
            typedef ::osiris::String const & ( ::osiris::LanguageCulture::*fget )(  ) const;
            
            LanguageCulture_exposer.add_property( 
                "nativeName"
                , ::boost::python::make_function( 
                      fget( &::osiris::LanguageCulture::getNativeName )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::String const & osiris::LanguageCulture::getNativeName() const [member function]\"" );
        
        }
        { //property "defaultNotNeutral"[fget=::osiris::LanguageCulture::getDefaultNotNeutral]
        
            typedef ::osiris::String const & ( ::osiris::LanguageCulture::*fget )(  ) const;
            
            LanguageCulture_exposer.add_property( 
                "defaultNotNeutral"
                , ::boost::python::make_function( 
                      fget( &::osiris::LanguageCulture::getDefaultNotNeutral )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::String const & osiris::LanguageCulture::getDefaultNotNeutral() const [member function]\"" );
        
        }
        { //property "isoName"[fget=::osiris::LanguageCulture::getIsoName]
        
            typedef ::osiris::String const & ( ::osiris::LanguageCulture::*fget )(  ) const;
            
            LanguageCulture_exposer.add_property( 
                "isoName"
                , ::boost::python::make_function( 
                      fget( &::osiris::LanguageCulture::getIsoName )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::String const & osiris::LanguageCulture::getIsoName() const [member function]\"" );
        
        }
        { //property "lcid"[fget=::osiris::LanguageCulture::getLCID]
        
            typedef ::osiris::uint32 ( ::osiris::LanguageCulture::*fget )(  ) const;
            
            LanguageCulture_exposer.add_property( 
                "lcid"
                , fget( &::osiris::LanguageCulture::getLCID )
                , "get property, built on top of \"osiris::uint32 osiris::LanguageCulture::getLCID() const [member function]\"" );
        
        }
        { //property "defaultTimeOffset"[fget=::osiris::LanguageCulture::getDefaultTimeOffset]
        
            typedef ::osiris::int32 ( ::osiris::LanguageCulture::*fget )(  ) const;
            
            LanguageCulture_exposer.add_property( 
                "defaultTimeOffset"
                , fget( &::osiris::LanguageCulture::getDefaultTimeOffset )
                , "get property, built on top of \"osiris::int32 osiris::LanguageCulture::getDefaultTimeOffset() const [member function]\"" );
        
        }
        { //property "parent"[fget=::osiris::LanguageCulture::getParent]
        
            typedef ::boost::shared_ptr<osiris::LanguageCulture> ( ::osiris::LanguageCulture::*fget )(  ) const;
            
            LanguageCulture_exposer.add_property( 
                "parent"
                , fget( &::osiris::LanguageCulture::getParent )
                , "get property, built on top of \"boost::shared_ptr<osiris::LanguageCulture> osiris::LanguageCulture::getParent() const [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::LanguageCulture > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::LanguageCulture >, boost::shared_ptr< ::osiris::Object > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::LanguageCulture >, boost::shared_ptr< ::osiris::enable_this_ptr< osiris::LanguageCulture > > >();
    }

}
