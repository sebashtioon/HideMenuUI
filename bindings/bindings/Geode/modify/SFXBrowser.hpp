#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXBrowser.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCredits
		#define GEODE_STATICS_onCredits
		GEODE_AS_STATIC_FUNCTION(onCredits) 
	#endif

	#ifndef GEODE_STATICS_onExitFolder
		#define GEODE_STATICS_onExitFolder
		GEODE_AS_STATIC_FUNCTION(onExitFolder) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onSorting
		#define GEODE_STATICS_onSorting
		GEODE_AS_STATIC_FUNCTION(onSorting) 
	#endif

	#ifndef GEODE_STATICS_onToggleCompactMode
		#define GEODE_STATICS_onToggleCompactMode
		GEODE_AS_STATIC_FUNCTION(onToggleCompactMode) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLibrary
		#define GEODE_STATICS_onUpdateLibrary
		GEODE_AS_STATIC_FUNCTION(onUpdateLibrary) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_trySetupSFXBrowser
		#define GEODE_STATICS_trySetupSFXBrowser
		GEODE_AS_STATIC_FUNCTION(trySetupSFXBrowser) 
	#endif

	#ifndef GEODE_STATICS_updatePageLabel
		#define GEODE_STATICS_updatePageLabel
		GEODE_AS_STATIC_FUNCTION(updatePageLabel) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_sortSelectClosed
		#define GEODE_STATICS_sortSelectClosed
		GEODE_AS_STATIC_FUNCTION(sortSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCellIdx
		#define GEODE_STATICS_getSelectedCellIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_STATICS_shouldSnapToSelected
		#define GEODE_STATICS_shouldSnapToSelected
		GEODE_AS_STATIC_FUNCTION(shouldSnapToSelected) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCredits
		#define GEODE_CONCEPT_CHECK_onCredits
		GEODE_CONCEPT_FUNCTION_CHECK(onCredits) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitFolder
		#define GEODE_CONCEPT_CHECK_onExitFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onExitFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPage
		#define GEODE_CONCEPT_CHECK_onPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearch
		#define GEODE_CONCEPT_CHECK_onSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSorting
		#define GEODE_CONCEPT_CHECK_onSorting
		GEODE_CONCEPT_FUNCTION_CHECK(onSorting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleCompactMode
		#define GEODE_CONCEPT_CHECK_onToggleCompactMode
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleCompactMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateLibrary
		#define GEODE_CONCEPT_CHECK_onUpdateLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupList
		#define GEODE_CONCEPT_CHECK_setupList
		GEODE_CONCEPT_FUNCTION_CHECK(setupList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trySetupSFXBrowser
		#define GEODE_CONCEPT_CHECK_trySetupSFXBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(trySetupSFXBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageLabel
		#define GEODE_CONCEPT_CHECK_updatePageLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortSelectClosed
		#define GEODE_CONCEPT_CHECK_sortSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(sortSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextPopupClosed
		#define GEODE_CONCEPT_CHECK_setTextPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setTextPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldSnapToSelected
		#define GEODE_CONCEPT_CHECK_shouldSnapToSelected
		GEODE_CONCEPT_FUNCTION_CHECK(shouldSnapToSelected) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXBrowser> : ModifyBase<ModifyDerive<Der, SFXBrowser>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXBrowser>>;
		using ModifyBase<ModifyDerive<Der, SFXBrowser>>::ModifyBase;
		using Base = SFXBrowser;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, create, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, init, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, onClearSearch, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, onCredits, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, onExitFolder, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, onPage, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, onSearch, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, onSorting, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, onToggleCompactMode, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, onUpdateLibrary, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, setupList, , SFXSearchResult*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, trySetupSFXBrowser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, updatePageLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x454e90, Thiscall, SFXBrowser, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x453a00, Thiscall, SFXBrowser, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x453aa0, Thiscall, SFXBrowser, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4545c0, Thiscall, SFXBrowser, sortSelectClosed, SelectSFXSortLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4548a0, Thiscall, SFXBrowser, setTextPopupClosed, SetTextPopup*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, cellPerformedAction, , TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, getSelectedCellIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(SFXBrowser, shouldSnapToSelected, )
		}
	};
}
