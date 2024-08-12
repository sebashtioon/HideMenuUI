#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LabelGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createLabel
		#define GEODE_STATICS_createLabel
		GEODE_AS_STATIC_FUNCTION(createLabel) 
	#endif

	#ifndef GEODE_STATICS_queueUpdateLabel
		#define GEODE_STATICS_queueUpdateLabel
		GEODE_AS_STATIC_FUNCTION(queueUpdateLabel) 
	#endif

	#ifndef GEODE_STATICS_removeLabel
		#define GEODE_STATICS_removeLabel
		GEODE_AS_STATIC_FUNCTION(removeLabel) 
	#endif

	#ifndef GEODE_STATICS_unlockLabelColor
		#define GEODE_STATICS_unlockLabelColor
		GEODE_AS_STATIC_FUNCTION(unlockLabelColor) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateLabelAlign
		#define GEODE_STATICS_updateLabelAlign
		GEODE_AS_STATIC_FUNCTION(updateLabelAlign) 
	#endif

	#ifndef GEODE_STATICS_updateLabelIfDirty
		#define GEODE_STATICS_updateLabelIfDirty
		GEODE_AS_STATIC_FUNCTION(updateLabelIfDirty) 
	#endif

	#ifndef GEODE_STATICS_updatePreviewLabel
		#define GEODE_STATICS_updatePreviewLabel
		GEODE_AS_STATIC_FUNCTION(updatePreviewLabel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setupCustomSprites
		#define GEODE_STATICS_setupCustomSprites
		GEODE_AS_STATIC_FUNCTION(setupCustomSprites) 
	#endif

	#ifndef GEODE_STATICS_addMainSpriteToParent
		#define GEODE_STATICS_addMainSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_setObjectColor
		#define GEODE_STATICS_setObjectColor
		GEODE_AS_STATIC_FUNCTION(setObjectColor) 
	#endif

	#ifndef GEODE_STATICS_updateTextKerning
		#define GEODE_STATICS_updateTextKerning
		GEODE_AS_STATIC_FUNCTION(updateTextKerning) 
	#endif

	#ifndef GEODE_STATICS_getTextKerning
		#define GEODE_STATICS_getTextKerning
		GEODE_AS_STATIC_FUNCTION(getTextKerning) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createLabel
		#define GEODE_CONCEPT_CHECK_createLabel
		GEODE_CONCEPT_FUNCTION_CHECK(createLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueUpdateLabel
		#define GEODE_CONCEPT_CHECK_queueUpdateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(queueUpdateLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeLabel
		#define GEODE_CONCEPT_CHECK_removeLabel
		GEODE_CONCEPT_FUNCTION_CHECK(removeLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockLabelColor
		#define GEODE_CONCEPT_CHECK_unlockLabelColor
		GEODE_CONCEPT_FUNCTION_CHECK(unlockLabelColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabel
		#define GEODE_CONCEPT_CHECK_updateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabelAlign
		#define GEODE_CONCEPT_CHECK_updateLabelAlign
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabelAlign) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabelIfDirty
		#define GEODE_CONCEPT_CHECK_updateLabelIfDirty
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabelIfDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePreviewLabel
		#define GEODE_CONCEPT_CHECK_updatePreviewLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePreviewLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCustomSprites
		#define GEODE_CONCEPT_CHECK_setupCustomSprites
		GEODE_CONCEPT_FUNCTION_CHECK(setupCustomSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addMainSpriteToParent
		#define GEODE_CONCEPT_CHECK_addMainSpriteToParent
		GEODE_CONCEPT_FUNCTION_CHECK(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectColor
		#define GEODE_CONCEPT_CHECK_setObjectColor
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextKerning
		#define GEODE_CONCEPT_CHECK_updateTextKerning
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextKerning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextKerning
		#define GEODE_CONCEPT_CHECK_getTextKerning
		GEODE_CONCEPT_FUNCTION_CHECK(getTextKerning) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LabelGameObject> : ModifyBase<ModifyDerive<Der, LabelGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LabelGameObject>>;
		using ModifyBase<ModifyDerive<Der, LabelGameObject>>::ModifyBase;
		using Base = LabelGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, createLabel, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, queueUpdateLabel, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, removeLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, unlockLabelColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, updateLabel, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, updateLabel, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, updateLabelAlign, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, updateLabelIfDirty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, updatePreviewLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x487310, Thiscall, LabelGameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, setupCustomSprites, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, addMainSpriteToParent, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, customObjectSetup, , gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, getSaveString, , GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, setObjectColor, , cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, updateTextKerning, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LabelGameObject, getTextKerning, )
		}
	};
}
