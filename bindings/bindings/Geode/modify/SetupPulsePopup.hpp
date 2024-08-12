#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupPulsePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getColorValue
		#define GEODE_STATICS_getColorValue
		GEODE_AS_STATIC_FUNCTION(getColorValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onExclusive
		#define GEODE_STATICS_onExclusive
		GEODE_AS_STATIC_FUNCTION(onExclusive) 
	#endif

	#ifndef GEODE_STATICS_onGroupMainOnly
		#define GEODE_STATICS_onGroupMainOnly
		GEODE_AS_STATIC_FUNCTION(onGroupMainOnly) 
	#endif

	#ifndef GEODE_STATICS_onGroupSecondaryOnly
		#define GEODE_STATICS_onGroupSecondaryOnly
		GEODE_AS_STATIC_FUNCTION(onGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_STATICS_onHSVLegacyMode
		#define GEODE_STATICS_onHSVLegacyMode
		GEODE_AS_STATIC_FUNCTION(onHSVLegacyMode) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onSelectPulseMode
		#define GEODE_STATICS_onSelectPulseMode
		GEODE_AS_STATIC_FUNCTION(onSelectPulseMode) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpecialColor
		#define GEODE_STATICS_onSelectSpecialColor
		GEODE_AS_STATIC_FUNCTION(onSelectSpecialColor) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpecialTargetID
		#define GEODE_STATICS_onSelectSpecialTargetID
		GEODE_AS_STATIC_FUNCTION(onSelectSpecialTargetID) 
	#endif

	#ifndef GEODE_STATICS_onSelectTargetMode
		#define GEODE_STATICS_onSelectTargetMode
		GEODE_AS_STATIC_FUNCTION(onSelectTargetMode) 
	#endif

	#ifndef GEODE_STATICS_onUpdateCopyColor
		#define GEODE_STATICS_onUpdateCopyColor
		GEODE_AS_STATIC_FUNCTION(onUpdateCopyColor) 
	#endif

	#ifndef GEODE_STATICS_onUpdateCustomColor
		#define GEODE_STATICS_onUpdateCustomColor
		GEODE_AS_STATIC_FUNCTION(onUpdateCustomColor) 
	#endif

	#ifndef GEODE_STATICS_selectColor
		#define GEODE_STATICS_selectColor
		GEODE_AS_STATIC_FUNCTION(selectColor) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateColorLabels
		#define GEODE_STATICS_updateColorLabels
		GEODE_AS_STATIC_FUNCTION(updateColorLabels) 
	#endif

	#ifndef GEODE_STATICS_updateColorValue
		#define GEODE_STATICS_updateColorValue
		GEODE_AS_STATIC_FUNCTION(updateColorValue) 
	#endif

	#ifndef GEODE_STATICS_updateCopyColor
		#define GEODE_STATICS_updateCopyColor
		GEODE_AS_STATIC_FUNCTION(updateCopyColor) 
	#endif

	#ifndef GEODE_STATICS_updateCopyColorTextInputLabel
		#define GEODE_STATICS_updateCopyColorTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateCopyColorTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateFadeInLabel
		#define GEODE_STATICS_updateFadeInLabel
		GEODE_AS_STATIC_FUNCTION(updateFadeInLabel) 
	#endif

	#ifndef GEODE_STATICS_updateFadeInTime
		#define GEODE_STATICS_updateFadeInTime
		GEODE_AS_STATIC_FUNCTION(updateFadeInTime) 
	#endif

	#ifndef GEODE_STATICS_updateFadeOutLabel
		#define GEODE_STATICS_updateFadeOutLabel
		GEODE_AS_STATIC_FUNCTION(updateFadeOutLabel) 
	#endif

	#ifndef GEODE_STATICS_updateFadeOutTime
		#define GEODE_STATICS_updateFadeOutTime
		GEODE_AS_STATIC_FUNCTION(updateFadeOutTime) 
	#endif

	#ifndef GEODE_STATICS_updateGroupMainOnly
		#define GEODE_STATICS_updateGroupMainOnly
		GEODE_AS_STATIC_FUNCTION(updateGroupMainOnly) 
	#endif

	#ifndef GEODE_STATICS_updateGroupSecondaryOnly
		#define GEODE_STATICS_updateGroupSecondaryOnly
		GEODE_AS_STATIC_FUNCTION(updateGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_STATICS_updateHoldLabel
		#define GEODE_STATICS_updateHoldLabel
		GEODE_AS_STATIC_FUNCTION(updateHoldLabel) 
	#endif

	#ifndef GEODE_STATICS_updateHoldTime
		#define GEODE_STATICS_updateHoldTime
		GEODE_AS_STATIC_FUNCTION(updateHoldTime) 
	#endif

	#ifndef GEODE_STATICS_updateHSVValue
		#define GEODE_STATICS_updateHSVValue
		GEODE_AS_STATIC_FUNCTION(updateHSVValue) 
	#endif

	#ifndef GEODE_STATICS_updatePulseMode
		#define GEODE_STATICS_updatePulseMode
		GEODE_AS_STATIC_FUNCTION(updatePulseMode) 
	#endif

	#ifndef GEODE_STATICS_updatePulseTargetType
		#define GEODE_STATICS_updatePulseTargetType
		GEODE_AS_STATIC_FUNCTION(updatePulseTargetType) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_colorValueChanged
		#define GEODE_STATICS_colorValueChanged
		GEODE_AS_STATIC_FUNCTION(colorValueChanged) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorValue
		#define GEODE_CONCEPT_CHECK_getColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(getColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExclusive
		#define GEODE_CONCEPT_CHECK_onExclusive
		GEODE_CONCEPT_FUNCTION_CHECK(onExclusive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGroupMainOnly
		#define GEODE_CONCEPT_CHECK_onGroupMainOnly
		GEODE_CONCEPT_FUNCTION_CHECK(onGroupMainOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGroupSecondaryOnly
		#define GEODE_CONCEPT_CHECK_onGroupSecondaryOnly
		GEODE_CONCEPT_FUNCTION_CHECK(onGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHSVLegacyMode
		#define GEODE_CONCEPT_CHECK_onHSVLegacyMode
		GEODE_CONCEPT_FUNCTION_CHECK(onHSVLegacyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectPulseMode
		#define GEODE_CONCEPT_CHECK_onSelectPulseMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectPulseMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectSpecialColor
		#define GEODE_CONCEPT_CHECK_onSelectSpecialColor
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectSpecialColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectSpecialTargetID
		#define GEODE_CONCEPT_CHECK_onSelectSpecialTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectSpecialTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectTargetMode
		#define GEODE_CONCEPT_CHECK_onSelectTargetMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectTargetMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateCopyColor
		#define GEODE_CONCEPT_CHECK_onUpdateCopyColor
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateCopyColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateCustomColor
		#define GEODE_CONCEPT_CHECK_onUpdateCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateCustomColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectColor
		#define GEODE_CONCEPT_CHECK_selectColor
		GEODE_CONCEPT_FUNCTION_CHECK(selectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorLabels
		#define GEODE_CONCEPT_CHECK_updateColorLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorValue
		#define GEODE_CONCEPT_CHECK_updateColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCopyColor
		#define GEODE_CONCEPT_CHECK_updateCopyColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateCopyColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCopyColorTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateCopyColorTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCopyColorTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFadeInLabel
		#define GEODE_CONCEPT_CHECK_updateFadeInLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateFadeInLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFadeInTime
		#define GEODE_CONCEPT_CHECK_updateFadeInTime
		GEODE_CONCEPT_FUNCTION_CHECK(updateFadeInTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFadeOutLabel
		#define GEODE_CONCEPT_CHECK_updateFadeOutLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateFadeOutLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFadeOutTime
		#define GEODE_CONCEPT_CHECK_updateFadeOutTime
		GEODE_CONCEPT_FUNCTION_CHECK(updateFadeOutTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupMainOnly
		#define GEODE_CONCEPT_CHECK_updateGroupMainOnly
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupMainOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroupSecondaryOnly
		#define GEODE_CONCEPT_CHECK_updateGroupSecondaryOnly
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroupSecondaryOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHoldLabel
		#define GEODE_CONCEPT_CHECK_updateHoldLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateHoldLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHoldTime
		#define GEODE_CONCEPT_CHECK_updateHoldTime
		GEODE_CONCEPT_FUNCTION_CHECK(updateHoldTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHSVValue
		#define GEODE_CONCEPT_CHECK_updateHSVValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateHSVValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePulseMode
		#define GEODE_CONCEPT_CHECK_updatePulseMode
		GEODE_CONCEPT_FUNCTION_CHECK(updatePulseMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePulseTargetType
		#define GEODE_CONCEPT_CHECK_updatePulseTargetType
		GEODE_CONCEPT_FUNCTION_CHECK(updatePulseTargetType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetID
		#define GEODE_CONCEPT_CHECK_updateTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorValueChanged
		#define GEODE_CONCEPT_CHECK_colorValueChanged
		GEODE_CONCEPT_FUNCTION_CHECK(colorValueChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupPulsePopup> : ModifyBase<ModifyDerive<Der, SetupPulsePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupPulsePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupPulsePopup>>::ModifyBase;
		using Base = SetupPulsePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, create, , EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, getColorValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, init, , EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onCopy, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onExclusive, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onGroupMainOnly, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onGroupSecondaryOnly, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onHSVLegacyMode, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onPaste, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onSelectPulseMode, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onSelectSpecialColor, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onSelectSpecialTargetID, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onSelectTargetMode, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onUpdateCopyColor, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onUpdateCustomColor, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, selectColor, , cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, sliderChanged, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateColorLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateColorValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateCopyColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateCopyColorTextInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateFadeInLabel, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateFadeInTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateFadeOutLabel, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateFadeOutTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateGroupMainOnly, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateGroupSecondaryOnly, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateHoldLabel, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateHoldTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateHSVValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updatePulseMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updatePulseTargetType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateTargetID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, updateTextInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SetupPulsePopup, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410d50, Thiscall, SetupPulsePopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410a90, Thiscall, SetupPulsePopup, colorValueChanged, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupPulsePopup, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410320, Thiscall, SetupPulsePopup, colorSelectClosed, GJSpecialColorSelect*, int)
		}
	};
}
