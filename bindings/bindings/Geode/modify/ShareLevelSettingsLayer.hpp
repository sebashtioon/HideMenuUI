#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShareLevelSettingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCopyable
		#define GEODE_STATICS_onCopyable
		GEODE_AS_STATIC_FUNCTION(onCopyable) 
	#endif

	#ifndef GEODE_STATICS_onEditPassword
		#define GEODE_STATICS_onEditPassword
		GEODE_AS_STATIC_FUNCTION(onEditPassword) 
	#endif

	#ifndef GEODE_STATICS_onPassword
		#define GEODE_STATICS_onPassword
		GEODE_AS_STATIC_FUNCTION(onPassword) 
	#endif

	#ifndef GEODE_STATICS_onUnlisted
		#define GEODE_STATICS_onUnlisted
		GEODE_AS_STATIC_FUNCTION(onUnlisted) 
	#endif

	#ifndef GEODE_STATICS_onUnlistedFriendsOnly
		#define GEODE_STATICS_onUnlistedFriendsOnly
		GEODE_AS_STATIC_FUNCTION(onUnlistedFriendsOnly) 
	#endif

	#ifndef GEODE_STATICS_updateSettingsState
		#define GEODE_STATICS_updateSettingsState
		GEODE_AS_STATIC_FUNCTION(updateSettingsState) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopyable
		#define GEODE_CONCEPT_CHECK_onCopyable
		GEODE_CONCEPT_FUNCTION_CHECK(onCopyable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditPassword
		#define GEODE_CONCEPT_CHECK_onEditPassword
		GEODE_CONCEPT_FUNCTION_CHECK(onEditPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPassword
		#define GEODE_CONCEPT_CHECK_onPassword
		GEODE_CONCEPT_FUNCTION_CHECK(onPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnlisted
		#define GEODE_CONCEPT_CHECK_onUnlisted
		GEODE_CONCEPT_FUNCTION_CHECK(onUnlisted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnlistedFriendsOnly
		#define GEODE_CONCEPT_CHECK_onUnlistedFriendsOnly
		GEODE_CONCEPT_FUNCTION_CHECK(onUnlistedFriendsOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSettingsState
		#define GEODE_CONCEPT_CHECK_updateSettingsState
		GEODE_CONCEPT_FUNCTION_CHECK(updateSettingsState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_numberInputClosed
		#define GEODE_CONCEPT_CHECK_numberInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(numberInputClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShareLevelSettingsLayer> : ModifyBase<ModifyDerive<Der, ShareLevelSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShareLevelSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, ShareLevelSettingsLayer>>::ModifyBase;
		using Base = ShareLevelSettingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ShareLevelSettingsLayer, create, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ShareLevelSettingsLayer, init, , GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ShareLevelSettingsLayer, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ShareLevelSettingsLayer, onCopyable, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ShareLevelSettingsLayer, onEditPassword, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ShareLevelSettingsLayer, onPassword, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ShareLevelSettingsLayer, onUnlisted, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ShareLevelSettingsLayer, onUnlistedFriendsOnly, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ShareLevelSettingsLayer, updateSettingsState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x466070, Thiscall, ShareLevelSettingsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShareLevelSettingsLayer, numberInputClosed, NumberInputLayer*)
		}
	};
}
