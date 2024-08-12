#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaMoveTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addAreaDefaultControls
		#define GEODE_STATICS_addAreaDefaultControls
		GEODE_AS_STATIC_FUNCTION(addAreaDefaultControls) 
	#endif

	#ifndef GEODE_STATICS_getModeValues
		#define GEODE_STATICS_getModeValues
		GEODE_AS_STATIC_FUNCTION(getModeValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeEffectID
		#define GEODE_STATICS_onNextFreeEffectID
		GEODE_AS_STATIC_FUNCTION(onNextFreeEffectID) 
	#endif

	#ifndef GEODE_STATICS_onSpecialTarget
		#define GEODE_STATICS_onSpecialTarget
		GEODE_AS_STATIC_FUNCTION(onSpecialTarget) 
	#endif

	#ifndef GEODE_STATICS_updateEnterTargetIDState
		#define GEODE_STATICS_updateEnterTargetIDState
		GEODE_AS_STATIC_FUNCTION(updateEnterTargetIDState) 
	#endif

	#ifndef GEODE_STATICS_updateInputValue
		#define GEODE_STATICS_updateInputValue
		GEODE_AS_STATIC_FUNCTION(updateInputValue) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_updateInputNode
		#define GEODE_STATICS_updateInputNode
		GEODE_AS_STATIC_FUNCTION(updateInputNode) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_triggerValueFromSliderValue
		#define GEODE_STATICS_triggerValueFromSliderValue
		GEODE_AS_STATIC_FUNCTION(triggerValueFromSliderValue) 
	#endif

	#ifndef GEODE_STATICS_triggerSliderValueFromValue
		#define GEODE_STATICS_triggerSliderValueFromValue
		GEODE_AS_STATIC_FUNCTION(triggerSliderValueFromValue) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAreaDefaultControls
		#define GEODE_CONCEPT_CHECK_addAreaDefaultControls
		GEODE_CONCEPT_FUNCTION_CHECK(addAreaDefaultControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getModeValues
		#define GEODE_CONCEPT_CHECK_getModeValues
		GEODE_CONCEPT_FUNCTION_CHECK(getModeValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMode
		#define GEODE_CONCEPT_CHECK_onMode
		GEODE_CONCEPT_FUNCTION_CHECK(onMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextFreeEffectID
		#define GEODE_CONCEPT_CHECK_onNextFreeEffectID
		GEODE_CONCEPT_FUNCTION_CHECK(onNextFreeEffectID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpecialTarget
		#define GEODE_CONCEPT_CHECK_onSpecialTarget
		GEODE_CONCEPT_FUNCTION_CHECK(onSpecialTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEnterTargetIDState
		#define GEODE_CONCEPT_CHECK_updateEnterTargetIDState
		GEODE_CONCEPT_FUNCTION_CHECK(updateEnterTargetIDState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInputValue
		#define GEODE_CONCEPT_CHECK_updateInputValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateInputValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		#define GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInputNode
		#define GEODE_CONCEPT_CHECK_updateInputNode
		GEODE_CONCEPT_FUNCTION_CHECK(updateInputNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerValueFromSliderValue
		#define GEODE_CONCEPT_CHECK_triggerValueFromSliderValue
		GEODE_CONCEPT_FUNCTION_CHECK(triggerValueFromSliderValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerSliderValueFromValue
		#define GEODE_CONCEPT_CHECK_triggerSliderValueFromValue
		GEODE_CONCEPT_FUNCTION_CHECK(triggerSliderValueFromValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAreaMoveTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaMoveTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaMoveTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaMoveTriggerPopup>>::ModifyBase;
		using Base = SetupAreaMoveTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupAreaMoveTriggerPopup, create, , EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupAreaMoveTriggerPopup, addAreaDefaultControls, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupAreaMoveTriggerPopup, getModeValues, , int, int&, bool&, bool&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupAreaMoveTriggerPopup, init, , EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupAreaMoveTriggerPopup, onMode, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupAreaMoveTriggerPopup, onNextFreeEffectID, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupAreaMoveTriggerPopup, onSpecialTarget, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupAreaMoveTriggerPopup, updateEnterTargetIDState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e2ff0, Thiscall, SetupAreaMoveTriggerPopup, updateInputValue, int, float&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e2920, Thiscall, SetupAreaMoveTriggerPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e2fc0, Thiscall, SetupAreaMoveTriggerPopup, updateInputNode, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e2e40, Thiscall, SetupAreaMoveTriggerPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e2f60, Thiscall, SetupAreaMoveTriggerPopup, triggerValueFromSliderValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3e2f90, Thiscall, SetupAreaMoveTriggerPopup, triggerSliderValueFromValue, int, float)
		}
	};
}
