#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "GJDailyLevelDelegate.hpp"
#include "LevelDownloadDelegate.hpp"

class DailyLevelPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJDailyLevelDelegate, public LevelDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "DailyLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DailyLevelPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1d91d8
     * @note[short] MacOS (Intel): 0x22ba40
     * @note[short] Windows: 0xcb380
     * @note[short] iOS: 0x1c3b7c
     * @note[short] Android
     */
    static DailyLevelPage* create(GJTimedLevelType p0);

    /**
     * @note[short] MacOS (ARM): 0x1db618
     * @note[short] MacOS (Intel): 0x22dca0
     * @note[short] Windows: 0xce4c0
     * @note[short] Android
     */
    void claimLevelReward(DailyLevelNode* p0, GJGameLevel* p1, cocos2d::CCPoint p2);

    /**
     * @note[short] MacOS (ARM): 0x1da8ac
     * @note[short] MacOS (Intel): 0x22cee0
     * @note[short] Windows: 0xcd130
     * @note[short] Android
     */
    void createDailyNode(GJGameLevel* p0, bool p1, float p2, bool p3);
    
private:
    [[deprecated("DailyLevelPage::createNodeIfLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    void createNodeIfLoaded();
public:
    
private:
    [[deprecated("DailyLevelPage::downloadAndCreateNode not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadAndCreateNode();
public:
    
private:
    [[deprecated("DailyLevelPage::exitDailyNode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1dace0
     * @note[short] MacOS (Intel): 0x22d350
     * @note[short] Android
     */
    void exitDailyNode(DailyLevelNode* p0, float p1);
public:
    
private:
    [[deprecated("DailyLevelPage::getDailyTime not implemented")]]
    /**
     * @note[short] Android
     */
    int getDailyTime();
public:

    /**
     * @note[short] MacOS (ARM): 0x1da2b0
     * @note[short] MacOS (Intel): 0x22c8a0
     * @note[short] Windows: 0xcd4f0
     * @note[short] Android
     */
    gd::string getDailyTimeString(int timeLeft);

    /**
     * @note[short] MacOS (ARM): 0x1d930c
     * @note[short] MacOS (Intel): 0x22bbd0
     * @note[short] Windows: 0xcb4c0
     * @note[short] iOS: 0x1c3bf0
     * @note[short] Android
     */
    bool init(GJTimedLevelType p0);

    /**
     * @note[short] MacOS (ARM): 0x1da208
     * @note[short] MacOS (Intel): 0x22c800
     * @note[short] Windows: 0x85150
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1da254
     * @note[short] MacOS (Intel): 0x22c840
     * @note[short] Windows: 0xce960
     * @note[short] Android
     */
    void onTheSafe(cocos2d::CCObject* sender);
    
private:
    [[deprecated("DailyLevelPage::refreshDailyPage not implemented")]]
    /**
     * @note[short] Android
     */
    void refreshDailyPage();
public:
    
private:
    [[deprecated("DailyLevelPage::skipDailyLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void skipDailyLevel(DailyLevelNode* p0, GJGameLevel* p1);
public:

    /**
     * @note[short] Windows: 0xccf00
     * @note[short] Android
     */
    void tryGetDailyStatus();

    /**
     * @note[short] MacOS (ARM): 0x1da604
     * @note[short] MacOS (Intel): 0x22cc30
     * @note[short] Windows: 0xce170
     * @note[short] Android
     */
    void updateTimers(float p0);
    
private:
    [[deprecated("DailyLevelPage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1db5e0
     * @note[short] MacOS (Intel): 0x22dc60
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("DailyLevelPage::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1db544
     * @note[short] MacOS (Intel): 0x22dbd0
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] MacOS (ARM): 0x1db3b8
     * @note[short] MacOS (Intel): 0x22da30
     * @note[short] Windows: 0xccb90
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1daa90
     * @note[short] MacOS (Intel): 0x22d0d0
     * @note[short] Windows: 0xcc8d0
     * @note[short] Android
     */
    virtual void dailyStatusFinished(GJTimedLevelType p0);

    /**
     * @note[short] MacOS (ARM): 0x1dae7c
     * @note[short] MacOS (Intel): 0x22d510
     * @note[short] Windows: 0xccb90
     * @note[short] Android
     */
    virtual void dailyStatusFailed(GJTimedLevelType p0, GJErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x1db0b8
     * @note[short] MacOS (Intel): 0x22d760
     * @note[short] Windows: 0xcce80
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x1db198
     * @note[short] MacOS (Intel): 0x22d820
     * @note[short] Windows: 0xccee0
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int p0);
    cocos2d::CCLabelBMFont* m_timeLabel;
    LoadingCircle* m_timeCircle;
    LoadingCircle* m_nodeCircle;
    bool m_gettingDailyStatus;
    DailyLevelNode* m_dailyNode;
    bool m_downloadStarted;
    GJTimedLevelType m_type;
    int m_downloadLevelID;
};
