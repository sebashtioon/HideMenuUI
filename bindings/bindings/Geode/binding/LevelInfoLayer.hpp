#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelDownloadDelegate.hpp"
#include "LevelUpdateDelegate.hpp"
#include "RateLevelDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "LevelDeleteDelegate.hpp"
#include "NumberInputDelegate.hpp"
#include "SetIDPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"

class LevelInfoLayer : public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelInfoLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x258874
     * @note[short] MacOS (Intel): 0x2b8e60
     * @note[short] Windows: 0x2d73f0
     * @note[short] iOS: 0x2abc0
     * @note[short] Android
     */
    static LevelInfoLayer* create(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x25d43c
     * @note[short] MacOS (Intel): 0x2bddb0
     * @note[short] Windows: 0x2dd950
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x25cc14
     * @note[short] MacOS (Intel): 0x2bd590
     * @note[short] Windows: 0x2ddac0
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x25dc1c
     * @note[short] MacOS (Intel): 0x2be5a0
     * @note[short] Windows: 0x2def30
     * @note[short] Android
     */
    void confirmMoveToBottom(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x25db2c
     * @note[short] MacOS (Intel): 0x2be4c0
     * @note[short] Windows: 0x2dedf0
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x25d334
     * @note[short] MacOS (Intel): 0x2bdcd0
     * @note[short] Windows: 0x2ddc00
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x25b4e0
     * @note[short] MacOS (Intel): 0x2bbdc0
     * @note[short] Windows: 0x2da130
     * @note[short] Android
     */
    void downloadLevel();
    
private:
    [[deprecated("LevelInfoLayer::incrementDislikes not implemented")]]
    /**
     * @note[short] Android
     */
    void incrementDislikes();
public:
    
private:
    [[deprecated("LevelInfoLayer::incrementLikes not implemented")]]
    /**
     * @note[short] Android
     */
    void incrementLikes();
public:

    /**
     * @note[short] MacOS (ARM): 0x2589c8
     * @note[short] MacOS (Intel): 0x2b9040
     * @note[short] Windows: 0x2d7620
     * @note[short] iOS: 0x2ac44
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x25f890
     * @note[short] MacOS (Intel): 0x2c0300
     * @note[short] Windows: 0x2dd350
     * @note[short] Android
     */
    void loadLevelStep();

    /**
     * @note[short] MacOS (ARM): 0x25dee8
     * @note[short] MacOS (Intel): 0x2be840
     * @note[short] Windows: 0x2d9b20
     * @note[short] Android
     */
    void onAddToList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25d6c4
     * @note[short] MacOS (Intel): 0x2be000
     * @note[short] Windows: 0x2e0280
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onClone not implemented")]]
    /**
     * @note[short] Android
     */
    void onClone(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelInfoLayer::onDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x25daac
     * @note[short] MacOS (Intel): 0x2be440
     * @note[short] Windows: 0x2d9df0
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onFeatured not implemented")]]
    /**
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x25da54
     * @note[short] MacOS (Intel): 0x2be3e0
     * @note[short] Windows: 0x2d9f70
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25ce78
     * @note[short] MacOS (Intel): 0x2bd800
     * @note[short] Windows: 0x2dd4b0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25d744
     * @note[short] MacOS (Intel): 0x2be080
     * @note[short] Windows: 0x2deba0
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25dd10
     * @note[short] MacOS (Intel): 0x2be680
     * @note[short] Windows: 0x2dea50
     * @note[short] Android
     */
    void onLevelOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25ceb0
     * @note[short] MacOS (Intel): 0x2bd830
     * @note[short] Windows: 0x2d9e90
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25cf1c
     * @note[short] MacOS (Intel): 0x2bd8a0
     * @note[short] Windows: 0x2de4f0
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onLowDetailMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onLowDetailMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelInfoLayer::onOwnerDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void onOwnerDelete(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x25acc8
     * @note[short] MacOS (Intel): 0x2bb5c0
     * @note[short] Windows: 0x2dc520
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onPlayReplay not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x25f9b0
     * @note[short] MacOS (Intel): 0x2c0430
     * @note[short] Android
     */
    void onPlayReplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x25fff4
     * @note[short] MacOS (Intel): 0x2c0a80
     * @note[short] Windows: 0x2ddd70
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25d0f8
     * @note[short] MacOS (Intel): 0x2bda80
     * @note[short] Windows: 0x2de370
     * @note[short] Android
     */
    void onRateDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25cf94
     * @note[short] MacOS (Intel): 0x2bd920
     * @note[short] Windows: 0x2de050
     * @note[short] Android
     */
    void onRateStars(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25d2dc
     * @note[short] MacOS (Intel): 0x2bdc80
     * @note[short] Windows: 0x2de310
     * @note[short] Android
     */
    void onRateStarsMod(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25de28
     * @note[short] MacOS (Intel): 0x2be7a0
     * @note[short] Windows: 0x2d9cc0
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25cd10
     * @note[short] MacOS (Intel): 0x2bd680
     * @note[short] Windows: 0x2de910
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25ac50
     * @note[short] MacOS (Intel): 0x2bb540
     * @note[short] Windows: 0x2deaf0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25f744
     * @note[short] MacOS (Intel): 0x2c01b0
     * @note[short] Windows: 0x2dd1a0
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x25f804
     * @note[short] MacOS (Intel): 0x2c0270
     * @note[short] Windows: 0x2dd280
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x25f940
     * @note[short] MacOS (Intel): 0x2c03b0
     * @note[short] Windows: 0x2dd400
     * @note[short] Android
     */
    void playStep4();

    /**
     * @note[short] MacOS (ARM): 0x258818
     * @note[short] MacOS (Intel): 0x2b8e10
     * @note[short] Windows: 0x2d73a0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x25b5b8
     * @note[short] MacOS (Intel): 0x2bbeb0
     * @note[short] Windows: 0x2daf80
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x25c0f8
     * @note[short] MacOS (Intel): 0x2bcb10
     * @note[short] Windows: 0x2da440
     * @note[short] iOS: 0x2e0cc
     * @note[short] Android
     */
    void setupPlatformerStats();

    /**
     * @note[short] MacOS (ARM): 0x25c4a0
     * @note[short] MacOS (Intel): 0x2bce50
     * @note[short] Windows: 0x2da870
     * @note[short] iOS: 0x2e428
     * @note[short] Android
     */
    void setupProgressBars();
    
private:
    [[deprecated("LevelInfoLayer::shouldDownloadLevel not implemented")]]
    /**
     * @note[short] Android
     */
    bool shouldDownloadLevel();
public:
    
private:
    [[deprecated("LevelInfoLayer::showSongWarning not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x25f624
     * @note[short] MacOS (Intel): 0x2c00c0
     * @note[short] Android
     */
    void showSongWarning();
public:

    /**
     * @note[short] MacOS (ARM): 0x25f1c4
     * @note[short] MacOS (Intel): 0x2bfc20
     * @note[short] Windows: 0x2dc060
     * @note[short] Android
     */
    void showUpdateAlert(UpdateResponse p0);

    /**
     * @note[short] MacOS (ARM): 0x25d588
     * @note[short] MacOS (Intel): 0x2bdee0
     * @note[short] Windows: 0x2dd4f0
     * @note[short] Android
     */
    void tryCloneLevel(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelInfoLayer::tryShowAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd();
public:

    /**
     * @note[short] MacOS (ARM): 0x25e294
     * @note[short] MacOS (Intel): 0x2bebc0
     * @note[short] Windows: 0x2df060
     * @note[short] iOS: 0x2fc38
     * @note[short] Android
     */
    void updateLabelValues();

    /**
     * @note[short] MacOS (ARM): 0x25d14c
     * @note[short] MacOS (Intel): 0x2bdae0
     * @note[short] Windows: 0x2de650
     * @note[short] Android
     */
    void updateSideButtons();

    /**
     * @note[short] MacOS (ARM): 0x26042c
     * @note[short] MacOS (Intel): 0x2c0ec0
     * @note[short] Windows: 0x2e0370
     * @note[short] iOS: 0x2f39c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x260438
     * @note[short] MacOS (Intel): 0x2c0ef0
     * @note[short] Windows: 0x2e0380
     * @note[short] iOS: 0x315d0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x25fb78
     * @note[short] MacOS (Intel): 0x2c05f0
     * @note[short] Windows: 0x2dd780
     * @note[short] iOS: 0x30ffc
     * @note[short] Android
     */
    virtual void numberInputClosed(NumberInputLayer* p0);
    
private:
    [[deprecated("LevelInfoLayer::cellPerformedAction not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x25df40
     * @note[short] MacOS (Intel): 0x2be8a0
     * @note[short] iOS: 0x2f9c4
     * @note[short] Android
     */
    virtual void cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:

    /**
     * @note[short] MacOS (ARM): 0x25ecf0
     * @note[short] MacOS (Intel): 0x2bf730
     * @note[short] Windows: 0x2dbb60
     * @note[short] iOS: 0x305f0
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x25f070
     * @note[short] MacOS (Intel): 0x2bfac0
     * @note[short] Windows: 0x2dbec0
     * @note[short] iOS: 0x30870
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x25f154
     * @note[short] MacOS (Intel): 0x2bfbb0
     * @note[short] Windows: 0x2dbff0
     * @note[short] iOS: 0x30930
     * @note[short] Android
     */
    virtual void levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);

    /**
     * @note[short] MacOS (ARM): 0x25f354
     * @note[short] MacOS (Intel): 0x2bfda0
     * @note[short] Windows: 0x2dc150
     * @note[short] iOS: 0x30a50
     * @note[short] Android
     */
    virtual void levelUpdateFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x25f43c
     * @note[short] MacOS (Intel): 0x2bfea0
     * @note[short] Windows: 0x2dc280
     * @note[short] iOS: 0x30b14
     * @note[short] Android
     */
    virtual void levelDeleteFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x25f530
     * @note[short] MacOS (Intel): 0x2bffb0
     * @note[short] Windows: 0x2dc3c0
     * @note[short] iOS: 0x30be4
     * @note[short] Android
     */
    virtual void levelDeleteFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x260148
     * @note[short] MacOS (Intel): 0x2c0bb0
     * @note[short] Windows: 0x2de360
     * @note[short] iOS: 0x2eefc
     * @note[short] Android
     */
    virtual void rateLevelClosed();

    /**
     * @note[short] MacOS (ARM): 0x260154
     * @note[short] MacOS (Intel): 0x2c0be0
     * @note[short] Windows: 0x2de5e0
     * @note[short] iOS: 0x31428
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x26028c
     * @note[short] MacOS (Intel): 0x2c0cf0
     * @note[short] Windows: 0x2dfdb0
     * @note[short] iOS: 0x314a0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x25e098
     * @note[short] MacOS (Intel): 0x2be9d0
     * @note[short] Windows: 0x2d9d60
     * @note[short] iOS: 0x2faec
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
    bool m_isBusy;
    cocos2d::CCMenu* m_playBtnMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_coins;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_starRateBtn;
    CCMenuItemSpriteExtra* m_demonRateBtn;
    void* m_unk2;
    cocos2d::CCLabelBMFont* m_lengthLabel;
    cocos2d::CCLabelBMFont* m_exactLengthLabel;
    cocos2d::CCLabelBMFont* m_downloadsLabel;
    cocos2d::CCLabelBMFont* m_likesLabel;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_folderLabel;
    CCMenuItemSpriteExtra* m_cloneBtn;
    void* m_unk3;
    cocos2d::CCSprite* m_likesIcon;
    cocos2d::CCSprite* m_orbsIcon;
    int m_unk6;
    int m_unk7;
    LoadingCircle* m_circle;
    GJDifficultySprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsIcon;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCArray* m_icons;
    GEODE_PAD(16);
    bool m_challenge;
    GEODE_PAD(8);
    cocos2d::CCSprite* m_playSprite;
    cocos2d::CCProgressTimer* m_progressTimer;
    CustomSongWidget* m_songWidget;
};
