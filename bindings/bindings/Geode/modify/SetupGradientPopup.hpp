#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupGradientPopup.hpp>
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

	#ifndef GEODE_STATICS_onBlending
		#define GEODE_STATICS_onBlending
		GEODE_AS_STATIC_FUNCTION(onBlending) 
	#endif

	#ifndef GEODE_STATICS_onZLayer
		#define GEODE_STATICS_onZLayer
		GEODE_AS_STATIC_FUNCTION(onZLayer) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateBlending
		#define GEODE_STATICS_updateBlending
		GEODE_AS_STATIC_FUNCTION(updateBlending) 
	#endif

	#ifndef GEODE_STATICS_updateBlendingLabel
		#define GEODE_STATICS_updateBlendingLabel
		GEODE_AS_STATIC_FUNCTION(updateBlendingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateGradientLabels
		#define GEODE_STATICS_updateGradientLabels
		GEODE_AS_STATIC_FUNCTION(updateGradientLabels) 
	#endif

	#ifndef GEODE_STATICS_updateZLayerButtons
		#define GEODE_STATICS_updateZLayerButtons
		GEODE_AS_STATIC_FUNCTION(updateZLayerButtons) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onPlusButton
		#define GEODE_STATICS_onPlusButton
		GEODE_AS_STATIC_FUNCTION(onPlusButton) 
	#endif

	#ifndef GEODE_STATICS_updateToggleItem
		#define GEODE_STATICS_updateToggleItem
		GEODE_AS_STATIC_FUNCTION(updateToggleItem) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBlending
		#define GEODE_CONCEPT_CHECK_onBlending
		GEODE_CONCEPT_FUNCTION_CHECK(onBlending) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onZLayer
		#define GEODE_CONCEPT_CHECK_onZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(onZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlending
		#define GEODE_CONCEPT_CHECK_updateBlending
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlending) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlendingLabel
		#define GEODE_CONCEPT_CHECK_updateBlendingLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlendingLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGradientLabels
		#define GEODE_CONCEPT_CHECK_updateGradientLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateGradientLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZLayerButtons
		#define GEODE_CONCEPT_CHECK_updateZLayerButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateZLayerButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlusButton
		#define GEODE_CONCEPT_CHECK_onPlusButton
		GEODE_CONCEPT_FUNCTION_CHECK(onPlusButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateToggleItem
		#define GEODE_CONCEPT_CHECK_updateToggleItem
		GEODE_CONCEPT_FUNCTION_CHECK(updateToggleItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupGradientPopup> : ModifyBase<ModifyDerive<Der, SetupGradientPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupGradientPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupGradientPopup>>::ModifyBase;
		using Base = SetupGradientPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupGradientPopup, create, , GradientTriggerObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupGradientPopup, init, , GradientTriggerObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupGradientPopup, onBlending, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupGradientPopup, onZLayer, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupGradientPopup, sliderChanged, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupGradientPopup, updateBlending, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupGradientPopup, updateBlendingLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupGradientPopup, updateGradientLabels, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupGradientPopup, updateZLayerButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6a70, Thiscall, SetupGradientPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6b80, Thiscall, SetupGradientPopup, onPlusButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f6c00, Thiscall, SetupGradientPopup, updateToggleItem, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f7010, Thiscall, SetupGradientPopup, valueDidChange, int, float)
		}
	};
}
