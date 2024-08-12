#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJAssetDownloadAction.hpp"
#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSongWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSongWidget, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x547684
     * @note[short] MacOS (Intel): 0x625a90
     * @note[short] Windows: 0xc56f0
     * @note[short] iOS: 0xfb090
     * @note[short] Android
     */
    static CustomSongWidget* create(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk);

    /**
     * @note[short] MacOS (ARM): 0x54b7d4
     * @note[short] MacOS (Intel): 0x62a2b0
     * @note[short] Windows: 0xc7360
     * @note[short] Android
     */
    void deleteSong();

    /**
     * @note[short] Windows: 0xca6a0
     * @note[short] Android
     */
    void downloadAssetFailed(int p0, GJAssetType p1, GJSongError p2);

    /**
     * @note[short] MacOS (ARM): 0x54d454
     * @note[short] MacOS (Intel): 0x62c250
     * @note[short] Windows: 0xca5e0
     * @note[short] Android
     */
    void downloadAssetFinished(int p0, GJAssetType p1);

    /**
     * @note[short] MacOS (ARM): 0x54d2ec
     * @note[short] MacOS (Intel): 0x62c100
     * @note[short] Windows: 0xca840
     * @note[short] Android
     */
    void downloadFailed();

    /**
     * @note[short] MacOS (ARM): 0x54bb14
     * @note[short] MacOS (Intel): 0x62a630
     * @note[short] Windows: 0xc7cf0
     * @note[short] Android
     */
    void getSongInfoIfUnloaded();

    /**
     * @note[short] MacOS (ARM): 0x5477dc
     * @note[short] MacOS (Intel): 0x625c40
     * @note[short] Windows: 0xc5900
     * @note[short] iOS: 0xfb16c
     * @note[short] Android
     */
    bool init(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk);

    /**
     * @note[short] MacOS (ARM): 0x548acc
     * @note[short] MacOS (Intel): 0x6270a0
     * @note[short] Windows: 0xc7db0
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x548b08
     * @note[short] MacOS (Intel): 0x6270e0
     * @note[short] Windows: 0xc7240
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x548874
     * @note[short] MacOS (Intel): 0x626e10
     * @note[short] Windows: 0xc7ed0
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x548c44
     * @note[short] MacOS (Intel): 0x627220
     * @note[short] Windows: 0xc7e40
     * @note[short] Android
     */
    void onGetSongInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x549aec
     * @note[short] MacOS (Intel): 0x628350
     * @note[short] Windows: 0xc6f50
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x548fb0
     * @note[short] MacOS (Intel): 0x627580
     * @note[short] Windows: 0xc7560
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x548cd8
     * @note[short] MacOS (Intel): 0x6272b0
     * @note[short] Windows: 0xc81d0
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x548be8
     * @note[short] MacOS (Intel): 0x6271c0
     * @note[short] Windows: 0xc8170
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54d898
     * @note[short] MacOS (Intel): 0x62c780
     * @note[short] Windows: 0xca440
     * @note[short] Android
     */
    void processNextMultiAsset();

    /**
     * @note[short] MacOS (ARM): 0x54b908
     * @note[short] MacOS (Intel): 0x62a3f0
     * @note[short] Windows: 0xca910
     * @note[short] Android
     */
    void showError(bool p0);

    /**
     * @note[short] Windows: 0xc80b0
     * @note[short] Android
     */
    void startDownload();
    
private:
    [[deprecated("CustomSongWidget::startMonitorDownload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startMonitorDownload();
public:

    /**
     * @note[short] MacOS (ARM): 0x54bc74
     * @note[short] MacOS (Intel): 0x62a780
     * @note[short] Windows: 0xca2a0
     * @note[short] Android
     */
    void startMultiAssetDownload();
    
private:
    [[deprecated("CustomSongWidget::toggleUpdateButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUpdateButton(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x54c044
     * @note[short] MacOS (Intel): 0x62ac40
     * @note[short] Windows: 0xc6ac0
     * @note[short] Android
     */
    void updateDownloadProgress(float p0);

    /**
     * @note[short] MacOS (ARM): 0x54d1b4
     * @note[short] MacOS (Intel): 0x62bfd0
     * @note[short] Windows: 0xca840
     * @note[short] Android
     */
    void updateError(GJSongError p0);

    /**
     * @note[short] MacOS (ARM): 0x54c1a4
     * @note[short] MacOS (Intel): 0x62adb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLengthMod(float lengthMod);

    /**
     * @note[short] MacOS (ARM): 0x54c98c
     * @note[short] MacOS (Intel): 0x62b6e0
     * @note[short] Windows: 0xc9960
     * @note[short] Android
     */
    void updateMultiAssetInfo(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x54b5b8
     * @note[short] MacOS (Intel): 0x62a0c0
     * @note[short] Windows: 0xc85b0
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] Windows: 0xc86a0
     * @note[short] Android
     */
    void updateProgressBar(int p0);

    /**
     * @note[short] MacOS (ARM): 0x54a50c
     * @note[short] MacOS (Intel): 0x628f30
     * @note[short] Windows: 0xc8800
     * @note[short] Android
     */
    void updateSongInfo();
    
private:
    [[deprecated("CustomSongWidget::updateSongObject not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSongObject(SongInfoObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x54c1ac
     * @note[short] MacOS (Intel): 0x62add0
     * @note[short] Windows: 0xc9610
     * @note[short] Android
     */
    void updateWithMultiAssets(gd::string p0, gd::string p1, int p2);
    
private:
    [[deprecated("CustomSongWidget::verifySongID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifySongID(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x549fac
     * @note[short] MacOS (Intel): 0x628970
     * @note[short] Windows: 0xc6ac0
     * @note[short] Android
     */
    void positionInfoObjects();

    /**
     * @note[short] MacOS (ARM): 0x54cf6c
     * @note[short] MacOS (Intel): 0x62bd50
     * @note[short] Windows: 0xc9f40
     * @note[short] Android
     */
    virtual void loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x54d118
     * @note[short] MacOS (Intel): 0x62bf40
     * @note[short] Windows: 0xca090
     * @note[short] Android
     */
    virtual void loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x54d38c
     * @note[short] MacOS (Intel): 0x62c190
     * @note[short] Windows: 0xca120
     * @note[short] Android
     */
    virtual void downloadSongFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x54d64c
     * @note[short] MacOS (Intel): 0x62c470
     * @note[short] Windows: 0xca1e0
     * @note[short] Android
     */
    virtual void downloadSongFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x54d798
     * @note[short] MacOS (Intel): 0x62c600
     * @note[short] Windows: 0xca260
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x54d7ac
     * @note[short] MacOS (Intel): 0x62c630
     * @note[short] Windows: 0xca280
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x54da5c
     * @note[short] MacOS (Intel): 0x62c930
     * @note[short] Windows: 0xca7c0
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x54da9c
     * @note[short] MacOS (Intel): 0x62c990
     * @note[short] Windows: 0xca7f0
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x54c158
     * @note[short] MacOS (Intel): 0x62ad60
     * @note[short] Windows: 0xc87d0
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x54db38
     * @note[short] MacOS (Intel): 0x62ca30
     * @note[short] Windows: 0xcab60
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    SongInfoObject* m_songInfoObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_songLabel;
    cocos2d::CCLabelBMFont* m_artistLabel;
    cocos2d::CCLabelBMFont* m_songIDLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadBtn;
    CCMenuItemSpriteExtra* m_cancelDownloadBtn;
    CCMenuItemSpriteExtra* m_selectSongBtn;
    CCMenuItemSpriteExtra* m_getSongInfoBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_moreBtn;
    CCMenuItemSpriteExtra* m_deleteBtn;
    CCMenuItemSpriteExtra* m_infoBtn;
    cocos2d::CCSprite* m_sliderGroove;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_ncsLogo;
    cocos2d::extension::CCScale9Sprite* m_bgSpr;
    CustomSongDelegate* m_songDelegate;
    bool m_showSelectSongBtn;
    bool m_showPlayMusicBtn;
    bool m_showDownloadBtn;
    bool m_isNotDownloading;
    bool m_isRobtopSong;
    bool m_isMusicLibrary;
    int m_customSongID;
    float m_lengthMod;
    void* m_unkPtr;
    void* m_unkPtr2;
    bool m_hasLibrarySongs;
    bool m_hasSFX;
    bool m_unkBool2;
    gd::map<int, bool> m_songs;
    gd::map<int, bool> m_sfx;
    gd::vector<CCObject*> m_undownloadedAssets;
};
