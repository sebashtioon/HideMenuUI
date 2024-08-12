#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "PlatformDownloadDelegate.hpp"

class MusicDownloadManager : public cocos2d::CCNode, public PlatformDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDownloadManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4da8a4
     * @note[short] MacOS (Intel): 0x5912f0
     * @note[short] Windows: 0x31bca0
     * @note[short] Android
     */
    static MusicDownloadManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x4dff40
     * @note[short] MacOS (Intel): 0x597180
     * @note[short] Windows: 0x31def0
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);
    
private:
    [[deprecated("MusicDownloadManager::addDLToActive not implemented")]]
    /**
     * @note[short] Android
     */
    void addDLToActive(char const* tag);
public:

    /**
     * @note[short] Windows: 0x31c430
     * @note[short] Android
     */
    TodoReturn addMusicDownloadDelegate(MusicDownloadDelegate* p0);
    
private:
    [[deprecated("MusicDownloadManager::addSongObjectFromString not implemented")]]
    /**
     * @note[short] Android
     */
    void addSongObjectFromString(gd::string p0);
public:

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void clearSong(int songID);

    /**
     * @note[short] Windows: 0x31d660
     * @note[short] Android
     */
    void clearUnusedSongs();

    /**
     * @note[short] Windows: 0x31d150
     * @note[short] Android
     */
    void createArtistsInfo(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4ddb10
     * @note[short] MacOS (Intel): 0x594970
     * @note[short] Windows: 0x31cda0
     * @note[short] Android
     */
    void createSongsInfo(gd::string p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4e0c34
     * @note[short] MacOS (Intel): 0x5980c0
     * @note[short] Windows: 0x31e950
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("MusicDownloadManager::deleteSFX not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteSFX(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::deleteSong not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4df158
     * @note[short] MacOS (Intel): 0x5962e0
     * @note[short] Android
     */
    void deleteSong(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4df8c4
     * @note[short] MacOS (Intel): 0x596ad0
     * @note[short] Windows: 0x31f240
     * @note[short] Android
     */
    void downloadCustomSong(int p0);
    
private:
    [[deprecated("MusicDownloadManager::downloadMusicLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadMusicLibrary();
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSFX not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4e4cc8
     * @note[short] MacOS (Intel): 0x59c9e0
     * @note[short] Android
     */
    void downloadSFX(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSFXFailed not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadSFXFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSFXFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadSFXFinished(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSFXLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadSFXLibrary();
public:

    /**
     * @note[short] MacOS (ARM): 0x4df478
     * @note[short] MacOS (Intel): 0x5965c0
     * @note[short] Windows: 0x31d960
     * @note[short] Android
     */
    void downloadSong(int p0);

    /**
     * @note[short] Windows: 0x323250
     * @note[short] Android
     */
    void downloadSongFailed(int p0, GJSongError p1);
    
private:
    [[deprecated("MusicDownloadManager::downloadSongFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadSongFinished(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::encodeDataTo not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4e0bdc
     * @note[short] MacOS (Intel): 0x598060
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::filterMusicByArtistID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn filterMusicByArtistID(int p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::filterMusicByTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn filterMusicByTag(int p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:

    /**
     * @note[short] Windows: 0x3227c0
     * @note[short] Android
     */
    TodoReturn generateCustomContentURL(gd::string p0);
    
private:
    [[deprecated("MusicDownloadManager::generateResourceAssetList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateResourceAssetList();
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicArtists not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicArtists(OptionsObjectDelegate* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicObjects(GJSongType p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicTags not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicTags(OptionsObjectDelegate* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllSFXObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllSFXObjects(bool p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllSongs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllSongs();
public:

    /**
     * @note[short] MacOS (ARM): 0x4e11c8
     * @note[short] MacOS (Intel): 0x5986c0
     * @note[short] Windows: 0x31ee40
     * @note[short] Android
     */
    void getCustomContentURL();

    /**
     * @note[short] Windows: 0x38f40
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x4decf8
     * @note[short] MacOS (Intel): 0x595e00
     * @note[short] Windows: 0x31d5a0
     * @note[short] Android
     */
    cocos2d::CCArray* getDownloadedSongs();
    
private:
    [[deprecated("MusicDownloadManager::getDownloadProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDownloadProgress(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getMusicArtistForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicArtistForID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getMusicObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicObject(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXDownloadKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXDownloadKey(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXDownloadProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXDownloadProgress(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXFolderObjectForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXFolderObjectForID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXFolderPathForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXFolderPathForID(int p0, bool p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXObject(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSongDownloadKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongDownloadKey(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4dc278
     * @note[short] MacOS (Intel): 0x592de0
     * @note[short] Windows: 0x31c680
     * @note[short] Android
     */
    void getSongInfo(int p0, bool p1);
    
private:
    [[deprecated("MusicDownloadManager::getSongInfoKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongInfoKey(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4dc130
     * @note[short] MacOS (Intel): 0x592c90
     * @note[short] Windows: 0x31e070
     * @note[short] Android
     */
    SongInfoObject* getSongInfoObject(int p0);
    
private:
    [[deprecated("MusicDownloadManager::getSongPriority not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongPriority();
public:
    
private:
    [[deprecated("MusicDownloadManager::handleIt not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4dadec
     * @note[short] MacOS (Intel): 0x591910
     * @note[short] Android
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("MusicDownloadManager::handleItDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("MusicDownloadManager::handleItND not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::incrementPriorityForSong not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementPriorityForSong(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::isDLActive not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4dbec8
     * @note[short] MacOS (Intel): 0x592a50
     * @note[short] Android
     */
    bool isDLActive(char const* tag);
public:
    
private:
    [[deprecated("MusicDownloadManager::isMusicLibraryLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isMusicLibraryLoaded();
public:
    
private:
    [[deprecated("MusicDownloadManager::isResourceSFX not implemented")]]
    /**
     * @note[short] Android
     */
    bool isResourceSFX(int p0);
public:

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isResourceSong(int id);
    
private:
    [[deprecated("MusicDownloadManager::isRunningActionForSongID not implemented")]]
    /**
     * @note[short] Android
     */
    bool isRunningActionForSongID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::isSFXDownloaded not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4e04c0
     * @note[short] MacOS (Intel): 0x5977f0
     * @note[short] Android
     */
    bool isSFXDownloaded(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::isSFXLibraryLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSFXLibraryLoaded();
public:

    /**
     * @note[short] MacOS (ARM): 0x4ded90
     * @note[short] MacOS (Intel): 0x595ea0
     * @note[short] Windows: 0x31e180
     * @note[short] Android
     */
    bool isSongDownloaded(int p0);
    
private:
    [[deprecated("MusicDownloadManager::limitDownloadedSongs not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4df024
     * @note[short] MacOS (Intel): 0x5961a0
     * @note[short] Android
     */
    void limitDownloadedSongs();
public:
    
private:
    [[deprecated("MusicDownloadManager::loadSongInfoFailed not implemented")]]
    /**
     * @note[short] Android
     */
    void loadSongInfoFailed(int p0, GJSongError p1);
public:

    /**
     * @note[short] Windows: 0x323150
     * @note[short] Android
     */
    void loadSongInfoFinished(SongInfoObject* p0);
    
private:
    [[deprecated("MusicDownloadManager::musicActionFailed not implemented")]]
    /**
     * @note[short] Android
     */
    void musicActionFailed(GJMusicAction p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::musicActionFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void musicActionFinished(GJMusicAction p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::nameForTagID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nameForTagID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadMusicLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadSFXCompleted not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4e50c8
     * @note[short] MacOS (Intel): 0x59ce00
     * @note[short] Android
     */
    void onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadSFXLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x4dfcc8
     * @note[short] MacOS (Intel): 0x596ee0
     * @note[short] Windows: 0x31dc50
     * @note[short] Android
     */
    void onDownloadSongCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    
private:
    [[deprecated("MusicDownloadManager::onGetCustomContentURLCompleted not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4db830
     * @note[short] MacOS (Intel): 0x592330
     * @note[short] Android
     */
    void onGetCustomContentURLCompleted(gd::string p0, gd::string p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x4db560
     * @note[short] MacOS (Intel): 0x592040
     * @note[short] Windows: 0x31c960
     * @note[short] Android
     */
    void onGetSongInfoCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("MusicDownloadManager::onProcessHttpRequestCompleted not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4daaac
     * @note[short] MacOS (Intel): 0x591590
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onTryUpdateMusicLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onTryUpdateSFXLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::parseMusicLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    void parseMusicLibrary();
public:
    
private:
    [[deprecated("MusicDownloadManager::parseSFXLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    void parseSFXLibrary();
public:

    /**
     * @note[short] MacOS (ARM): 0x4e0800
     * @note[short] MacOS (Intel): 0x597c20
     * @note[short] Windows: 0x31e730
     * @note[short] Android
     */
    gd::string pathForSFX(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4e08e4
     * @note[short] MacOS (Intel): 0x597ce0
     * @note[short] Windows: 0x31e5e0
     * @note[short] Android
     */
    gd::string pathForSFXFolder(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4df2bc
     * @note[short] MacOS (Intel): 0x596410
     * @note[short] Windows: 0x31e400
     * @note[short] Android
     */
    gd::string pathForSong(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4e0314
     * @note[short] MacOS (Intel): 0x5975b0
     * @note[short] Windows: 0x31e2b0
     * @note[short] Android
     */
    gd::string pathForSongFolder(int p0);
    
private:
    [[deprecated("MusicDownloadManager::ProcessHttpGetRequest not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4daccc
     * @note[short] MacOS (Intel): 0x5917a0
     * @note[short] Android
     */
    void ProcessHttpGetRequest(gd::string p0, gd::string p1, cocos2d::extension::SEL_HttpResponse p2, int p3, int p4);
public:
    
private:
    [[deprecated("MusicDownloadManager::ProcessHttpRequest not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4da968
     * @note[short] MacOS (Intel): 0x591400
     * @note[short] Android
     */
    void ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);
public:

    /**
     * @note[short] MacOS (ARM): 0x4dbfac
     * @note[short] MacOS (Intel): 0x592b30
     * @note[short] Windows: 0x31dfc0
     * @note[short] Android
     */
    void removeDLFromActive(char const* p0);
    
private:
    [[deprecated("MusicDownloadManager::removeMusicDownloadDelegate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeMusicDownloadDelegate(MusicDownloadDelegate* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::responseToDict not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCDictionary* responseToDict(gd::string p0, char const* p1);
public:

    /**
     * @note[short] Windows: 0x31e7f0
     * @note[short] Android
     */
    void showTOS(FLAlertLayerProtocol* p0);
    
private:
    [[deprecated("MusicDownloadManager::songStateChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4dc0a0
     * @note[short] MacOS (Intel): 0x592c00
     * @note[short] Android
     */
    void songStateChanged();
public:
    
private:
    [[deprecated("MusicDownloadManager::stopDownload not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4dbe6c
     * @note[short] MacOS (Intel): 0x592a00
     * @note[short] Android
     */
    TodoReturn stopDownload(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::storeMusicObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeMusicObject(SongInfoObject* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::storeSFXInfoObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeSFXInfoObject(SFXInfoObject* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::tryLoadLibraries not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryLoadLibraries();
public:
    
private:
    [[deprecated("MusicDownloadManager::tryUpdateMusicLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryUpdateMusicLibrary();
public:
    
private:
    [[deprecated("MusicDownloadManager::tryUpdateSFXLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryUpdateSFXLibrary();
public:
    
private:
    [[deprecated("MusicDownloadManager::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4dba84
     * @note[short] MacOS (Intel): 0x592600
     * @note[short] Android
     */
    virtual bool init();
public:
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCArray* m_musicDownloadDelegates;
    cocos2d::CCDictionary* m_songObjects;
    cocos2d::CCDictionary* m_MDLM003;
    int m_songPriority;
    gd::string m_customContentURL;
    cocos2d::CCDictionary* m_sfxObjects;
    cocos2d::CCArray* m_sfxArtists;
    int m_sfxLibraryVersion;
    int m_sfxObjectCount;
    bool m_requestedSfxLibraryDownloaded;
    cocos2d::CCDictionary* m_musicObjects;
    cocos2d::CCDictionary* m_musicArtists;
    gd::map<int, gd::string> m_musicTags;
    int m_musicLibraryVersion;
    int m_musicObjectCount;
    bool m_requestedMusicLibraryDownloaded;
    bool m_triedToLoadLibraries;
    bool m_unkBool;
    gd::unordered_set<int> m_resourceSfxUnorderedSet;
    gd::unordered_set<int> m_resourceSongUnorderedSet;
};
