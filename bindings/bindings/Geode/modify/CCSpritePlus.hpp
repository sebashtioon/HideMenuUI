#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCSpritePlus.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addFollower
		#define GEODE_STATICS_addFollower
		GEODE_AS_STATIC_FUNCTION(addFollower) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrame
		#define GEODE_STATICS_createWithSpriteFrame
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithSpriteFrameName
		#define GEODE_STATICS_createWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_followSprite
		#define GEODE_STATICS_followSprite
		GEODE_AS_STATIC_FUNCTION(followSprite) 
	#endif

	#ifndef GEODE_STATICS_getFollower
		#define GEODE_STATICS_getFollower
		GEODE_AS_STATIC_FUNCTION(getFollower) 
	#endif

	#ifndef GEODE_STATICS_removeFollower
		#define GEODE_STATICS_removeFollower
		GEODE_AS_STATIC_FUNCTION(removeFollower) 
	#endif

	#ifndef GEODE_STATICS_stopFollow
		#define GEODE_STATICS_stopFollow
		GEODE_AS_STATIC_FUNCTION(stopFollow) 
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

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
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

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithSpriteFrameName
		#define GEODE_STATICS_initWithSpriteFrameName
		GEODE_AS_STATIC_FUNCTION(initWithSpriteFrameName) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addFollower
		#define GEODE_CONCEPT_CHECK_addFollower
		GEODE_CONCEPT_FUNCTION_CHECK(addFollower) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSpriteFrame
		#define GEODE_CONCEPT_CHECK_createWithSpriteFrame
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSpriteFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		#define GEODE_CONCEPT_CHECK_createWithSpriteFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(createWithSpriteFrameName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followSprite
		#define GEODE_CONCEPT_CHECK_followSprite
		GEODE_CONCEPT_FUNCTION_CHECK(followSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFollower
		#define GEODE_CONCEPT_CHECK_getFollower
		GEODE_CONCEPT_FUNCTION_CHECK(getFollower) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFollower
		#define GEODE_CONCEPT_CHECK_removeFollower
		GEODE_CONCEPT_FUNCTION_CHECK(removeFollower) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopFollow
		#define GEODE_CONCEPT_CHECK_stopFollow
		GEODE_CONCEPT_FUNCTION_CHECK(stopFollow) 
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

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
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

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithSpriteFrameName
		#define GEODE_CONCEPT_CHECK_initWithSpriteFrameName
		GEODE_CONCEPT_FUNCTION_CHECK(initWithSpriteFrameName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipX
		#define GEODE_CONCEPT_CHECK_setFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipY
		#define GEODE_CONCEPT_CHECK_setFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipY) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCSpritePlus> : ModifyBase<ModifyDerive<Der, CCSpritePlus>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCSpritePlus>>;
		using ModifyBase<ModifyDerive<Der, CCSpritePlus>>::ModifyBase;
		using Base = CCSpritePlus;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCSpritePlus, addFollower, , cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCSpritePlus, createWithSpriteFrame, , cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCSpritePlus, createWithSpriteFrameName, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCSpritePlus, followSprite, , CCSpritePlus*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCSpritePlus, getFollower, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x474f0, Thiscall, CCSpritePlus, removeFollower, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CCSpritePlus, stopFollow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47350, Thiscall, CCSpritePlus, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x473d0, Thiscall, CCSpritePlus, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47460, Thiscall, CCSpritePlus, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f50, Thiscall, CCSpritePlus, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46fe0, Thiscall, CCSpritePlus, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47070, Thiscall, CCSpritePlus, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47100, Thiscall, CCSpritePlus, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f30, Thiscall, CCSpritePlus, initWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f20, Thiscall, CCSpritePlus, initWithSpriteFrameName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47190, Thiscall, CCSpritePlus, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47270, Thiscall, CCSpritePlus, setFlipY, bool)
		}
	};
}
