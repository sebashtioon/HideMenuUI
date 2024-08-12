#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/VideoOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_onAdvanced
		#define GEODE_STATICS_onAdvanced
		GEODE_AS_STATIC_FUNCTION(onAdvanced) 
	#endif

	#ifndef GEODE_STATICS_onApply
		#define GEODE_STATICS_onApply
		GEODE_AS_STATIC_FUNCTION(onApply) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onFullscreen
		#define GEODE_STATICS_onFullscreen
		GEODE_AS_STATIC_FUNCTION(onFullscreen) 
	#endif

	#ifndef GEODE_STATICS_onBorderless
		#define GEODE_STATICS_onBorderless
		GEODE_AS_STATIC_FUNCTION(onBorderless) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onResolutionNext
		#define GEODE_STATICS_onResolutionNext
		GEODE_AS_STATIC_FUNCTION(onResolutionNext) 
	#endif

	#ifndef GEODE_STATICS_onResolutionPrev
		#define GEODE_STATICS_onResolutionPrev
		GEODE_AS_STATIC_FUNCTION(onResolutionPrev) 
	#endif

	#ifndef GEODE_STATICS_onTextureQualityNext
		#define GEODE_STATICS_onTextureQualityNext
		GEODE_AS_STATIC_FUNCTION(onTextureQualityNext) 
	#endif

	#ifndef GEODE_STATICS_onTextureQualityPrev
		#define GEODE_STATICS_onTextureQualityPrev
		GEODE_AS_STATIC_FUNCTION(onTextureQualityPrev) 
	#endif

	#ifndef GEODE_STATICS_reloadMenu
		#define GEODE_STATICS_reloadMenu
		GEODE_AS_STATIC_FUNCTION(reloadMenu) 
	#endif

	#ifndef GEODE_STATICS_toggleResolution
		#define GEODE_STATICS_toggleResolution
		GEODE_AS_STATIC_FUNCTION(toggleResolution) 
	#endif

	#ifndef GEODE_STATICS_updateResolution
		#define GEODE_STATICS_updateResolution
		GEODE_AS_STATIC_FUNCTION(updateResolution) 
	#endif

	#ifndef GEODE_STATICS_updateTextureQuality
		#define GEODE_STATICS_updateTextureQuality
		GEODE_AS_STATIC_FUNCTION(updateTextureQuality) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdvanced
		#define GEODE_CONCEPT_CHECK_onAdvanced
		GEODE_CONCEPT_FUNCTION_CHECK(onAdvanced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onApply
		#define GEODE_CONCEPT_CHECK_onApply
		GEODE_CONCEPT_FUNCTION_CHECK(onApply) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFullscreen
		#define GEODE_CONCEPT_CHECK_onFullscreen
		GEODE_CONCEPT_FUNCTION_CHECK(onFullscreen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBorderless
		#define GEODE_CONCEPT_CHECK_onBorderless
		GEODE_CONCEPT_FUNCTION_CHECK(onBorderless) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResolutionNext
		#define GEODE_CONCEPT_CHECK_onResolutionNext
		GEODE_CONCEPT_FUNCTION_CHECK(onResolutionNext) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResolutionPrev
		#define GEODE_CONCEPT_CHECK_onResolutionPrev
		GEODE_CONCEPT_FUNCTION_CHECK(onResolutionPrev) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextureQualityNext
		#define GEODE_CONCEPT_CHECK_onTextureQualityNext
		GEODE_CONCEPT_FUNCTION_CHECK(onTextureQualityNext) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextureQualityPrev
		#define GEODE_CONCEPT_CHECK_onTextureQualityPrev
		GEODE_CONCEPT_FUNCTION_CHECK(onTextureQualityPrev) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadMenu
		#define GEODE_CONCEPT_CHECK_reloadMenu
		GEODE_CONCEPT_FUNCTION_CHECK(reloadMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleResolution
		#define GEODE_CONCEPT_CHECK_toggleResolution
		GEODE_CONCEPT_FUNCTION_CHECK(toggleResolution) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateResolution
		#define GEODE_CONCEPT_CHECK_updateResolution
		GEODE_CONCEPT_FUNCTION_CHECK(updateResolution) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextureQuality
		#define GEODE_CONCEPT_CHECK_updateTextureQuality
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextureQuality) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, VideoOptionsLayer> : ModifyBase<ModifyDerive<Der, VideoOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, VideoOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, VideoOptionsLayer>>::ModifyBase;
		using Base = VideoOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x355140, Default, VideoOptionsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, createToggleButton, , gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, onAdvanced, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, onApply, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, onFullscreen, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, onBorderless, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, onInfo, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, onResolutionNext, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, onResolutionPrev, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, onTextureQualityNext, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, onTextureQualityPrev, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, reloadMenu, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, toggleResolution, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, updateResolution, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(VideoOptionsLayer, updateTextureQuality, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x355250, Thiscall, VideoOptionsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x356df0, Thiscall, VideoOptionsLayer, keyBackClicked, )
		}
	};
}
