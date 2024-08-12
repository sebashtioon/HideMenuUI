#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorSelectLiveOverlay.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_closeColorSelect
		#define GEODE_STATICS_closeColorSelect
		GEODE_AS_STATIC_FUNCTION(closeColorSelect) 
	#endif

	#ifndef GEODE_STATICS_colorValueChanged
		#define GEODE_STATICS_colorValueChanged
		GEODE_AS_STATIC_FUNCTION(colorValueChanged) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_createWithActions
		#define GEODE_STATICS_createWithActions
		GEODE_AS_STATIC_FUNCTION(createWithActions) 
	#endif

	#ifndef GEODE_STATICS_createWithObject
		#define GEODE_STATICS_createWithObject
		GEODE_AS_STATIC_FUNCTION(createWithObject) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_getColorValue
		#define GEODE_STATICS_getColorValue
		GEODE_AS_STATIC_FUNCTION(getColorValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSelectTab
		#define GEODE_STATICS_onSelectTab
		GEODE_AS_STATIC_FUNCTION(onSelectTab) 
	#endif

	#ifndef GEODE_STATICS_selectColor
		#define GEODE_STATICS_selectColor
		GEODE_AS_STATIC_FUNCTION(selectColor) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_toggleControls
		#define GEODE_STATICS_toggleControls
		GEODE_AS_STATIC_FUNCTION(toggleControls) 
	#endif

	#ifndef GEODE_STATICS_updateColorLabel
		#define GEODE_STATICS_updateColorLabel
		GEODE_AS_STATIC_FUNCTION(updateColorLabel) 
	#endif

	#ifndef GEODE_STATICS_updateColorValue
		#define GEODE_STATICS_updateColorValue
		GEODE_AS_STATIC_FUNCTION(updateColorValue) 
	#endif

	#ifndef GEODE_STATICS_updateOpacity
		#define GEODE_STATICS_updateOpacity
		GEODE_AS_STATIC_FUNCTION(updateOpacity) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeColorSelect
		#define GEODE_CONCEPT_CHECK_closeColorSelect
		GEODE_CONCEPT_FUNCTION_CHECK(closeColorSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorValueChanged
		#define GEODE_CONCEPT_CHECK_colorValueChanged
		GEODE_CONCEPT_FUNCTION_CHECK(colorValueChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithActions
		#define GEODE_CONCEPT_CHECK_createWithActions
		GEODE_CONCEPT_FUNCTION_CHECK(createWithActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithObject
		#define GEODE_CONCEPT_CHECK_createWithObject
		GEODE_CONCEPT_FUNCTION_CHECK(createWithObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorValue
		#define GEODE_CONCEPT_CHECK_getColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(getColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectTab
		#define GEODE_CONCEPT_CHECK_onSelectTab
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectColor
		#define GEODE_CONCEPT_CHECK_selectColor
		GEODE_CONCEPT_FUNCTION_CHECK(selectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleControls
		#define GEODE_CONCEPT_CHECK_toggleControls
		GEODE_CONCEPT_FUNCTION_CHECK(toggleControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorLabel
		#define GEODE_CONCEPT_CHECK_updateColorLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorValue
		#define GEODE_CONCEPT_CHECK_updateColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacity
		#define GEODE_CONCEPT_CHECK_updateOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorSelectLiveOverlay> : ModifyBase<ModifyDerive<Der, ColorSelectLiveOverlay>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorSelectLiveOverlay>>;
		using ModifyBase<ModifyDerive<Der, ColorSelectLiveOverlay>>::ModifyBase;
		using Base = ColorSelectLiveOverlay;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8a440, Default, ColorSelectLiveOverlay, create, ColorAction*, ColorAction*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, closeColorSelect, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, colorValueChanged, , cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, createToggleButton, , gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, createWithActions, , ColorAction*, ColorAction*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, createWithObject, , EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, getColorValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8a590, Thiscall, ColorSelectLiveOverlay, init, ColorAction*, ColorAction*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, onSelectTab, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, selectColor, , cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, sliderChanged, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, textChanged, , CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, textInputClosed, , CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, toggleControls, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, updateColorLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, updateColorValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, updateOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b9a0, Thiscall, ColorSelectLiveOverlay, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ColorSelectLiveOverlay, show, )
		}
	};
}
