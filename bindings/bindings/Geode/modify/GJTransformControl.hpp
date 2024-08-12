#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJTransformControl.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_applyRotation
		#define GEODE_STATICS_applyRotation
		GEODE_AS_STATIC_FUNCTION(applyRotation) 
	#endif

	#ifndef GEODE_STATICS_calculateRotationOffset
		#define GEODE_STATICS_calculateRotationOffset
		GEODE_AS_STATIC_FUNCTION(calculateRotationOffset) 
	#endif

	#ifndef GEODE_STATICS_finishTouch
		#define GEODE_STATICS_finishTouch
		GEODE_AS_STATIC_FUNCTION(finishTouch) 
	#endif

	#ifndef GEODE_STATICS_loadFromState
		#define GEODE_STATICS_loadFromState
		GEODE_AS_STATIC_FUNCTION(loadFromState) 
	#endif

	#ifndef GEODE_STATICS_loadValues
		#define GEODE_STATICS_loadValues
		GEODE_AS_STATIC_FUNCTION(loadValues) 
	#endif

	#ifndef GEODE_STATICS_logCurrentZeroPos
		#define GEODE_STATICS_logCurrentZeroPos
		GEODE_AS_STATIC_FUNCTION(logCurrentZeroPos) 
	#endif

	#ifndef GEODE_STATICS_onToggleLockScale
		#define GEODE_STATICS_onToggleLockScale
		GEODE_AS_STATIC_FUNCTION(onToggleLockScale) 
	#endif

	#ifndef GEODE_STATICS_refreshControl
		#define GEODE_STATICS_refreshControl
		GEODE_AS_STATIC_FUNCTION(refreshControl) 
	#endif

	#ifndef GEODE_STATICS_saveToState
		#define GEODE_STATICS_saveToState
		GEODE_AS_STATIC_FUNCTION(saveToState) 
	#endif

	#ifndef GEODE_STATICS_scaleButtons
		#define GEODE_STATICS_scaleButtons
		GEODE_AS_STATIC_FUNCTION(scaleButtons) 
	#endif

	#ifndef GEODE_STATICS_updateAnchorSprite
		#define GEODE_STATICS_updateAnchorSprite
		GEODE_AS_STATIC_FUNCTION(updateAnchorSprite) 
	#endif

	#ifndef GEODE_STATICS_updateButtons
		#define GEODE_STATICS_updateButtons
		GEODE_AS_STATIC_FUNCTION(updateButtons) 
	#endif

	#ifndef GEODE_STATICS_updateMinMaxPositions
		#define GEODE_STATICS_updateMinMaxPositions
		GEODE_AS_STATIC_FUNCTION(updateMinMaxPositions) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyRotation
		#define GEODE_CONCEPT_CHECK_applyRotation
		GEODE_CONCEPT_FUNCTION_CHECK(applyRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateRotationOffset
		#define GEODE_CONCEPT_CHECK_calculateRotationOffset
		GEODE_CONCEPT_FUNCTION_CHECK(calculateRotationOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishTouch
		#define GEODE_CONCEPT_CHECK_finishTouch
		GEODE_CONCEPT_FUNCTION_CHECK(finishTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromState
		#define GEODE_CONCEPT_CHECK_loadFromState
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadValues
		#define GEODE_CONCEPT_CHECK_loadValues
		GEODE_CONCEPT_FUNCTION_CHECK(loadValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logCurrentZeroPos
		#define GEODE_CONCEPT_CHECK_logCurrentZeroPos
		GEODE_CONCEPT_FUNCTION_CHECK(logCurrentZeroPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleLockScale
		#define GEODE_CONCEPT_CHECK_onToggleLockScale
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleLockScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshControl
		#define GEODE_CONCEPT_CHECK_refreshControl
		GEODE_CONCEPT_FUNCTION_CHECK(refreshControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveToState
		#define GEODE_CONCEPT_CHECK_saveToState
		GEODE_CONCEPT_FUNCTION_CHECK(saveToState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleButtons
		#define GEODE_CONCEPT_CHECK_scaleButtons
		GEODE_CONCEPT_FUNCTION_CHECK(scaleButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spriteByTag
		#define GEODE_CONCEPT_CHECK_spriteByTag
		GEODE_CONCEPT_FUNCTION_CHECK(spriteByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAnchorSprite
		#define GEODE_CONCEPT_CHECK_updateAnchorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(updateAnchorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateButtons
		#define GEODE_CONCEPT_CHECK_updateButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMinMaxPositions
		#define GEODE_CONCEPT_CHECK_updateMinMaxPositions
		GEODE_CONCEPT_FUNCTION_CHECK(updateMinMaxPositions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJTransformControl> : ModifyBase<ModifyDerive<Der, GJTransformControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJTransformControl>>;
		using ModifyBase<ModifyDerive<Der, GJTransformControl>>::ModifyBase;
		using Base = GJTransformControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJTransformControl, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJTransformControl, applyRotation, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJTransformControl, calculateRotationOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJTransformControl, finishTouch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJTransformControl, loadFromState, , GJTransformState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJTransformControl, loadValues, , GameObject*, cocos2d::CCArray*, gd::unordered_map<int, GameObjectEditorState>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJTransformControl, logCurrentZeroPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x127310, Thiscall, GJTransformControl, onToggleLockScale, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x127180, Thiscall, GJTransformControl, refreshControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJTransformControl, saveToState, , GJTransformState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1273a0, Thiscall, GJTransformControl, scaleButtons, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, spriteByTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJTransformControl, updateAnchorSprite, , cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x127460, Thiscall, GJTransformControl, updateButtons, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJTransformControl, updateMinMaxPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126c30, Thiscall, GJTransformControl, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1282c0, Thiscall, GJTransformControl, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x128490, Thiscall, GJTransformControl, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1289f0, Thiscall, GJTransformControl, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6fd20, Thiscall, GJTransformControl, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
		}
	};
}
