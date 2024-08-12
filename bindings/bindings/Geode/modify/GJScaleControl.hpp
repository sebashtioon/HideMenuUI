#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJScaleControl.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_finishTouch
		#define GEODE_STATICS_finishTouch
		GEODE_AS_STATIC_FUNCTION(finishTouch) 
	#endif

	#ifndef GEODE_STATICS_loadValues
		#define GEODE_STATICS_loadValues
		GEODE_AS_STATIC_FUNCTION(loadValues) 
	#endif

	#ifndef GEODE_STATICS_onToggleLockScale
		#define GEODE_STATICS_onToggleLockScale
		GEODE_AS_STATIC_FUNCTION(onToggleLockScale) 
	#endif

	#ifndef GEODE_STATICS_scaleFromValue
		#define GEODE_STATICS_scaleFromValue
		GEODE_AS_STATIC_FUNCTION(scaleFromValue) 
	#endif

	#ifndef GEODE_STATICS_skewFromValue
		#define GEODE_STATICS_skewFromValue
		GEODE_AS_STATIC_FUNCTION(skewFromValue) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateLabelX
		#define GEODE_STATICS_updateLabelX
		GEODE_AS_STATIC_FUNCTION(updateLabelX) 
	#endif

	#ifndef GEODE_STATICS_updateLabelXY
		#define GEODE_STATICS_updateLabelXY
		GEODE_AS_STATIC_FUNCTION(updateLabelXY) 
	#endif

	#ifndef GEODE_STATICS_updateLabelY
		#define GEODE_STATICS_updateLabelY
		GEODE_AS_STATIC_FUNCTION(updateLabelY) 
	#endif

	#ifndef GEODE_STATICS_valueFromScale
		#define GEODE_STATICS_valueFromScale
		GEODE_AS_STATIC_FUNCTION(valueFromScale) 
	#endif

	#ifndef GEODE_STATICS_valueFromSkew
		#define GEODE_STATICS_valueFromSkew
		GEODE_AS_STATIC_FUNCTION(valueFromSkew) 
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

	#ifndef GEODE_CONCEPT_CHECK_finishTouch
		#define GEODE_CONCEPT_CHECK_finishTouch
		GEODE_CONCEPT_FUNCTION_CHECK(finishTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadValues
		#define GEODE_CONCEPT_CHECK_loadValues
		GEODE_CONCEPT_FUNCTION_CHECK(loadValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleLockScale
		#define GEODE_CONCEPT_CHECK_onToggleLockScale
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleLockScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleFromValue
		#define GEODE_CONCEPT_CHECK_scaleFromValue
		GEODE_CONCEPT_FUNCTION_CHECK(scaleFromValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_skewFromValue
		#define GEODE_CONCEPT_CHECK_skewFromValue
		GEODE_CONCEPT_FUNCTION_CHECK(skewFromValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabelX
		#define GEODE_CONCEPT_CHECK_updateLabelX
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabelX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabelXY
		#define GEODE_CONCEPT_CHECK_updateLabelXY
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabelXY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabelY
		#define GEODE_CONCEPT_CHECK_updateLabelY
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabelY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueFromScale
		#define GEODE_CONCEPT_CHECK_valueFromScale
		GEODE_CONCEPT_FUNCTION_CHECK(valueFromScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueFromSkew
		#define GEODE_CONCEPT_CHECK_valueFromSkew
		GEODE_CONCEPT_FUNCTION_CHECK(valueFromSkew) 
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
	struct ModifyDerive<Der, GJScaleControl> : ModifyBase<ModifyDerive<Der, GJScaleControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJScaleControl>>;
		using ModifyBase<ModifyDerive<Der, GJScaleControl>>::ModifyBase;
		using Base = GJScaleControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControl, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJScaleControl, finishTouch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x125d20, Thiscall, GJScaleControl, loadValues, GameObject*, cocos2d::CCArray*, gd::unordered_map<int, GameObjectEditorState>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x125c90, Thiscall, GJScaleControl, onToggleLockScale, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJScaleControl, scaleFromValue, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJScaleControl, skewFromValue, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126330, Thiscall, GJScaleControl, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126ab0, Thiscall, GJScaleControl, updateLabelX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126bb0, Thiscall, GJScaleControl, updateLabelXY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126b30, Thiscall, GJScaleControl, updateLabelY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJScaleControl, valueFromScale, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(GJScaleControl, valueFromSkew, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x125850, Thiscall, GJScaleControl, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126340, Thiscall, GJScaleControl, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126550, Thiscall, GJScaleControl, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126970, Thiscall, GJScaleControl, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6fd20, Thiscall, GJScaleControl, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
		}
	};
}
