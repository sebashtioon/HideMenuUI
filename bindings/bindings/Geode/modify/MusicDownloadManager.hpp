#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicDownloadManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_addMusicDownloadDelegate
		#define GEODE_STATICS_addMusicDownloadDelegate
		GEODE_AS_STATIC_FUNCTION(addMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_STATICS_addSongObjectFromString
		#define GEODE_STATICS_addSongObjectFromString
		GEODE_AS_STATIC_FUNCTION(addSongObjectFromString) 
	#endif

	#ifndef GEODE_STATICS_clearUnusedSongs
		#define GEODE_STATICS_clearUnusedSongs
		GEODE_AS_STATIC_FUNCTION(clearUnusedSongs) 
	#endif

	#ifndef GEODE_STATICS_createArtistsInfo
		#define GEODE_STATICS_createArtistsInfo
		GEODE_AS_STATIC_FUNCTION(createArtistsInfo) 
	#endif

	#ifndef GEODE_STATICS_createSongsInfo
		#define GEODE_STATICS_createSongsInfo
		GEODE_AS_STATIC_FUNCTION(createSongsInfo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_deleteSFX
		#define GEODE_STATICS_deleteSFX
		GEODE_AS_STATIC_FUNCTION(deleteSFX) 
	#endif

	#ifndef GEODE_STATICS_deleteSong
		#define GEODE_STATICS_deleteSong
		GEODE_AS_STATIC_FUNCTION(deleteSong) 
	#endif

	#ifndef GEODE_STATICS_downloadCustomSong
		#define GEODE_STATICS_downloadCustomSong
		GEODE_AS_STATIC_FUNCTION(downloadCustomSong) 
	#endif

	#ifndef GEODE_STATICS_downloadMusicLibrary
		#define GEODE_STATICS_downloadMusicLibrary
		GEODE_AS_STATIC_FUNCTION(downloadMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_downloadSFX
		#define GEODE_STATICS_downloadSFX
		GEODE_AS_STATIC_FUNCTION(downloadSFX) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFailed
		#define GEODE_STATICS_downloadSFXFailed
		GEODE_AS_STATIC_FUNCTION(downloadSFXFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFinished
		#define GEODE_STATICS_downloadSFXFinished
		GEODE_AS_STATIC_FUNCTION(downloadSFXFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXLibrary
		#define GEODE_STATICS_downloadSFXLibrary
		GEODE_AS_STATIC_FUNCTION(downloadSFXLibrary) 
	#endif

	#ifndef GEODE_STATICS_downloadSong
		#define GEODE_STATICS_downloadSong
		GEODE_AS_STATIC_FUNCTION(downloadSong) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFailed
		#define GEODE_STATICS_downloadSongFailed
		GEODE_AS_STATIC_FUNCTION(downloadSongFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFinished
		#define GEODE_STATICS_downloadSongFinished
		GEODE_AS_STATIC_FUNCTION(downloadSongFinished) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_filterMusicByArtistID
		#define GEODE_STATICS_filterMusicByArtistID
		GEODE_AS_STATIC_FUNCTION(filterMusicByArtistID) 
	#endif

	#ifndef GEODE_STATICS_filterMusicByTag
		#define GEODE_STATICS_filterMusicByTag
		GEODE_AS_STATIC_FUNCTION(filterMusicByTag) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_generateCustomContentURL
		#define GEODE_STATICS_generateCustomContentURL
		GEODE_AS_STATIC_FUNCTION(generateCustomContentURL) 
	#endif

	#ifndef GEODE_STATICS_generateResourceAssetList
		#define GEODE_STATICS_generateResourceAssetList
		GEODE_AS_STATIC_FUNCTION(generateResourceAssetList) 
	#endif

	#ifndef GEODE_STATICS_getAllMusicArtists
		#define GEODE_STATICS_getAllMusicArtists
		GEODE_AS_STATIC_FUNCTION(getAllMusicArtists) 
	#endif

	#ifndef GEODE_STATICS_getAllMusicObjects
		#define GEODE_STATICS_getAllMusicObjects
		GEODE_AS_STATIC_FUNCTION(getAllMusicObjects) 
	#endif

	#ifndef GEODE_STATICS_getAllMusicTags
		#define GEODE_STATICS_getAllMusicTags
		GEODE_AS_STATIC_FUNCTION(getAllMusicTags) 
	#endif

	#ifndef GEODE_STATICS_getAllSFXObjects
		#define GEODE_STATICS_getAllSFXObjects
		GEODE_AS_STATIC_FUNCTION(getAllSFXObjects) 
	#endif

	#ifndef GEODE_STATICS_getAllSongs
		#define GEODE_STATICS_getAllSongs
		GEODE_AS_STATIC_FUNCTION(getAllSongs) 
	#endif

	#ifndef GEODE_STATICS_getCustomContentURL
		#define GEODE_STATICS_getCustomContentURL
		GEODE_AS_STATIC_FUNCTION(getCustomContentURL) 
	#endif

	#ifndef GEODE_STATICS_getDLObject
		#define GEODE_STATICS_getDLObject
		GEODE_AS_STATIC_FUNCTION(getDLObject) 
	#endif

	#ifndef GEODE_STATICS_getDownloadedSongs
		#define GEODE_STATICS_getDownloadedSongs
		GEODE_AS_STATIC_FUNCTION(getDownloadedSongs) 
	#endif

	#ifndef GEODE_STATICS_getDownloadProgress
		#define GEODE_STATICS_getDownloadProgress
		GEODE_AS_STATIC_FUNCTION(getDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_getMusicArtistForID
		#define GEODE_STATICS_getMusicArtistForID
		GEODE_AS_STATIC_FUNCTION(getMusicArtistForID) 
	#endif

	#ifndef GEODE_STATICS_getMusicObject
		#define GEODE_STATICS_getMusicObject
		GEODE_AS_STATIC_FUNCTION(getMusicObject) 
	#endif

	#ifndef GEODE_STATICS_getSFXDownloadKey
		#define GEODE_STATICS_getSFXDownloadKey
		GEODE_AS_STATIC_FUNCTION(getSFXDownloadKey) 
	#endif

	#ifndef GEODE_STATICS_getSFXDownloadProgress
		#define GEODE_STATICS_getSFXDownloadProgress
		GEODE_AS_STATIC_FUNCTION(getSFXDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_getSFXFolderObjectForID
		#define GEODE_STATICS_getSFXFolderObjectForID
		GEODE_AS_STATIC_FUNCTION(getSFXFolderObjectForID) 
	#endif

	#ifndef GEODE_STATICS_getSFXFolderPathForID
		#define GEODE_STATICS_getSFXFolderPathForID
		GEODE_AS_STATIC_FUNCTION(getSFXFolderPathForID) 
	#endif

	#ifndef GEODE_STATICS_getSFXObject
		#define GEODE_STATICS_getSFXObject
		GEODE_AS_STATIC_FUNCTION(getSFXObject) 
	#endif

	#ifndef GEODE_STATICS_getSongDownloadKey
		#define GEODE_STATICS_getSongDownloadKey
		GEODE_AS_STATIC_FUNCTION(getSongDownloadKey) 
	#endif

	#ifndef GEODE_STATICS_getSongInfo
		#define GEODE_STATICS_getSongInfo
		GEODE_AS_STATIC_FUNCTION(getSongInfo) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoKey
		#define GEODE_STATICS_getSongInfoKey
		GEODE_AS_STATIC_FUNCTION(getSongInfoKey) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoObject
		#define GEODE_STATICS_getSongInfoObject
		GEODE_AS_STATIC_FUNCTION(getSongInfoObject) 
	#endif

	#ifndef GEODE_STATICS_getSongPriority
		#define GEODE_STATICS_getSongPriority
		GEODE_AS_STATIC_FUNCTION(getSongPriority) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_handleItDelayed
		#define GEODE_STATICS_handleItDelayed
		GEODE_AS_STATIC_FUNCTION(handleItDelayed) 
	#endif

	#ifndef GEODE_STATICS_handleItND
		#define GEODE_STATICS_handleItND
		GEODE_AS_STATIC_FUNCTION(handleItND) 
	#endif

	#ifndef GEODE_STATICS_incrementPriorityForSong
		#define GEODE_STATICS_incrementPriorityForSong
		GEODE_AS_STATIC_FUNCTION(incrementPriorityForSong) 
	#endif

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_isMusicLibraryLoaded
		#define GEODE_STATICS_isMusicLibraryLoaded
		GEODE_AS_STATIC_FUNCTION(isMusicLibraryLoaded) 
	#endif

	#ifndef GEODE_STATICS_isResourceSFX
		#define GEODE_STATICS_isResourceSFX
		GEODE_AS_STATIC_FUNCTION(isResourceSFX) 
	#endif

	#ifndef GEODE_STATICS_isRunningActionForSongID
		#define GEODE_STATICS_isRunningActionForSongID
		GEODE_AS_STATIC_FUNCTION(isRunningActionForSongID) 
	#endif

	#ifndef GEODE_STATICS_isSFXDownloaded
		#define GEODE_STATICS_isSFXDownloaded
		GEODE_AS_STATIC_FUNCTION(isSFXDownloaded) 
	#endif

	#ifndef GEODE_STATICS_isSFXLibraryLoaded
		#define GEODE_STATICS_isSFXLibraryLoaded
		GEODE_AS_STATIC_FUNCTION(isSFXLibraryLoaded) 
	#endif

	#ifndef GEODE_STATICS_isSongDownloaded
		#define GEODE_STATICS_isSongDownloaded
		GEODE_AS_STATIC_FUNCTION(isSongDownloaded) 
	#endif

	#ifndef GEODE_STATICS_limitDownloadedSongs
		#define GEODE_STATICS_limitDownloadedSongs
		GEODE_AS_STATIC_FUNCTION(limitDownloadedSongs) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFailed
		#define GEODE_STATICS_loadSongInfoFailed
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFinished
		#define GEODE_STATICS_loadSongInfoFinished
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_nameForTagID
		#define GEODE_STATICS_nameForTagID
		GEODE_AS_STATIC_FUNCTION(nameForTagID) 
	#endif

	#ifndef GEODE_STATICS_onDownloadMusicLibraryCompleted
		#define GEODE_STATICS_onDownloadMusicLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSFXCompleted
		#define GEODE_STATICS_onDownloadSFXCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSFXCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSFXLibraryCompleted
		#define GEODE_STATICS_onDownloadSFXLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSongCompleted
		#define GEODE_STATICS_onDownloadSongCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSongCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetCustomContentURLCompleted
		#define GEODE_STATICS_onGetCustomContentURLCompleted
		GEODE_AS_STATIC_FUNCTION(onGetCustomContentURLCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetSongInfoCompleted
		#define GEODE_STATICS_onGetSongInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetSongInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onTryUpdateMusicLibraryCompleted
		#define GEODE_STATICS_onTryUpdateMusicLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onTryUpdateMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onTryUpdateSFXLibraryCompleted
		#define GEODE_STATICS_onTryUpdateSFXLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onTryUpdateSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_parseMusicLibrary
		#define GEODE_STATICS_parseMusicLibrary
		GEODE_AS_STATIC_FUNCTION(parseMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_parseSFXLibrary
		#define GEODE_STATICS_parseSFXLibrary
		GEODE_AS_STATIC_FUNCTION(parseSFXLibrary) 
	#endif

	#ifndef GEODE_STATICS_pathForSFX
		#define GEODE_STATICS_pathForSFX
		GEODE_AS_STATIC_FUNCTION(pathForSFX) 
	#endif

	#ifndef GEODE_STATICS_pathForSFXFolder
		#define GEODE_STATICS_pathForSFXFolder
		GEODE_AS_STATIC_FUNCTION(pathForSFXFolder) 
	#endif

	#ifndef GEODE_STATICS_pathForSong
		#define GEODE_STATICS_pathForSong
		GEODE_AS_STATIC_FUNCTION(pathForSong) 
	#endif

	#ifndef GEODE_STATICS_pathForSongFolder
		#define GEODE_STATICS_pathForSongFolder
		GEODE_AS_STATIC_FUNCTION(pathForSongFolder) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpGetRequest
		#define GEODE_STATICS_ProcessHttpGetRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpGetRequest) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_removeMusicDownloadDelegate
		#define GEODE_STATICS_removeMusicDownloadDelegate
		GEODE_AS_STATIC_FUNCTION(removeMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_STATICS_responseToDict
		#define GEODE_STATICS_responseToDict
		GEODE_AS_STATIC_FUNCTION(responseToDict) 
	#endif

	#ifndef GEODE_STATICS_showTOS
		#define GEODE_STATICS_showTOS
		GEODE_AS_STATIC_FUNCTION(showTOS) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_stopDownload
		#define GEODE_STATICS_stopDownload
		GEODE_AS_STATIC_FUNCTION(stopDownload) 
	#endif

	#ifndef GEODE_STATICS_storeMusicObject
		#define GEODE_STATICS_storeMusicObject
		GEODE_AS_STATIC_FUNCTION(storeMusicObject) 
	#endif

	#ifndef GEODE_STATICS_storeSFXInfoObject
		#define GEODE_STATICS_storeSFXInfoObject
		GEODE_AS_STATIC_FUNCTION(storeSFXInfoObject) 
	#endif

	#ifndef GEODE_STATICS_tryLoadLibraries
		#define GEODE_STATICS_tryLoadLibraries
		GEODE_AS_STATIC_FUNCTION(tryLoadLibraries) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateMusicLibrary
		#define GEODE_STATICS_tryUpdateMusicLibrary
		GEODE_AS_STATIC_FUNCTION(tryUpdateMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateSFXLibrary
		#define GEODE_STATICS_tryUpdateSFXLibrary
		GEODE_AS_STATIC_FUNCTION(tryUpdateSFXLibrary) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDLToActive
		#define GEODE_CONCEPT_CHECK_addDLToActive
		GEODE_CONCEPT_FUNCTION_CHECK(addDLToActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addMusicDownloadDelegate
		#define GEODE_CONCEPT_CHECK_addMusicDownloadDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSongObjectFromString
		#define GEODE_CONCEPT_CHECK_addSongObjectFromString
		GEODE_CONCEPT_FUNCTION_CHECK(addSongObjectFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearSong
		#define GEODE_CONCEPT_CHECK_clearSong
		GEODE_CONCEPT_FUNCTION_CHECK(clearSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearUnusedSongs
		#define GEODE_CONCEPT_CHECK_clearUnusedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(clearUnusedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createArtistsInfo
		#define GEODE_CONCEPT_CHECK_createArtistsInfo
		GEODE_CONCEPT_FUNCTION_CHECK(createArtistsInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSongsInfo
		#define GEODE_CONCEPT_CHECK_createSongsInfo
		GEODE_CONCEPT_FUNCTION_CHECK(createSongsInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSFX
		#define GEODE_CONCEPT_CHECK_deleteSFX
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSong
		#define GEODE_CONCEPT_CHECK_deleteSong
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadCustomSong
		#define GEODE_CONCEPT_CHECK_downloadCustomSong
		GEODE_CONCEPT_FUNCTION_CHECK(downloadCustomSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadMusicLibrary
		#define GEODE_CONCEPT_CHECK_downloadMusicLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(downloadMusicLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFX
		#define GEODE_CONCEPT_CHECK_downloadSFX
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFailed
		#define GEODE_CONCEPT_CHECK_downloadSFXFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFinished
		#define GEODE_CONCEPT_CHECK_downloadSFXFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXLibrary
		#define GEODE_CONCEPT_CHECK_downloadSFXLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSong
		#define GEODE_CONCEPT_CHECK_downloadSong
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFailed
		#define GEODE_CONCEPT_CHECK_downloadSongFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFinished
		#define GEODE_CONCEPT_CHECK_downloadSongFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_filterMusicByArtistID
		#define GEODE_CONCEPT_CHECK_filterMusicByArtistID
		GEODE_CONCEPT_FUNCTION_CHECK(filterMusicByArtistID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_filterMusicByTag
		#define GEODE_CONCEPT_CHECK_filterMusicByTag
		GEODE_CONCEPT_FUNCTION_CHECK(filterMusicByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateCustomContentURL
		#define GEODE_CONCEPT_CHECK_generateCustomContentURL
		GEODE_CONCEPT_FUNCTION_CHECK(generateCustomContentURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateResourceAssetList
		#define GEODE_CONCEPT_CHECK_generateResourceAssetList
		GEODE_CONCEPT_FUNCTION_CHECK(generateResourceAssetList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllMusicArtists
		#define GEODE_CONCEPT_CHECK_getAllMusicArtists
		GEODE_CONCEPT_FUNCTION_CHECK(getAllMusicArtists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllMusicObjects
		#define GEODE_CONCEPT_CHECK_getAllMusicObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getAllMusicObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllMusicTags
		#define GEODE_CONCEPT_CHECK_getAllMusicTags
		GEODE_CONCEPT_FUNCTION_CHECK(getAllMusicTags) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllSFXObjects
		#define GEODE_CONCEPT_CHECK_getAllSFXObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getAllSFXObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllSongs
		#define GEODE_CONCEPT_CHECK_getAllSongs
		GEODE_CONCEPT_FUNCTION_CHECK(getAllSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomContentURL
		#define GEODE_CONCEPT_CHECK_getCustomContentURL
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomContentURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDLObject
		#define GEODE_CONCEPT_CHECK_getDLObject
		GEODE_CONCEPT_FUNCTION_CHECK(getDLObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDownloadedSongs
		#define GEODE_CONCEPT_CHECK_getDownloadedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(getDownloadedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDownloadProgress
		#define GEODE_CONCEPT_CHECK_getDownloadProgress
		GEODE_CONCEPT_FUNCTION_CHECK(getDownloadProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicArtistForID
		#define GEODE_CONCEPT_CHECK_getMusicArtistForID
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicArtistForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicObject
		#define GEODE_CONCEPT_CHECK_getMusicObject
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXDownloadKey
		#define GEODE_CONCEPT_CHECK_getSFXDownloadKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXDownloadKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXDownloadProgress
		#define GEODE_CONCEPT_CHECK_getSFXDownloadProgress
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXDownloadProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXFolderObjectForID
		#define GEODE_CONCEPT_CHECK_getSFXFolderObjectForID
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXFolderObjectForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXFolderPathForID
		#define GEODE_CONCEPT_CHECK_getSFXFolderPathForID
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXFolderPathForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXObject
		#define GEODE_CONCEPT_CHECK_getSFXObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongDownloadKey
		#define GEODE_CONCEPT_CHECK_getSongDownloadKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSongDownloadKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfo
		#define GEODE_CONCEPT_CHECK_getSongInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfoKey
		#define GEODE_CONCEPT_CHECK_getSongInfoKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfoObject
		#define GEODE_CONCEPT_CHECK_getSongInfoObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfoObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongPriority
		#define GEODE_CONCEPT_CHECK_getSongPriority
		GEODE_CONCEPT_FUNCTION_CHECK(getSongPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleIt
		#define GEODE_CONCEPT_CHECK_handleIt
		GEODE_CONCEPT_FUNCTION_CHECK(handleIt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItDelayed
		#define GEODE_CONCEPT_CHECK_handleItDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(handleItDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItND
		#define GEODE_CONCEPT_CHECK_handleItND
		GEODE_CONCEPT_FUNCTION_CHECK(handleItND) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementPriorityForSong
		#define GEODE_CONCEPT_CHECK_incrementPriorityForSong
		GEODE_CONCEPT_FUNCTION_CHECK(incrementPriorityForSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDLActive
		#define GEODE_CONCEPT_CHECK_isDLActive
		GEODE_CONCEPT_FUNCTION_CHECK(isDLActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isMusicLibraryLoaded
		#define GEODE_CONCEPT_CHECK_isMusicLibraryLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(isMusicLibraryLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isResourceSFX
		#define GEODE_CONCEPT_CHECK_isResourceSFX
		GEODE_CONCEPT_FUNCTION_CHECK(isResourceSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isResourceSong
		#define GEODE_CONCEPT_CHECK_isResourceSong
		GEODE_CONCEPT_FUNCTION_CHECK(isResourceSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRunningActionForSongID
		#define GEODE_CONCEPT_CHECK_isRunningActionForSongID
		GEODE_CONCEPT_FUNCTION_CHECK(isRunningActionForSongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSFXDownloaded
		#define GEODE_CONCEPT_CHECK_isSFXDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(isSFXDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSFXLibraryLoaded
		#define GEODE_CONCEPT_CHECK_isSFXLibraryLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(isSFXLibraryLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSongDownloaded
		#define GEODE_CONCEPT_CHECK_isSongDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(isSongDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_limitDownloadedSongs
		#define GEODE_CONCEPT_CHECK_limitDownloadedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(limitDownloadedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFailed
		#define GEODE_CONCEPT_CHECK_loadSongInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFinished
		#define GEODE_CONCEPT_CHECK_loadSongInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameForTagID
		#define GEODE_CONCEPT_CHECK_nameForTagID
		GEODE_CONCEPT_FUNCTION_CHECK(nameForTagID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadMusicLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadMusicLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSFXCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadSFXCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSFXCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSFXLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadSFXLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSongCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadSongCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSongCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetCustomContentURLCompleted
		#define GEODE_CONCEPT_CHECK_onGetCustomContentURLCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetCustomContentURLCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetSongInfoCompleted
		#define GEODE_CONCEPT_CHECK_onGetSongInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetSongInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		#define GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTryUpdateMusicLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onTryUpdateMusicLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onTryUpdateMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTryUpdateSFXLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onTryUpdateSFXLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onTryUpdateSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseMusicLibrary
		#define GEODE_CONCEPT_CHECK_parseMusicLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(parseMusicLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseSFXLibrary
		#define GEODE_CONCEPT_CHECK_parseSFXLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(parseSFXLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSFX
		#define GEODE_CONCEPT_CHECK_pathForSFX
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSFXFolder
		#define GEODE_CONCEPT_CHECK_pathForSFXFolder
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSFXFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSong
		#define GEODE_CONCEPT_CHECK_pathForSong
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSongFolder
		#define GEODE_CONCEPT_CHECK_pathForSongFolder
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSongFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpGetRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpGetRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpGetRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDLFromActive
		#define GEODE_CONCEPT_CHECK_removeDLFromActive
		GEODE_CONCEPT_FUNCTION_CHECK(removeDLFromActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeMusicDownloadDelegate
		#define GEODE_CONCEPT_CHECK_removeMusicDownloadDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(removeMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_responseToDict
		#define GEODE_CONCEPT_CHECK_responseToDict
		GEODE_CONCEPT_FUNCTION_CHECK(responseToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTOS
		#define GEODE_CONCEPT_CHECK_showTOS
		GEODE_CONCEPT_FUNCTION_CHECK(showTOS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songStateChanged
		#define GEODE_CONCEPT_CHECK_songStateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songStateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopDownload
		#define GEODE_CONCEPT_CHECK_stopDownload
		GEODE_CONCEPT_FUNCTION_CHECK(stopDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeMusicObject
		#define GEODE_CONCEPT_CHECK_storeMusicObject
		GEODE_CONCEPT_FUNCTION_CHECK(storeMusicObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSFXInfoObject
		#define GEODE_CONCEPT_CHECK_storeSFXInfoObject
		GEODE_CONCEPT_FUNCTION_CHECK(storeSFXInfoObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryLoadLibraries
		#define GEODE_CONCEPT_CHECK_tryLoadLibraries
		GEODE_CONCEPT_FUNCTION_CHECK(tryLoadLibraries) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryUpdateMusicLibrary
		#define GEODE_CONCEPT_CHECK_tryUpdateMusicLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(tryUpdateMusicLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryUpdateSFXLibrary
		#define GEODE_CONCEPT_CHECK_tryUpdateSFXLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(tryUpdateSFXLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicDownloadManager> : ModifyBase<ModifyDerive<Der, MusicDownloadManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicDownloadManager>>;
		using ModifyBase<ModifyDerive<Der, MusicDownloadManager>>::ModifyBase;
		using Base = MusicDownloadManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31bca0, Default, MusicDownloadManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31def0, Thiscall, MusicDownloadManager, addDLToActive, char const*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, addDLToActive, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31c430, Thiscall, MusicDownloadManager, addMusicDownloadDelegate, MusicDownloadDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, addSongObjectFromString, , gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, clearSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31d660, Thiscall, MusicDownloadManager, clearUnusedSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31d150, Thiscall, MusicDownloadManager, createArtistsInfo, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31cda0, Thiscall, MusicDownloadManager, createSongsInfo, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e950, Thiscall, MusicDownloadManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, deleteSFX, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, deleteSong, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31f240, Thiscall, MusicDownloadManager, downloadCustomSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, downloadMusicLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, downloadSFX, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, downloadSFXFailed, , int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, downloadSFXFinished, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, downloadSFXLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31d960, Thiscall, MusicDownloadManager, downloadSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323250, Thiscall, MusicDownloadManager, downloadSongFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, downloadSongFinished, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, encodeDataTo, , DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, filterMusicByArtistID, , int, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, filterMusicByTag, , int, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3227c0, Thiscall, MusicDownloadManager, generateCustomContentURL, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, generateResourceAssetList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getAllMusicArtists, , OptionsObjectDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getAllMusicObjects, , GJSongType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getAllMusicTags, , OptionsObjectDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getAllSFXObjects, , bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getAllSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31ee40, Thiscall, MusicDownloadManager, getCustomContentURL, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x38f40, Thiscall, MusicDownloadManager, getDLObject, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31d5a0, Thiscall, MusicDownloadManager, getDownloadedSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getDownloadProgress, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getMusicArtistForID, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getMusicObject, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getSFXDownloadKey, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getSFXDownloadProgress, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getSFXFolderObjectForID, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getSFXFolderPathForID, , int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getSFXObject, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getSongDownloadKey, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31c680, Thiscall, MusicDownloadManager, getSongInfo, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getSongInfoKey, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e070, Thiscall, MusicDownloadManager, getSongInfoObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, getSongPriority, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, handleIt, , bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, handleItDelayed, , bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, handleItND, , cocos2d::CCNode*, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, incrementPriorityForSong, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, isDLActive, , char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, isMusicLibraryLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, isResourceSFX, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, isResourceSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, isRunningActionForSongID, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, isSFXDownloaded, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, isSFXLibraryLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e180, Thiscall, MusicDownloadManager, isSongDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, limitDownloadedSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, loadSongInfoFailed, , int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x323150, Thiscall, MusicDownloadManager, loadSongInfoFinished, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, musicActionFailed, , GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, musicActionFinished, , GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, nameForTagID, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, onDownloadMusicLibraryCompleted, , cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, onDownloadSFXCompleted, , cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, onDownloadSFXLibraryCompleted, , cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31dc50, Thiscall, MusicDownloadManager, onDownloadSongCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, onGetCustomContentURLCompleted, , gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31c960, Thiscall, MusicDownloadManager, onGetSongInfoCompleted, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, onProcessHttpRequestCompleted, , cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, onTryUpdateMusicLibraryCompleted, , cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, onTryUpdateSFXLibraryCompleted, , cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, parseMusicLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, parseSFXLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e730, Thiscall, MusicDownloadManager, pathForSFX, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e5e0, Thiscall, MusicDownloadManager, pathForSFXFolder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e400, Thiscall, MusicDownloadManager, pathForSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e2b0, Thiscall, MusicDownloadManager, pathForSongFolder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, ProcessHttpGetRequest, , gd::string, gd::string, cocos2d::extension::SEL_HttpResponse, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, ProcessHttpRequest, , gd::string, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31dfc0, Thiscall, MusicDownloadManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, removeMusicDownloadDelegate, , MusicDownloadDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, responseToDict, , gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x31e7f0, Thiscall, MusicDownloadManager, showTOS, FLAlertLayerProtocol*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, songStateChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, stopDownload, , int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, storeMusicObject, , SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, storeSFXInfoObject, , SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, tryLoadLibraries, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, tryUpdateMusicLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, tryUpdateSFXLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR(MusicDownloadManager, init, )
		}
	};
}
