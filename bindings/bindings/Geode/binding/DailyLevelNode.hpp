#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"

class DailyLevelNode : public cocos2d::CCNode, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DailyLevelNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DailyLevelNode, cocos2d::CCNode)
    
private:
    [[deprecated("DailyLevelNode::create not implemented")]]
    /**
     * @note[short] Android
     */
    static DailyLevelNode* create(GJGameLevel* p0, DailyLevelPage* p1, bool p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x1dba2c
     * @note[short] MacOS (Intel): 0x22e0c0
     * @note[short] Windows: 0xcea30
     * @note[short] iOS: 0x1c59c0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, DailyLevelPage* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x1dc504
     * @note[short] MacOS (Intel): 0x22eb10
     * @note[short] Windows: 0xcf660
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcf780
     * @note[short] Android
     */
    void onSkipLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcf600
     * @note[short] Android
     */
    void showSkipButton();
    
private:
    [[deprecated("DailyLevelNode::updateTimeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateTimeLabel(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1dc7fc
     * @note[short] MacOS (Intel): 0x22edd0
     * @note[short] Windows: 0xcf9a0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    GJGameLevel* m_level;
    DailyLevelPage* m_page;
    cocos2d::CCLabelBMFont* m_timeLabel;
    GEODE_PAD(8);
    CCMenuItemSpriteExtra* m_skipButton;
    bool m_unkBool;
    bool m_needsDownloading;
};
