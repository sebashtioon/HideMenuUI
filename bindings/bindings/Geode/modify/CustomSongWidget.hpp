#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongWidget.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_deleteSong
		#define GEODE_STATICS_deleteSong
		GEODE_AS_STATIC_FUNCTION(deleteSong) 
	#endif

	#ifndef GEODE_STATICS_downloadAssetFailed
		#define GEODE_STATICS_downloadAssetFailed
		GEODE_AS_STATIC_FUNCTION(downloadAssetFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadAssetFinished
		#define GEODE_STATICS_downloadAssetFinished
		GEODE_AS_STATIC_FUNCTION(downloadAssetFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadFailed
		#define GEODE_STATICS_downloadFailed
		GEODE_AS_STATIC_FUNCTION(downloadFailed) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoIfUnloaded
		#define GEODE_STATICS_getSongInfoIfUnloaded
		GEODE_AS_STATIC_FUNCTION(getSongInfoIfUnloaded) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCancelDownload
		#define GEODE_STATICS_onCancelDownload
		GEODE_AS_STATIC_FUNCTION(onCancelDownload) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onDownload
		#define GEODE_STATICS_onDownload
		GEODE_AS_STATIC_FUNCTION(onDownload) 
	#endif

	#ifndef GEODE_STATICS_onGetSongInfo
		#define GEODE_STATICS_onGetSongInfo
		GEODE_AS_STATIC_FUNCTION(onGetSongInfo) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onMore
		#define GEODE_STATICS_onMore
		GEODE_AS_STATIC_FUNCTION(onMore) 
	#endif

	#ifndef GEODE_STATICS_onPlayback
		#define GEODE_STATICS_onPlayback
		GEODE_AS_STATIC_FUNCTION(onPlayback) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_processNextMultiAsset
		#define GEODE_STATICS_processNextMultiAsset
		GEODE_AS_STATIC_FUNCTION(processNextMultiAsset) 
	#endif

	#ifndef GEODE_STATICS_showError
		#define GEODE_STATICS_showError
		GEODE_AS_STATIC_FUNCTION(showError) 
	#endif

	#ifndef GEODE_STATICS_startDownload
		#define GEODE_STATICS_startDownload
		GEODE_AS_STATIC_FUNCTION(startDownload) 
	#endif

	#ifndef GEODE_STATICS_startMonitorDownload
		#define GEODE_STATICS_startMonitorDownload
		GEODE_AS_STATIC_FUNCTION(startMonitorDownload) 
	#endif

	#ifndef GEODE_STATICS_startMultiAssetDownload
		#define GEODE_STATICS_startMultiAssetDownload
		GEODE_AS_STATIC_FUNCTION(startMultiAssetDownload) 
	#endif

	#ifndef GEODE_STATICS_toggleUpdateButton
		#define GEODE_STATICS_toggleUpdateButton
		GEODE_AS_STATIC_FUNCTION(toggleUpdateButton) 
	#endif

	#ifndef GEODE_STATICS_updateDownloadProgress
		#define GEODE_STATICS_updateDownloadProgress
		GEODE_AS_STATIC_FUNCTION(updateDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_updateError
		#define GEODE_STATICS_updateError
		GEODE_AS_STATIC_FUNCTION(updateError) 
	#endif

	#ifndef GEODE_STATICS_updateMultiAssetInfo
		#define GEODE_STATICS_updateMultiAssetInfo
		GEODE_AS_STATIC_FUNCTION(updateMultiAssetInfo) 
	#endif

	#ifndef GEODE_STATICS_updatePlaybackBtn
		#define GEODE_STATICS_updatePlaybackBtn
		GEODE_AS_STATIC_FUNCTION(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_STATICS_updateProgressBar
		#define GEODE_STATICS_updateProgressBar
		GEODE_AS_STATIC_FUNCTION(updateProgressBar) 
	#endif

	#ifndef GEODE_STATICS_updateSongInfo
		#define GEODE_STATICS_updateSongInfo
		GEODE_AS_STATIC_FUNCTION(updateSongInfo) 
	#endif

	#ifndef GEODE_STATICS_updateSongObject
		#define GEODE_STATICS_updateSongObject
		GEODE_AS_STATIC_FUNCTION(updateSongObject) 
	#endif

	#ifndef GEODE_STATICS_updateWithMultiAssets
		#define GEODE_STATICS_updateWithMultiAssets
		GEODE_AS_STATIC_FUNCTION(updateWithMultiAssets) 
	#endif

	#ifndef GEODE_STATICS_verifySongID
		#define GEODE_STATICS_verifySongID
		GEODE_AS_STATIC_FUNCTION(verifySongID) 
	#endif

	#ifndef GEODE_STATICS_positionInfoObjects
		#define GEODE_STATICS_positionInfoObjects
		GEODE_AS_STATIC_FUNCTION(positionInfoObjects) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFinished
		#define GEODE_STATICS_loadSongInfoFinished
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFailed
		#define GEODE_STATICS_loadSongInfoFailed
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFinished
		#define GEODE_STATICS_downloadSongFinished
		GEODE_AS_STATIC_FUNCTION(downloadSongFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFailed
		#define GEODE_STATICS_downloadSongFailed
		GEODE_AS_STATIC_FUNCTION(downloadSongFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFinished
		#define GEODE_STATICS_downloadSFXFinished
		GEODE_AS_STATIC_FUNCTION(downloadSFXFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFailed
		#define GEODE_STATICS_downloadSFXFailed
		GEODE_AS_STATIC_FUNCTION(downloadSFXFailed) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSong
		#define GEODE_CONCEPT_CHECK_deleteSong
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadAssetFailed
		#define GEODE_CONCEPT_CHECK_downloadAssetFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadAssetFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadAssetFinished
		#define GEODE_CONCEPT_CHECK_downloadAssetFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadAssetFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadFailed
		#define GEODE_CONCEPT_CHECK_downloadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfoIfUnloaded
		#define GEODE_CONCEPT_CHECK_getSongInfoIfUnloaded
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfoIfUnloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCancelDownload
		#define GEODE_CONCEPT_CHECK_onCancelDownload
		GEODE_CONCEPT_FUNCTION_CHECK(onCancelDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownload
		#define GEODE_CONCEPT_CHECK_onDownload
		GEODE_CONCEPT_FUNCTION_CHECK(onDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetSongInfo
		#define GEODE_CONCEPT_CHECK_onGetSongInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onGetSongInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMore
		#define GEODE_CONCEPT_CHECK_onMore
		GEODE_CONCEPT_FUNCTION_CHECK(onMore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlayback
		#define GEODE_CONCEPT_CHECK_onPlayback
		GEODE_CONCEPT_FUNCTION_CHECK(onPlayback) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelect
		#define GEODE_CONCEPT_CHECK_onSelect
		GEODE_CONCEPT_FUNCTION_CHECK(onSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processNextMultiAsset
		#define GEODE_CONCEPT_CHECK_processNextMultiAsset
		GEODE_CONCEPT_FUNCTION_CHECK(processNextMultiAsset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showError
		#define GEODE_CONCEPT_CHECK_showError
		GEODE_CONCEPT_FUNCTION_CHECK(showError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startDownload
		#define GEODE_CONCEPT_CHECK_startDownload
		GEODE_CONCEPT_FUNCTION_CHECK(startDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startMonitorDownload
		#define GEODE_CONCEPT_CHECK_startMonitorDownload
		GEODE_CONCEPT_FUNCTION_CHECK(startMonitorDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startMultiAssetDownload
		#define GEODE_CONCEPT_CHECK_startMultiAssetDownload
		GEODE_CONCEPT_FUNCTION_CHECK(startMultiAssetDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleUpdateButton
		#define GEODE_CONCEPT_CHECK_toggleUpdateButton
		GEODE_CONCEPT_FUNCTION_CHECK(toggleUpdateButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDownloadProgress
		#define GEODE_CONCEPT_CHECK_updateDownloadProgress
		GEODE_CONCEPT_FUNCTION_CHECK(updateDownloadProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateError
		#define GEODE_CONCEPT_CHECK_updateError
		GEODE_CONCEPT_FUNCTION_CHECK(updateError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLengthMod
		#define GEODE_CONCEPT_CHECK_updateLengthMod
		GEODE_CONCEPT_FUNCTION_CHECK(updateLengthMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMultiAssetInfo
		#define GEODE_CONCEPT_CHECK_updateMultiAssetInfo
		GEODE_CONCEPT_FUNCTION_CHECK(updateMultiAssetInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlaybackBtn
		#define GEODE_CONCEPT_CHECK_updatePlaybackBtn
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlaybackBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateProgressBar
		#define GEODE_CONCEPT_CHECK_updateProgressBar
		GEODE_CONCEPT_FUNCTION_CHECK(updateProgressBar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSongInfo
		#define GEODE_CONCEPT_CHECK_updateSongInfo
		GEODE_CONCEPT_FUNCTION_CHECK(updateSongInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSongObject
		#define GEODE_CONCEPT_CHECK_updateSongObject
		GEODE_CONCEPT_FUNCTION_CHECK(updateSongObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateWithMultiAssets
		#define GEODE_CONCEPT_CHECK_updateWithMultiAssets
		GEODE_CONCEPT_FUNCTION_CHECK(updateWithMultiAssets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifySongID
		#define GEODE_CONCEPT_CHECK_verifySongID
		GEODE_CONCEPT_FUNCTION_CHECK(verifySongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionInfoObjects
		#define GEODE_CONCEPT_CHECK_positionInfoObjects
		GEODE_CONCEPT_FUNCTION_CHECK(positionInfoObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFinished
		#define GEODE_CONCEPT_CHECK_loadSongInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFailed
		#define GEODE_CONCEPT_CHECK_loadSongInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFinished
		#define GEODE_CONCEPT_CHECK_downloadSongFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFailed
		#define GEODE_CONCEPT_CHECK_downloadSongFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFinished
		#define GEODE_CONCEPT_CHECK_downloadSFXFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFailed
		#define GEODE_CONCEPT_CHECK_downloadSFXFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songStateChanged
		#define GEODE_CONCEPT_CHECK_songStateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songStateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongWidget> : ModifyBase<ModifyDerive<Der, CustomSongWidget>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongWidget>>;
		using ModifyBase<ModifyDerive<Der, CustomSongWidget>>::ModifyBase;
		using Base = CustomSongWidget;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc56f0, Default, CustomSongWidget, create, SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7360, Thiscall, CustomSongWidget, deleteSong, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca6a0, Thiscall, CustomSongWidget, downloadAssetFailed, int, GJAssetType, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca5e0, Thiscall, CustomSongWidget, downloadAssetFinished, int, GJAssetType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca840, Thiscall, CustomSongWidget, downloadFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7cf0, Thiscall, CustomSongWidget, getSongInfoIfUnloaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5900, Thiscall, CustomSongWidget, init, SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7db0, Thiscall, CustomSongWidget, onCancelDownload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7240, Thiscall, CustomSongWidget, onDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7ed0, Thiscall, CustomSongWidget, onDownload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7e40, Thiscall, CustomSongWidget, onGetSongInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6f50, Thiscall, CustomSongWidget, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7560, Thiscall, CustomSongWidget, onMore, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc81d0, Thiscall, CustomSongWidget, onPlayback, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc8170, Thiscall, CustomSongWidget, onSelect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca440, Thiscall, CustomSongWidget, processNextMultiAsset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca910, Thiscall, CustomSongWidget, showError, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc80b0, Thiscall, CustomSongWidget, startDownload, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CustomSongWidget, startMonitorDownload, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca2a0, Thiscall, CustomSongWidget, startMultiAssetDownload, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CustomSongWidget, toggleUpdateButton, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6ac0, Thiscall, CustomSongWidget, updateDownloadProgress, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca840, Thiscall, CustomSongWidget, updateError, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSongWidget, updateLengthMod, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9960, Thiscall, CustomSongWidget, updateMultiAssetInfo, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc85b0, Thiscall, CustomSongWidget, updatePlaybackBtn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc86a0, Thiscall, CustomSongWidget, updateProgressBar, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc8800, Thiscall, CustomSongWidget, updateSongInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CustomSongWidget, updateSongObject, , SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9610, Thiscall, CustomSongWidget, updateWithMultiAssets, gd::string, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(CustomSongWidget, verifySongID, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6ac0, Thiscall, CustomSongWidget, positionInfoObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9f40, Thiscall, CustomSongWidget, loadSongInfoFinished, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca090, Thiscall, CustomSongWidget, loadSongInfoFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca120, Thiscall, CustomSongWidget, downloadSongFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca1e0, Thiscall, CustomSongWidget, downloadSongFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca260, Thiscall, CustomSongWidget, downloadSFXFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca280, Thiscall, CustomSongWidget, downloadSFXFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca7c0, Thiscall, CustomSongWidget, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca7f0, Thiscall, CustomSongWidget, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc87d0, Thiscall, CustomSongWidget, songStateChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcab60, Thiscall, CustomSongWidget, FLAlert_Clicked, FLAlertLayer*, bool)
		}
	};
}
