#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EnhancedGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createRotateAction
		#define GEODE_STATICS_createRotateAction
		GEODE_AS_STATIC_FUNCTION(createRotateAction) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_previewAnimateOnTrigger
		#define GEODE_STATICS_previewAnimateOnTrigger
		GEODE_AS_STATIC_FUNCTION(previewAnimateOnTrigger) 
	#endif

	#ifndef GEODE_STATICS_refreshRotateAction
		#define GEODE_STATICS_refreshRotateAction
		GEODE_AS_STATIC_FUNCTION(refreshRotateAction) 
	#endif

	#ifndef GEODE_STATICS_resetSyncedAnimation
		#define GEODE_STATICS_resetSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(resetSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_setupAnimationVariables
		#define GEODE_STATICS_setupAnimationVariables
		GEODE_AS_STATIC_FUNCTION(setupAnimationVariables) 
	#endif

	#ifndef GEODE_STATICS_triggerAnimation
		#define GEODE_STATICS_triggerAnimation
		GEODE_AS_STATIC_FUNCTION(triggerAnimation) 
	#endif

	#ifndef GEODE_STATICS_updateRotateAction
		#define GEODE_STATICS_updateRotateAction
		GEODE_AS_STATIC_FUNCTION(updateRotateAction) 
	#endif

	#ifndef GEODE_STATICS_updateState
		#define GEODE_STATICS_updateState
		GEODE_AS_STATIC_FUNCTION(updateState) 
	#endif

	#ifndef GEODE_STATICS_updateUserCoin
		#define GEODE_STATICS_updateUserCoin
		GEODE_AS_STATIC_FUNCTION(updateUserCoin) 
	#endif

	#ifndef GEODE_STATICS_waitForAnimationTrigger
		#define GEODE_STATICS_waitForAnimationTrigger
		GEODE_AS_STATIC_FUNCTION(waitForAnimationTrigger) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateObject
		#define GEODE_STATICS_deactivateObject
		GEODE_AS_STATIC_FUNCTION(deactivateObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_animationTriggered
		#define GEODE_STATICS_animationTriggered
		GEODE_AS_STATIC_FUNCTION(animationTriggered) 
	#endif

	#ifndef GEODE_STATICS_activatedByPlayer
		#define GEODE_STATICS_activatedByPlayer
		GEODE_AS_STATIC_FUNCTION(activatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_hasBeenActivatedByPlayer
		#define GEODE_STATICS_hasBeenActivatedByPlayer
		GEODE_AS_STATIC_FUNCTION(hasBeenActivatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_resumeAudio
		#define GEODE_STATICS_resumeAudio
		GEODE_AS_STATIC_FUNCTION(resumeAudio) 
	#endif

	#ifndef GEODE_STATICS_resumeAudioDelayed
		#define GEODE_STATICS_resumeAudioDelayed
		GEODE_AS_STATIC_FUNCTION(resumeAudioDelayed) 
	#endif

	#ifndef GEODE_STATICS_hasBeenActivated
		#define GEODE_STATICS_hasBeenActivated
		GEODE_AS_STATIC_FUNCTION(hasBeenActivated) 
	#endif

	#ifndef GEODE_STATICS_saveActiveColors
		#define GEODE_STATICS_saveActiveColors
		GEODE_AS_STATIC_FUNCTION(saveActiveColors) 
	#endif

	#ifndef GEODE_STATICS_canAllowMultiActivate
		#define GEODE_STATICS_canAllowMultiActivate
		GEODE_AS_STATIC_FUNCTION(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_getHasSyncedAnimation
		#define GEODE_STATICS_getHasSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(getHasSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_getHasRotateAction
		#define GEODE_STATICS_getHasRotateAction
		GEODE_AS_STATIC_FUNCTION(getHasRotateAction) 
	#endif

	#ifndef GEODE_STATICS_canMultiActivate
		#define GEODE_STATICS_canMultiActivate
		GEODE_AS_STATIC_FUNCTION(canMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_powerOnObject
		#define GEODE_STATICS_powerOnObject
		GEODE_AS_STATIC_FUNCTION(powerOnObject) 
	#endif

	#ifndef GEODE_STATICS_powerOffObject
		#define GEODE_STATICS_powerOffObject
		GEODE_AS_STATIC_FUNCTION(powerOffObject) 
	#endif

	#ifndef GEODE_STATICS_stateSensitiveOff
		#define GEODE_STATICS_stateSensitiveOff
		GEODE_AS_STATIC_FUNCTION(stateSensitiveOff) 
	#endif

	#ifndef GEODE_STATICS_updateSyncedAnimation
		#define GEODE_STATICS_updateSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_updateAnimateOnTrigger
		#define GEODE_STATICS_updateAnimateOnTrigger
		GEODE_AS_STATIC_FUNCTION(updateAnimateOnTrigger) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createRotateAction
		#define GEODE_CONCEPT_CHECK_createRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(createRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_previewAnimateOnTrigger
		#define GEODE_CONCEPT_CHECK_previewAnimateOnTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(previewAnimateOnTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshRotateAction
		#define GEODE_CONCEPT_CHECK_refreshRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(refreshRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSyncedAnimation
		#define GEODE_CONCEPT_CHECK_resetSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(resetSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupAnimationVariables
		#define GEODE_CONCEPT_CHECK_setupAnimationVariables
		GEODE_CONCEPT_FUNCTION_CHECK(setupAnimationVariables) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerAnimation
		#define GEODE_CONCEPT_CHECK_triggerAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(triggerAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRotateAction
		#define GEODE_CONCEPT_CHECK_updateRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateState
		#define GEODE_CONCEPT_CHECK_updateState
		GEODE_CONCEPT_FUNCTION_CHECK(updateState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserCoin
		#define GEODE_CONCEPT_CHECK_updateUserCoin
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_waitForAnimationTrigger
		#define GEODE_CONCEPT_CHECK_waitForAnimationTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(waitForAnimationTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateObject
		#define GEODE_CONCEPT_CHECK_deactivateObject
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerActivated
		#define GEODE_CONCEPT_CHECK_triggerActivated
		GEODE_CONCEPT_FUNCTION_CHECK(triggerActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreObject
		#define GEODE_CONCEPT_CHECK_restoreObject
		GEODE_CONCEPT_FUNCTION_CHECK(restoreObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationTriggered
		#define GEODE_CONCEPT_CHECK_animationTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(animationTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatedByPlayer
		#define GEODE_CONCEPT_CHECK_activatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(activatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenActivatedByPlayer
		#define GEODE_CONCEPT_CHECK_hasBeenActivatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenActivatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAudio
		#define GEODE_CONCEPT_CHECK_resumeAudio
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAudioDelayed
		#define GEODE_CONCEPT_CHECK_resumeAudioDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAudioDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenActivated
		#define GEODE_CONCEPT_CHECK_hasBeenActivated
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveActiveColors
		#define GEODE_CONCEPT_CHECK_saveActiveColors
		GEODE_CONCEPT_FUNCTION_CHECK(saveActiveColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canAllowMultiActivate
		#define GEODE_CONCEPT_CHECK_canAllowMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasSyncedAnimation
		#define GEODE_CONCEPT_CHECK_getHasSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(getHasSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasRotateAction
		#define GEODE_CONCEPT_CHECK_getHasRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(getHasRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canMultiActivate
		#define GEODE_CONCEPT_CHECK_canMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(canMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_powerOnObject
		#define GEODE_CONCEPT_CHECK_powerOnObject
		GEODE_CONCEPT_FUNCTION_CHECK(powerOnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_powerOffObject
		#define GEODE_CONCEPT_CHECK_powerOffObject
		GEODE_CONCEPT_FUNCTION_CHECK(powerOffObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stateSensitiveOff
		#define GEODE_CONCEPT_CHECK_stateSensitiveOff
		GEODE_CONCEPT_FUNCTION_CHECK(stateSensitiveOff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSyncedAnimation
		#define GEODE_CONCEPT_CHECK_updateSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAnimateOnTrigger
		#define GEODE_CONCEPT_CHECK_updateAnimateOnTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(updateAnimateOnTrigger) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EnhancedGameObject> : ModifyBase<ModifyDerive<Der, EnhancedGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EnhancedGameObject>>;
		using ModifyBase<ModifyDerive<Der, EnhancedGameObject>>::ModifyBase;
		using Base = EnhancedGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, create, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, createRotateAction, , float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a7c0, Thiscall, EnhancedGameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, previewAnimateOnTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, refreshRotateAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, resetSyncedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, setupAnimationVariables, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, triggerAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, updateRotateAction, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, updateState, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19c930, Thiscall, EnhancedGameObject, updateUserCoin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, waitForAnimationTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19afb0, Thiscall, EnhancedGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a970, Thiscall, EnhancedGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, deactivateObject, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, customObjectSetup, , gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, getSaveString, , GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, triggerActivated, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, animationTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, activatedByPlayer, , PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, hasBeenActivatedByPlayer, , PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, resumeAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, resumeAudioDelayed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, hasBeenActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, saveActiveColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, canAllowMultiActivate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, getHasSyncedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, getHasRotateAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, canMultiActivate, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, powerOnObject, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, powerOffObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, stateSensitiveOff, , GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19ddf0, Thiscall, EnhancedGameObject, updateSyncedAnimation, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(EnhancedGameObject, updateAnimateOnTrigger, , bool)
		}
	};
}
