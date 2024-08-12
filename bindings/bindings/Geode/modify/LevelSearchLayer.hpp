#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSearchLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_checkDiff
		#define GEODE_STATICS_checkDiff
		GEODE_AS_STATIC_FUNCTION(checkDiff) 
	#endif

	#ifndef GEODE_STATICS_checkTime
		#define GEODE_STATICS_checkTime
		GEODE_AS_STATIC_FUNCTION(checkTime) 
	#endif

	#ifndef GEODE_STATICS_clearFilters
		#define GEODE_STATICS_clearFilters
		GEODE_AS_STATIC_FUNCTION(clearFilters) 
	#endif

	#ifndef GEODE_STATICS_confirmClearFilters
		#define GEODE_STATICS_confirmClearFilters
		GEODE_AS_STATIC_FUNCTION(confirmClearFilters) 
	#endif

	#ifndef GEODE_STATICS_getLevelLenKey
		#define GEODE_STATICS_getLevelLenKey
		GEODE_AS_STATIC_FUNCTION(getLevelLenKey) 
	#endif

	#ifndef GEODE_STATICS_getSearchDiffKey
		#define GEODE_STATICS_getSearchDiffKey
		GEODE_AS_STATIC_FUNCTION(getSearchDiffKey) 
	#endif

	#ifndef GEODE_STATICS_getSearchObject
		#define GEODE_STATICS_getSearchObject
		GEODE_AS_STATIC_FUNCTION(getSearchObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onClearFreeSearch
		#define GEODE_STATICS_onClearFreeSearch
		GEODE_AS_STATIC_FUNCTION(onClearFreeSearch) 
	#endif

	#ifndef GEODE_STATICS_onFollowed
		#define GEODE_STATICS_onFollowed
		GEODE_AS_STATIC_FUNCTION(onFollowed) 
	#endif

	#ifndef GEODE_STATICS_onFriends
		#define GEODE_STATICS_onFriends
		GEODE_AS_STATIC_FUNCTION(onFriends) 
	#endif

	#ifndef GEODE_STATICS_onLatestStars
		#define GEODE_STATICS_onLatestStars
		GEODE_AS_STATIC_FUNCTION(onLatestStars) 
	#endif

	#ifndef GEODE_STATICS_onMagic
		#define GEODE_STATICS_onMagic
		GEODE_AS_STATIC_FUNCTION(onMagic) 
	#endif

	#ifndef GEODE_STATICS_onMoreOptions
		#define GEODE_STATICS_onMoreOptions
		GEODE_AS_STATIC_FUNCTION(onMoreOptions) 
	#endif

	#ifndef GEODE_STATICS_onMostDownloaded
		#define GEODE_STATICS_onMostDownloaded
		GEODE_AS_STATIC_FUNCTION(onMostDownloaded) 
	#endif

	#ifndef GEODE_STATICS_onMostLikes
		#define GEODE_STATICS_onMostLikes
		GEODE_AS_STATIC_FUNCTION(onMostLikes) 
	#endif

	#ifndef GEODE_STATICS_onMostRecent
		#define GEODE_STATICS_onMostRecent
		GEODE_AS_STATIC_FUNCTION(onMostRecent) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onSearchMode
		#define GEODE_STATICS_onSearchMode
		GEODE_AS_STATIC_FUNCTION(onSearchMode) 
	#endif

	#ifndef GEODE_STATICS_onSearchUser
		#define GEODE_STATICS_onSearchUser
		GEODE_AS_STATIC_FUNCTION(onSearchUser) 
	#endif

	#ifndef GEODE_STATICS_onSpecialDemon
		#define GEODE_STATICS_onSpecialDemon
		GEODE_AS_STATIC_FUNCTION(onSpecialDemon) 
	#endif

	#ifndef GEODE_STATICS_onStarAward
		#define GEODE_STATICS_onStarAward
		GEODE_AS_STATIC_FUNCTION(onStarAward) 
	#endif

	#ifndef GEODE_STATICS_onSuggested
		#define GEODE_STATICS_onSuggested
		GEODE_AS_STATIC_FUNCTION(onSuggested) 
	#endif

	#ifndef GEODE_STATICS_onTrending
		#define GEODE_STATICS_onTrending
		GEODE_AS_STATIC_FUNCTION(onTrending) 
	#endif

	#ifndef GEODE_STATICS_toggleDifficulty
		#define GEODE_STATICS_toggleDifficulty
		GEODE_AS_STATIC_FUNCTION(toggleDifficulty) 
	#endif

	#ifndef GEODE_STATICS_toggleDifficultyNum
		#define GEODE_STATICS_toggleDifficultyNum
		GEODE_AS_STATIC_FUNCTION(toggleDifficultyNum) 
	#endif

	#ifndef GEODE_STATICS_toggleStar
		#define GEODE_STATICS_toggleStar
		GEODE_AS_STATIC_FUNCTION(toggleStar) 
	#endif

	#ifndef GEODE_STATICS_toggleTime
		#define GEODE_STATICS_toggleTime
		GEODE_AS_STATIC_FUNCTION(toggleTime) 
	#endif

	#ifndef GEODE_STATICS_toggleTimeNum
		#define GEODE_STATICS_toggleTimeNum
		GEODE_AS_STATIC_FUNCTION(toggleTimeNum) 
	#endif

	#ifndef GEODE_STATICS_updateSearchLabel
		#define GEODE_STATICS_updateSearchLabel
		GEODE_AS_STATIC_FUNCTION(updateSearchLabel) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_demonFilterSelectClosed
		#define GEODE_STATICS_demonFilterSelectClosed
		GEODE_AS_STATIC_FUNCTION(demonFilterSelectClosed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkDiff
		#define GEODE_CONCEPT_CHECK_checkDiff
		GEODE_CONCEPT_FUNCTION_CHECK(checkDiff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkTime
		#define GEODE_CONCEPT_CHECK_checkTime
		GEODE_CONCEPT_FUNCTION_CHECK(checkTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearFilters
		#define GEODE_CONCEPT_CHECK_clearFilters
		GEODE_CONCEPT_FUNCTION_CHECK(clearFilters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmClearFilters
		#define GEODE_CONCEPT_CHECK_confirmClearFilters
		GEODE_CONCEPT_FUNCTION_CHECK(confirmClearFilters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelLenKey
		#define GEODE_CONCEPT_CHECK_getLevelLenKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelLenKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchDiffKey
		#define GEODE_CONCEPT_CHECK_getSearchDiffKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchDiffKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchObject
		#define GEODE_CONCEPT_CHECK_getSearchObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearFreeSearch
		#define GEODE_CONCEPT_CHECK_onClearFreeSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearFreeSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFollowed
		#define GEODE_CONCEPT_CHECK_onFollowed
		GEODE_CONCEPT_FUNCTION_CHECK(onFollowed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFriends
		#define GEODE_CONCEPT_CHECK_onFriends
		GEODE_CONCEPT_FUNCTION_CHECK(onFriends) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLatestStars
		#define GEODE_CONCEPT_CHECK_onLatestStars
		GEODE_CONCEPT_FUNCTION_CHECK(onLatestStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMagic
		#define GEODE_CONCEPT_CHECK_onMagic
		GEODE_CONCEPT_FUNCTION_CHECK(onMagic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMoreOptions
		#define GEODE_CONCEPT_CHECK_onMoreOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onMoreOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMostDownloaded
		#define GEODE_CONCEPT_CHECK_onMostDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(onMostDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMostLikes
		#define GEODE_CONCEPT_CHECK_onMostLikes
		GEODE_CONCEPT_FUNCTION_CHECK(onMostLikes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMostRecent
		#define GEODE_CONCEPT_CHECK_onMostRecent
		GEODE_CONCEPT_FUNCTION_CHECK(onMostRecent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearch
		#define GEODE_CONCEPT_CHECK_onSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearchMode
		#define GEODE_CONCEPT_CHECK_onSearchMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSearchMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearchUser
		#define GEODE_CONCEPT_CHECK_onSearchUser
		GEODE_CONCEPT_FUNCTION_CHECK(onSearchUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpecialDemon
		#define GEODE_CONCEPT_CHECK_onSpecialDemon
		GEODE_CONCEPT_FUNCTION_CHECK(onSpecialDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onStarAward
		#define GEODE_CONCEPT_CHECK_onStarAward
		GEODE_CONCEPT_FUNCTION_CHECK(onStarAward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSuggested
		#define GEODE_CONCEPT_CHECK_onSuggested
		GEODE_CONCEPT_FUNCTION_CHECK(onSuggested) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTrending
		#define GEODE_CONCEPT_CHECK_onTrending
		GEODE_CONCEPT_FUNCTION_CHECK(onTrending) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDifficulty
		#define GEODE_CONCEPT_CHECK_toggleDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDifficultyNum
		#define GEODE_CONCEPT_CHECK_toggleDifficultyNum
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDifficultyNum) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleStar
		#define GEODE_CONCEPT_CHECK_toggleStar
		GEODE_CONCEPT_FUNCTION_CHECK(toggleStar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleTime
		#define GEODE_CONCEPT_CHECK_toggleTime
		GEODE_CONCEPT_FUNCTION_CHECK(toggleTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleTimeNum
		#define GEODE_CONCEPT_CHECK_toggleTimeNum
		GEODE_CONCEPT_FUNCTION_CHECK(toggleTimeNum) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSearchLabel
		#define GEODE_CONCEPT_CHECK_updateSearchLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateSearchLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_demonFilterSelectClosed
		#define GEODE_CONCEPT_CHECK_demonFilterSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(demonFilterSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSearchLayer> : ModifyBase<ModifyDerive<Der, LevelSearchLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSearchLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelSearchLayer>>::ModifyBase;
		using Base = LevelSearchLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelSearchLayer, create, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ebb10, Default, LevelSearchLayer, scene, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f1800, Thiscall, LevelSearchLayer, checkDiff, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f1dc0, Thiscall, LevelSearchLayer, checkTime, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelSearchLayer, clearFilters, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelSearchLayer, confirmClearFilters, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x147f60, Thiscall, LevelSearchLayer, getLevelLenKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelSearchLayer, getSearchDiffKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef7b0, Thiscall, LevelSearchLayer, getSearchObject, SearchType, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ebc60, Thiscall, LevelSearchLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelSearchLayer, onBack, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f1520, Thiscall, LevelSearchLayer, onClearFreeSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSearchLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f0fe0, Thiscall, LevelSearchLayer, onFollowed, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f0f20, Thiscall, LevelSearchLayer, onFriends, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f0e60, Thiscall, LevelSearchLayer, onLatestStars, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f0ce0, Thiscall, LevelSearchLayer, onMagic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2edfa0, Thiscall, LevelSearchLayer, onMoreOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f09e0, Thiscall, LevelSearchLayer, onMostDownloaded, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f0aa0, Thiscall, LevelSearchLayer, onMostLikes, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f0da0, Thiscall, LevelSearchLayer, onMostRecent, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f10a0, Thiscall, LevelSearchLayer, onSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2edf50, Thiscall, LevelSearchLayer, onSearchMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f12e0, Thiscall, LevelSearchLayer, onSearchUser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2edbb0, Thiscall, LevelSearchLayer, onSpecialDemon, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelSearchLayer, onStarAward, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f0b60, Thiscall, LevelSearchLayer, onSuggested, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f0c20, Thiscall, LevelSearchLayer, onTrending, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f18e0, Thiscall, LevelSearchLayer, toggleDifficulty, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f1c40, Thiscall, LevelSearchLayer, toggleDifficultyNum, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f15d0, Thiscall, LevelSearchLayer, toggleStar, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelSearchLayer, toggleTime, , cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f2050, Thiscall, LevelSearchLayer, toggleTimeNum, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef440, Thiscall, LevelSearchLayer, updateSearchLabel, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f21e0, Thiscall, LevelSearchLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef220, Thiscall, LevelSearchLayer, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef370, Thiscall, LevelSearchLayer, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(LevelSearchLayer, textChanged, , CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef1e0, Thiscall, LevelSearchLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2edd10, Thiscall, LevelSearchLayer, demonFilterSelectClosed, int)
		}
	};
}
