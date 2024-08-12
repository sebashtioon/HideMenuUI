#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomScrollLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addPage
		#define GEODE_STATICS_addPage
		GEODE_AS_STATIC_FUNCTION(addPage) 
	#endif

	#ifndef GEODE_STATICS_cancelAndStoleTouch
		#define GEODE_STATICS_cancelAndStoleTouch
		GEODE_AS_STATIC_FUNCTION(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_STATICS_claimTouch
		#define GEODE_STATICS_claimTouch
		GEODE_AS_STATIC_FUNCTION(claimTouch) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_instantMoveToPage
		#define GEODE_STATICS_instantMoveToPage
		GEODE_AS_STATIC_FUNCTION(instantMoveToPage) 
	#endif

	#ifndef GEODE_STATICS_moveToPage
		#define GEODE_STATICS_moveToPage
		GEODE_AS_STATIC_FUNCTION(moveToPage) 
	#endif

	#ifndef GEODE_STATICS_moveToPageEnded
		#define GEODE_STATICS_moveToPageEnded
		GEODE_AS_STATIC_FUNCTION(moveToPageEnded) 
	#endif

	#ifndef GEODE_STATICS_pageNumberForPosition
		#define GEODE_STATICS_pageNumberForPosition
		GEODE_AS_STATIC_FUNCTION(pageNumberForPosition) 
	#endif

	#ifndef GEODE_STATICS_removePage
		#define GEODE_STATICS_removePage
		GEODE_AS_STATIC_FUNCTION(removePage) 
	#endif

	#ifndef GEODE_STATICS_removePageWithNumber
		#define GEODE_STATICS_removePageWithNumber
		GEODE_AS_STATIC_FUNCTION(removePageWithNumber) 
	#endif

	#ifndef GEODE_STATICS_repositionPagesLooped
		#define GEODE_STATICS_repositionPagesLooped
		GEODE_AS_STATIC_FUNCTION(repositionPagesLooped) 
	#endif

	#ifndef GEODE_STATICS_selectPage
		#define GEODE_STATICS_selectPage
		GEODE_AS_STATIC_FUNCTION(selectPage) 
	#endif

	#ifndef GEODE_STATICS_setupDynamicScrolling
		#define GEODE_STATICS_setupDynamicScrolling
		GEODE_AS_STATIC_FUNCTION(setupDynamicScrolling) 
	#endif

	#ifndef GEODE_STATICS_togglePageIndicators
		#define GEODE_STATICS_togglePageIndicators
		GEODE_AS_STATIC_FUNCTION(togglePageIndicators) 
	#endif

	#ifndef GEODE_STATICS_updateDots
		#define GEODE_STATICS_updateDots
		GEODE_AS_STATIC_FUNCTION(updateDots) 
	#endif

	#ifndef GEODE_STATICS_updatePages
		#define GEODE_STATICS_updatePages
		GEODE_AS_STATIC_FUNCTION(updatePages) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPage
		#define GEODE_CONCEPT_CHECK_addPage
		GEODE_CONCEPT_FUNCTION_CHECK(addPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cancelAndStoleTouch
		#define GEODE_CONCEPT_CHECK_cancelAndStoleTouch
		GEODE_CONCEPT_FUNCTION_CHECK(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimTouch
		#define GEODE_CONCEPT_CHECK_claimTouch
		GEODE_CONCEPT_FUNCTION_CHECK(claimTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPage
		#define GEODE_CONCEPT_CHECK_getPage
		GEODE_CONCEPT_FUNCTION_CHECK(getPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativePageForNum
		#define GEODE_CONCEPT_CHECK_getRelativePageForNum
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativePageForNum) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativePosForPage
		#define GEODE_CONCEPT_CHECK_getRelativePosForPage
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativePosForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalPages
		#define GEODE_CONCEPT_CHECK_getTotalPages
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalPages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_instantMoveToPage
		#define GEODE_CONCEPT_CHECK_instantMoveToPage
		GEODE_CONCEPT_FUNCTION_CHECK(instantMoveToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToPage
		#define GEODE_CONCEPT_CHECK_moveToPage
		GEODE_CONCEPT_FUNCTION_CHECK(moveToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveToPageEnded
		#define GEODE_CONCEPT_CHECK_moveToPageEnded
		GEODE_CONCEPT_FUNCTION_CHECK(moveToPageEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageNumberForPosition
		#define GEODE_CONCEPT_CHECK_pageNumberForPosition
		GEODE_CONCEPT_FUNCTION_CHECK(pageNumberForPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionForPageWithNumber
		#define GEODE_CONCEPT_CHECK_positionForPageWithNumber
		GEODE_CONCEPT_FUNCTION_CHECK(positionForPageWithNumber) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quickUpdate
		#define GEODE_CONCEPT_CHECK_quickUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(quickUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePage
		#define GEODE_CONCEPT_CHECK_removePage
		GEODE_CONCEPT_FUNCTION_CHECK(removePage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePageWithNumber
		#define GEODE_CONCEPT_CHECK_removePageWithNumber
		GEODE_CONCEPT_FUNCTION_CHECK(removePageWithNumber) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_repositionPagesLooped
		#define GEODE_CONCEPT_CHECK_repositionPagesLooped
		GEODE_CONCEPT_FUNCTION_CHECK(repositionPagesLooped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectPage
		#define GEODE_CONCEPT_CHECK_selectPage
		GEODE_CONCEPT_FUNCTION_CHECK(selectPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDotScale
		#define GEODE_CONCEPT_CHECK_setDotScale
		GEODE_CONCEPT_FUNCTION_CHECK(setDotScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPagesIndicatorPosition
		#define GEODE_CONCEPT_CHECK_setPagesIndicatorPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPagesIndicatorPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupDynamicScrolling
		#define GEODE_CONCEPT_CHECK_setupDynamicScrolling
		GEODE_CONCEPT_FUNCTION_CHECK(setupDynamicScrolling) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePageIndicators
		#define GEODE_CONCEPT_CHECK_togglePageIndicators
		GEODE_CONCEPT_FUNCTION_CHECK(togglePageIndicators) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDots
		#define GEODE_CONCEPT_CHECK_updateDots
		GEODE_CONCEPT_FUNCTION_CHECK(updateDots) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePages
		#define GEODE_CONCEPT_CHECK_updatePages
		GEODE_CONCEPT_FUNCTION_CHECK(updatePages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
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

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BoomScrollLayer> : ModifyBase<ModifyDerive<Der, BoomScrollLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BoomScrollLayer>>;
		using ModifyBase<ModifyDerive<Der, BoomScrollLayer>>::ModifyBase;
		using Base = BoomScrollLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c1e0, Default, BoomScrollLayer, create, cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayer, create, cocos2d::CCArray*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(BoomScrollLayer, addPage, , cocos2d::CCLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(BoomScrollLayer, addPage, , cocos2d::CCLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(BoomScrollLayer, cancelAndStoleTouch, , cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(BoomScrollLayer, claimTouch, , cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayer, getPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayer, getRelativePageForNum, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayer, getRelativePosForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayer, getTotalPages, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c3b0, Thiscall, BoomScrollLayer, init, cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cf40, Thiscall, BoomScrollLayer, instantMoveToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d020, Thiscall, BoomScrollLayer, moveToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cdb0, Thiscall, BoomScrollLayer, moveToPageEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ce40, Thiscall, BoomScrollLayer, pageNumberForPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayer, positionForPageWithNumber, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayer, quickUpdate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(BoomScrollLayer, removePage, , cocos2d::CCLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(BoomScrollLayer, removePageWithNumber, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1e0, Thiscall, BoomScrollLayer, repositionPagesLooped, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(BoomScrollLayer, selectPage, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayer, setDotScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(BoomScrollLayer, setPagesIndicatorPosition, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c720, Thiscall, BoomScrollLayer, setupDynamicScrolling, cocos2d::CCArray*, DynamicScrollDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cce0, Thiscall, BoomScrollLayer, togglePageIndicators, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cae0, Thiscall, BoomScrollLayer, updateDots, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c9c0, Thiscall, BoomScrollLayer, updatePages, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cd50, Thiscall, BoomScrollLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d890, Thiscall, BoomScrollLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d940, Thiscall, BoomScrollLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3dc70, Thiscall, BoomScrollLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d7b0, Thiscall, BoomScrollLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d720, Thiscall, BoomScrollLayer, registerWithTouchDispatcher, )
		}
	};
}
