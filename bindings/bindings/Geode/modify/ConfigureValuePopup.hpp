#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ConfigureValuePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_positionInfoObjects
		#define GEODE_STATICS_positionInfoObjects
		GEODE_AS_STATIC_FUNCTION(positionInfoObjects) 
	#endif

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

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_positionInfoObjects
		#define GEODE_CONCEPT_CHECK_positionInfoObjects
		GEODE_CONCEPT_FUNCTION_CHECK(positionInfoObjects) 
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

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ConfigureValuePopup> : ModifyBase<ModifyDerive<Der, ConfigureValuePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ConfigureValuePopup>>;
		using ModifyBase<ModifyDerive<Der, ConfigureValuePopup>>::ModifyBase;
		using Base = ConfigureValuePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ConfigureValuePopup, positionInfoObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ConfigureValuePopup, create, , ConfigureValuePopupDelegate*, float, float, float, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ConfigureValuePopup, init, , ConfigureValuePopupDelegate*, float, float, float, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ConfigureValuePopup, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ConfigureValuePopup, sliderChanged, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ConfigureValuePopup, updateTextInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x977a0, Thiscall, ConfigureValuePopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ConfigureValuePopup, textInputClosed, , CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x975d0, Thiscall, ConfigureValuePopup, textChanged, CCTextInputNode*)
		}
	};
}
