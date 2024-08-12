#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AccountHelpLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_doUnlink
		#define GEODE_STATICS_doUnlink
		GEODE_AS_STATIC_FUNCTION(doUnlink) 
	#endif

	#ifndef GEODE_STATICS_exitLayer
		#define GEODE_STATICS_exitLayer
		GEODE_AS_STATIC_FUNCTION(exitLayer) 
	#endif

	#ifndef GEODE_STATICS_onAccountManagement
		#define GEODE_STATICS_onAccountManagement
		GEODE_AS_STATIC_FUNCTION(onAccountManagement) 
	#endif

	#ifndef GEODE_STATICS_onReLogin
		#define GEODE_STATICS_onReLogin
		GEODE_AS_STATIC_FUNCTION(onReLogin) 
	#endif

	#ifndef GEODE_STATICS_onUnlink
		#define GEODE_STATICS_onUnlink
		GEODE_AS_STATIC_FUNCTION(onUnlink) 
	#endif

	#ifndef GEODE_STATICS_updatePage
		#define GEODE_STATICS_updatePage
		GEODE_AS_STATIC_FUNCTION(updatePage) 
	#endif

	#ifndef GEODE_STATICS_verifyUnlink
		#define GEODE_STATICS_verifyUnlink
		GEODE_AS_STATIC_FUNCTION(verifyUnlink) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_layerHidden
		#define GEODE_STATICS_layerHidden
		GEODE_AS_STATIC_FUNCTION(layerHidden) 
	#endif

	#ifndef GEODE_STATICS_accountStatusChanged
		#define GEODE_STATICS_accountStatusChanged
		GEODE_AS_STATIC_FUNCTION(accountStatusChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doUnlink
		#define GEODE_CONCEPT_CHECK_doUnlink
		GEODE_CONCEPT_FUNCTION_CHECK(doUnlink) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitLayer
		#define GEODE_CONCEPT_CHECK_exitLayer
		GEODE_CONCEPT_FUNCTION_CHECK(exitLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAccountManagement
		#define GEODE_CONCEPT_CHECK_onAccountManagement
		GEODE_CONCEPT_FUNCTION_CHECK(onAccountManagement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReLogin
		#define GEODE_CONCEPT_CHECK_onReLogin
		GEODE_CONCEPT_FUNCTION_CHECK(onReLogin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnlink
		#define GEODE_CONCEPT_CHECK_onUnlink
		GEODE_CONCEPT_FUNCTION_CHECK(onUnlink) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePage
		#define GEODE_CONCEPT_CHECK_updatePage
		GEODE_CONCEPT_FUNCTION_CHECK(updatePage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyUnlink
		#define GEODE_CONCEPT_CHECK_verifyUnlink
		GEODE_CONCEPT_FUNCTION_CHECK(verifyUnlink) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerHidden
		#define GEODE_CONCEPT_CHECK_layerHidden
		GEODE_CONCEPT_FUNCTION_CHECK(layerHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_accountStatusChanged
		#define GEODE_CONCEPT_CHECK_accountStatusChanged
		GEODE_CONCEPT_FUNCTION_CHECK(accountStatusChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AccountHelpLayer> : ModifyBase<ModifyDerive<Der, AccountHelpLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AccountHelpLayer>>;
		using ModifyBase<ModifyDerive<Der, AccountHelpLayer>>::ModifyBase;
		using Base = AccountHelpLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AccountHelpLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AccountHelpLayer, doUnlink, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AccountHelpLayer, exitLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AccountHelpLayer, onAccountManagement, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AccountHelpLayer, onReLogin, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AccountHelpLayer, onUnlink, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AccountHelpLayer, updatePage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AccountHelpLayer, verifyUnlink, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7df90, Thiscall, AccountHelpLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(AccountHelpLayer, layerHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e690, Thiscall, AccountHelpLayer, accountStatusChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e970, Thiscall, AccountHelpLayer, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
