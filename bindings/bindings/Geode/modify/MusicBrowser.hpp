#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicBrowser.hpp>
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

	#ifndef GEODE_STATICS_onArtistFilters
		#define GEODE_STATICS_onArtistFilters
		GEODE_AS_STATIC_FUNCTION(onArtistFilters) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onPlaybackControl
		#define GEODE_STATICS_onPlaybackControl
		GEODE_AS_STATIC_FUNCTION(onPlaybackControl) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onTagFilters
		#define GEODE_STATICS_onTagFilters
		GEODE_AS_STATIC_FUNCTION(onTagFilters) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLibrary
		#define GEODE_STATICS_onUpdateLibrary
		GEODE_AS_STATIC_FUNCTION(onUpdateLibrary) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_setupSongControls
		#define GEODE_STATICS_setupSongControls
		GEODE_AS_STATIC_FUNCTION(setupSongControls) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_trySetupMusicBrowser
		#define GEODE_STATICS_trySetupMusicBrowser
		GEODE_AS_STATIC_FUNCTION(trySetupMusicBrowser) 
	#endif

	#ifndef GEODE_STATICS_updatePageLabel
		#define GEODE_STATICS_updatePageLabel
		GEODE_AS_STATIC_FUNCTION(updatePageLabel) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
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

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onArtistFilters
		#define GEODE_CONCEPT_CHECK_onArtistFilters
		GEODE_CONCEPT_FUNCTION_CHECK(onArtistFilters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPage
		#define GEODE_CONCEPT_CHECK_onPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlaybackControl
		#define GEODE_CONCEPT_CHECK_onPlaybackControl
		GEODE_CONCEPT_FUNCTION_CHECK(onPlaybackControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearch
		#define GEODE_CONCEPT_CHECK_onSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTagFilters
		#define GEODE_CONCEPT_CHECK_onTagFilters
		GEODE_CONCEPT_FUNCTION_CHECK(onTagFilters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateLibrary
		#define GEODE_CONCEPT_CHECK_onUpdateLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupList
		#define GEODE_CONCEPT_CHECK_setupList
		GEODE_CONCEPT_FUNCTION_CHECK(setupList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSongControls
		#define GEODE_CONCEPT_CHECK_setupSongControls
		GEODE_CONCEPT_FUNCTION_CHECK(setupSongControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trySetupMusicBrowser
		#define GEODE_CONCEPT_CHECK_trySetupMusicBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(trySetupMusicBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageLabel
		#define GEODE_CONCEPT_CHECK_updatePageLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
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

	#ifndef GEODE_CONCEPT_CHECK_sliderEnded
		#define GEODE_CONCEPT_CHECK_sliderEnded
		GEODE_CONCEPT_FUNCTION_CHECK(sliderEnded) 
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

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicBrowser> : ModifyBase<ModifyDerive<Der, MusicBrowser>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicBrowser>>;
		using ModifyBase<ModifyDerive<Der, MusicBrowser>>::ModifyBase;
		using Base = MusicBrowser;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, create, , int, GJSongType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, init, , int, GJSongType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, onArtistFilters, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, onClearSearch, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, onClose, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, onPage, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, onPlaybackControl, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, onSearch, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, onTagFilters, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, onUpdateLibrary, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, setupList, , MusicSearchResult*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, setupSongControls, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, sliderChanged, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, trySetupMusicBrowser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, updatePageLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x318ad0, Thiscall, MusicBrowser, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31a1b0, Thiscall, MusicBrowser, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3193d0, Thiscall, MusicBrowser, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319440, Thiscall, MusicBrowser, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319110, Thiscall, MusicBrowser, sliderEnded, Slider*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319f20, Thiscall, MusicBrowser, setTextPopupClosed, SetTextPopup*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, cellPerformedAction, , TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicBrowser, getSelectedCellIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31a0c0, Thiscall, MusicBrowser, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
