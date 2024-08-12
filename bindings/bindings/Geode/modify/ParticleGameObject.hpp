#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ParticleGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_applyParticleSettings
		#define GEODE_STATICS_applyParticleSettings
		GEODE_AS_STATIC_FUNCTION(applyParticleSettings) 
	#endif

	#ifndef GEODE_STATICS_createAndAddCustomParticle
		#define GEODE_STATICS_createAndAddCustomParticle
		GEODE_AS_STATIC_FUNCTION(createAndAddCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_createParticlePreviewArt
		#define GEODE_STATICS_createParticlePreviewArt
		GEODE_AS_STATIC_FUNCTION(createParticlePreviewArt) 
	#endif

	#ifndef GEODE_STATICS_setParticleString
		#define GEODE_STATICS_setParticleString
		GEODE_AS_STATIC_FUNCTION(setParticleString) 
	#endif

	#ifndef GEODE_STATICS_updateParticle
		#define GEODE_STATICS_updateParticle
		GEODE_AS_STATIC_FUNCTION(updateParticle) 
	#endif

	#ifndef GEODE_STATICS_updateParticleAngle
		#define GEODE_STATICS_updateParticleAngle
		GEODE_AS_STATIC_FUNCTION(updateParticleAngle) 
	#endif

	#ifndef GEODE_STATICS_updateParticlePreviewArtOpacity
		#define GEODE_STATICS_updateParticlePreviewArtOpacity
		GEODE_AS_STATIC_FUNCTION(updateParticlePreviewArtOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateParticleScale
		#define GEODE_STATICS_updateParticleScale
		GEODE_AS_STATIC_FUNCTION(updateParticleScale) 
	#endif

	#ifndef GEODE_STATICS_updateParticleStruct
		#define GEODE_STATICS_updateParticleStruct
		GEODE_AS_STATIC_FUNCTION(updateParticleStruct) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setRotationX
		#define GEODE_STATICS_setRotationX
		GEODE_AS_STATIC_FUNCTION(setRotationX) 
	#endif

	#ifndef GEODE_STATICS_setRotationY
		#define GEODE_STATICS_setRotationY
		GEODE_AS_STATIC_FUNCTION(setRotationY) 
	#endif

	#ifndef GEODE_STATICS_setChildColor
		#define GEODE_STATICS_setChildColor
		GEODE_AS_STATIC_FUNCTION(setChildColor) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_addMainSpriteToParent
		#define GEODE_STATICS_addMainSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addMainSpriteToParent) 
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

	#ifndef GEODE_STATICS_claimParticle
		#define GEODE_STATICS_claimParticle
		GEODE_AS_STATIC_FUNCTION(claimParticle) 
	#endif

	#ifndef GEODE_STATICS_unclaimParticle
		#define GEODE_STATICS_unclaimParticle
		GEODE_AS_STATIC_FUNCTION(unclaimParticle) 
	#endif

	#ifndef GEODE_STATICS_particleWasActivated
		#define GEODE_STATICS_particleWasActivated
		GEODE_AS_STATIC_FUNCTION(particleWasActivated) 
	#endif

	#ifndef GEODE_STATICS_setObjectColor
		#define GEODE_STATICS_setObjectColor
		GEODE_AS_STATIC_FUNCTION(setObjectColor) 
	#endif

	#ifndef GEODE_STATICS_blendModeChanged
		#define GEODE_STATICS_blendModeChanged
		GEODE_AS_STATIC_FUNCTION(blendModeChanged) 
	#endif

	#ifndef GEODE_STATICS_updateParticleColor
		#define GEODE_STATICS_updateParticleColor
		GEODE_AS_STATIC_FUNCTION(updateParticleColor) 
	#endif

	#ifndef GEODE_STATICS_updateParticleOpacity
		#define GEODE_STATICS_updateParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateParticleOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateMainParticleOpacity
		#define GEODE_STATICS_updateMainParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateMainParticleOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryParticleOpacity
		#define GEODE_STATICS_updateSecondaryParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateSecondaryParticleOpacity) 
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

	#ifndef GEODE_CONCEPT_CHECK_applyParticleSettings
		#define GEODE_CONCEPT_CHECK_applyParticleSettings
		GEODE_CONCEPT_FUNCTION_CHECK(applyParticleSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndAddCustomParticle
		#define GEODE_CONCEPT_CHECK_createAndAddCustomParticle
		GEODE_CONCEPT_FUNCTION_CHECK(createAndAddCustomParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createParticlePreviewArt
		#define GEODE_CONCEPT_CHECK_createParticlePreviewArt
		GEODE_CONCEPT_FUNCTION_CHECK(createParticlePreviewArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setParticleString
		#define GEODE_CONCEPT_CHECK_setParticleString
		GEODE_CONCEPT_FUNCTION_CHECK(setParticleString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticle
		#define GEODE_CONCEPT_CHECK_updateParticle
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleAngle
		#define GEODE_CONCEPT_CHECK_updateParticleAngle
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticlePreviewArtOpacity
		#define GEODE_CONCEPT_CHECK_updateParticlePreviewArtOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticlePreviewArtOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleScale
		#define GEODE_CONCEPT_CHECK_updateParticleScale
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleStruct
		#define GEODE_CONCEPT_CHECK_updateParticleStruct
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleStruct) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleX
		#define GEODE_CONCEPT_CHECK_setScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleY
		#define GEODE_CONCEPT_CHECK_setScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScale
		#define GEODE_CONCEPT_CHECK_setScale
		GEODE_CONCEPT_FUNCTION_CHECK(setScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationX
		#define GEODE_CONCEPT_CHECK_setRotationX
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationY
		#define GEODE_CONCEPT_CHECK_setRotationY
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChildColor
		#define GEODE_CONCEPT_CHECK_setChildColor
		GEODE_CONCEPT_FUNCTION_CHECK(setChildColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addMainSpriteToParent
		#define GEODE_CONCEPT_CHECK_addMainSpriteToParent
		GEODE_CONCEPT_FUNCTION_CHECK(addMainSpriteToParent) 
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

	#ifndef GEODE_CONCEPT_CHECK_claimParticle
		#define GEODE_CONCEPT_CHECK_claimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(claimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unclaimParticle
		#define GEODE_CONCEPT_CHECK_unclaimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(unclaimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_particleWasActivated
		#define GEODE_CONCEPT_CHECK_particleWasActivated
		GEODE_CONCEPT_FUNCTION_CHECK(particleWasActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectColor
		#define GEODE_CONCEPT_CHECK_setObjectColor
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_blendModeChanged
		#define GEODE_CONCEPT_CHECK_blendModeChanged
		GEODE_CONCEPT_FUNCTION_CHECK(blendModeChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleColor
		#define GEODE_CONCEPT_CHECK_updateParticleColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleOpacity
		#define GEODE_CONCEPT_CHECK_updateParticleOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainParticleOpacity
		#define GEODE_CONCEPT_CHECK_updateMainParticleOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainParticleOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryParticleOpacity
		#define GEODE_CONCEPT_CHECK_updateSecondaryParticleOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryParticleOpacity) 
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
	struct ModifyDerive<Der, ParticleGameObject> : ModifyBase<ModifyDerive<Der, ParticleGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ParticleGameObject>>;
		using ModifyBase<ModifyDerive<Der, ParticleGameObject>>::ModifyBase;
		using Base = ParticleGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, applyParticleSettings, , cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, createAndAddCustomParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, createParticlePreviewArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4746b0, Thiscall, ParticleGameObject, setParticleString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x474740, Thiscall, ParticleGameObject, updateParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, updateParticleAngle, , float, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, updateParticlePreviewArtOpacity, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, updateParticleScale, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, updateParticleStruct, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, setScaleX, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, setScaleY, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, setScale, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, setRotation, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, setRotationX, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, setRotationY, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, setChildColor, , cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, addMainSpriteToParent, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, deactivateObject, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, customObjectSetup, , gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, getSaveString, , GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, claimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, unclaimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, particleWasActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, setObjectColor, , cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, blendModeChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, updateParticleColor, , cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, updateParticleOpacity, , unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, updateMainParticleOpacity, , unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, updateSecondaryParticleOpacity, , unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, updateSyncedAnimation, , float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(ParticleGameObject, updateAnimateOnTrigger, , bool)
		}
	};
}
