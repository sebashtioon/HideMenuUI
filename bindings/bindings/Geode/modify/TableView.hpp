#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableView.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_cancelAndStoleTouch
		#define GEODE_STATICS_cancelAndStoleTouch
		GEODE_AS_STATIC_FUNCTION(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_STATICS_cellForRowAtIndexPath
		#define GEODE_STATICS_cellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(cellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_cellForTouch
		#define GEODE_STATICS_cellForTouch
		GEODE_AS_STATIC_FUNCTION(cellForTouch) 
	#endif

	#ifndef GEODE_STATICS_checkBoundaryOfCell
		#define GEODE_STATICS_checkBoundaryOfCell
		GEODE_AS_STATIC_FUNCTION(checkBoundaryOfCell) 
	#endif

	#ifndef GEODE_STATICS_checkBoundaryOfContent
		#define GEODE_STATICS_checkBoundaryOfContent
		GEODE_AS_STATIC_FUNCTION(checkBoundaryOfContent) 
	#endif

	#ifndef GEODE_STATICS_checkFirstCell
		#define GEODE_STATICS_checkFirstCell
		GEODE_AS_STATIC_FUNCTION(checkFirstCell) 
	#endif

	#ifndef GEODE_STATICS_checkLastCell
		#define GEODE_STATICS_checkLastCell
		GEODE_AS_STATIC_FUNCTION(checkLastCell) 
	#endif

	#ifndef GEODE_STATICS_claimTouch
		#define GEODE_STATICS_claimTouch
		GEODE_AS_STATIC_FUNCTION(claimTouch) 
	#endif

	#ifndef GEODE_STATICS_deleteTableViewCell
		#define GEODE_STATICS_deleteTableViewCell
		GEODE_AS_STATIC_FUNCTION(deleteTableViewCell) 
	#endif

	#ifndef GEODE_STATICS_dequeueReusableCellWithIdentifier
		#define GEODE_STATICS_dequeueReusableCellWithIdentifier
		GEODE_AS_STATIC_FUNCTION(dequeueReusableCellWithIdentifier) 
	#endif

	#ifndef GEODE_STATICS_initTableViewCells
		#define GEODE_STATICS_initTableViewCells
		GEODE_AS_STATIC_FUNCTION(initTableViewCells) 
	#endif

	#ifndef GEODE_STATICS_isDuplicateIndexPath
		#define GEODE_STATICS_isDuplicateIndexPath
		GEODE_AS_STATIC_FUNCTION(isDuplicateIndexPath) 
	#endif

	#ifndef GEODE_STATICS_isDuplicateInVisibleCellArray
		#define GEODE_STATICS_isDuplicateInVisibleCellArray
		GEODE_AS_STATIC_FUNCTION(isDuplicateInVisibleCellArray) 
	#endif

	#ifndef GEODE_STATICS_reloadData
		#define GEODE_STATICS_reloadData
		GEODE_AS_STATIC_FUNCTION(reloadData) 
	#endif

	#ifndef GEODE_STATICS_removeIndexPathFromPathAddedArray
		#define GEODE_STATICS_removeIndexPathFromPathAddedArray
		GEODE_AS_STATIC_FUNCTION(removeIndexPathFromPathAddedArray) 
	#endif

	#ifndef GEODE_STATICS_scrollToIndexPath
		#define GEODE_STATICS_scrollToIndexPath
		GEODE_AS_STATIC_FUNCTION(scrollToIndexPath) 
	#endif

	#ifndef GEODE_STATICS_touchFinish
		#define GEODE_STATICS_touchFinish
		GEODE_AS_STATIC_FUNCTION(touchFinish) 
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

	#ifndef GEODE_STATICS_scrollWheel
		#define GEODE_STATICS_scrollWheel
		GEODE_AS_STATIC_FUNCTION(scrollWheel) 
	#endif

	#ifndef GEODE_STATICS_getCellDelegateType
		#define GEODE_STATICS_getCellDelegateType
		GEODE_AS_STATIC_FUNCTION(getCellDelegateType) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cancelAndStoleTouch
		#define GEODE_CONCEPT_CHECK_cancelAndStoleTouch
		GEODE_CONCEPT_FUNCTION_CHECK(cancelAndStoleTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellForRowAtIndexPath
		#define GEODE_CONCEPT_CHECK_cellForRowAtIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(cellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellForTouch
		#define GEODE_CONCEPT_CHECK_cellForTouch
		GEODE_CONCEPT_FUNCTION_CHECK(cellForTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkBoundaryOfCell
		#define GEODE_CONCEPT_CHECK_checkBoundaryOfCell
		GEODE_CONCEPT_FUNCTION_CHECK(checkBoundaryOfCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkBoundaryOfContent
		#define GEODE_CONCEPT_CHECK_checkBoundaryOfContent
		GEODE_CONCEPT_FUNCTION_CHECK(checkBoundaryOfContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkFirstCell
		#define GEODE_CONCEPT_CHECK_checkFirstCell
		GEODE_CONCEPT_FUNCTION_CHECK(checkFirstCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkLastCell
		#define GEODE_CONCEPT_CHECK_checkLastCell
		GEODE_CONCEPT_FUNCTION_CHECK(checkLastCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimTouch
		#define GEODE_CONCEPT_CHECK_claimTouch
		GEODE_CONCEPT_FUNCTION_CHECK(claimTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteTableViewCell
		#define GEODE_CONCEPT_CHECK_deleteTableViewCell
		GEODE_CONCEPT_FUNCTION_CHECK(deleteTableViewCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dequeueReusableCellWithIdentifier
		#define GEODE_CONCEPT_CHECK_dequeueReusableCellWithIdentifier
		GEODE_CONCEPT_FUNCTION_CHECK(dequeueReusableCellWithIdentifier) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initTableViewCells
		#define GEODE_CONCEPT_CHECK_initTableViewCells
		GEODE_CONCEPT_FUNCTION_CHECK(initTableViewCells) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDuplicateIndexPath
		#define GEODE_CONCEPT_CHECK_isDuplicateIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(isDuplicateIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDuplicateInVisibleCellArray
		#define GEODE_CONCEPT_CHECK_isDuplicateInVisibleCellArray
		GEODE_CONCEPT_FUNCTION_CHECK(isDuplicateInVisibleCellArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadData
		#define GEODE_CONCEPT_CHECK_reloadData
		GEODE_CONCEPT_FUNCTION_CHECK(reloadData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeIndexPathFromPathAddedArray
		#define GEODE_CONCEPT_CHECK_removeIndexPathFromPathAddedArray
		GEODE_CONCEPT_FUNCTION_CHECK(removeIndexPathFromPathAddedArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollToIndexPath
		#define GEODE_CONCEPT_CHECK_scrollToIndexPath
		GEODE_CONCEPT_FUNCTION_CHECK(scrollToIndexPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchFinish
		#define GEODE_CONCEPT_CHECK_touchFinish
		GEODE_CONCEPT_FUNCTION_CHECK(touchFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
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

	#ifndef GEODE_CONCEPT_CHECK_scrollWheel
		#define GEODE_CONCEPT_CHECK_scrollWheel
		GEODE_CONCEPT_FUNCTION_CHECK(scrollWheel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrllViewWillBeginDecelerating
		#define GEODE_CONCEPT_CHECK_scrllViewWillBeginDecelerating
		GEODE_CONCEPT_FUNCTION_CHECK(scrllViewWillBeginDecelerating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewDidEndDecelerating
		#define GEODE_CONCEPT_CHECK_scrollViewDidEndDecelerating
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewDidEndDecelerating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewTouchMoving
		#define GEODE_CONCEPT_CHECK_scrollViewTouchMoving
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewTouchMoving) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollViewDidEndMoving
		#define GEODE_CONCEPT_CHECK_scrollViewDidEndMoving
		GEODE_CONCEPT_FUNCTION_CHECK(scrollViewDidEndMoving) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCellDelegateType
		#define GEODE_CONCEPT_CHECK_getCellDelegateType
		GEODE_CONCEPT_FUNCTION_CHECK(getCellDelegateType) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableView> : ModifyBase<ModifyDerive<Der, TableView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableView>>;
		using ModifyBase<ModifyDerive<Der, TableView>>::ModifyBase;
		using Base = TableView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableView, create, TableViewDelegate*, TableViewDataSource*, TableViewCellDelegate*, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, cancelAndStoleTouch, , cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, cellForRowAtIndexPath, , CCIndexPath&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, cellForTouch, , cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, checkBoundaryOfCell, , cocos2d::CCPoint&, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, checkBoundaryOfCell, , TableViewCell*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, checkBoundaryOfContent, , float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, checkFirstCell, , TableViewCell*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, checkLastCell, , TableViewCell*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, claimTouch, , cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, deleteTableViewCell, , TableViewCell*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, dequeueReusableCellWithIdentifier, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, initTableViewCells, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, isDuplicateIndexPath, , CCIndexPath&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, isDuplicateInVisibleCellArray, , CCIndexPath*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x73810, Thiscall, TableView, reloadData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, removeIndexPathFromPathAddedArray, , CCIndexPath&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, scrollToIndexPath, , CCIndexPath&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, touchFinish, , cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableView, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableView, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x73d60, Thiscall, TableView, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x73ff0, Thiscall, TableView, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x73f10, Thiscall, TableView, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x73f70, Thiscall, TableView, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d720, Thiscall, TableView, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x745a0, Thiscall, TableView, scrollWheel, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableView, scrllViewWillBeginDecelerating, CCScrollLayerExt*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableView, scrollViewDidEndDecelerating, CCScrollLayerExt*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableView, scrollViewTouchMoving, CCScrollLayerExt*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableView, scrollViewDidEndMoving, CCScrollLayerExt*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(TableView, getCellDelegateType, )
		}
	};
}
