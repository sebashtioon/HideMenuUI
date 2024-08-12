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
#include "GameRateDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class FollowRewardPage : public FLAlertLayer, public FLAlertLayerProtocol, public GameRateDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "FollowRewardPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FollowRewardPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x39bfcc
     * @note[short] MacOS (Intel): 0x4283d0
     * @note[short] Windows: 0x135ab0
     * @note[short] Android
     */
    static FollowRewardPage* create();

    /**
     * @note[short] MacOS (ARM): 0x39cfd8
     * @note[short] MacOS (Intel): 0x429630
     * @note[short] Windows: 0x82fc0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("FollowRewardPage::onRewardedVideo not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x39da94
     * @note[short] MacOS (Intel): 0x42a170
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x39d014
     * @note[short] MacOS (Intel): 0x429660
     * @note[short] Windows: 0x137a40
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39d668
     * @note[short] MacOS (Intel): 0x429d50
     * @note[short] Windows: 0x138be0
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* p0);

    /**
     * @note[short] MacOS (ARM): 0x39c0dc
     * @note[short] MacOS (Intel): 0x428540
     * @note[short] Windows: 0x135bd0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x39e0c0
     * @note[short] MacOS (Intel): 0x42a7f0
     * @note[short] Windows: 0x41750
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x39e044
     * @note[short] MacOS (Intel): 0x42a780
     * @note[short] Windows: 0x82ff0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x39de2c
     * @note[short] MacOS (Intel): 0x42a550
     * @note[short] Windows: 0x84fb0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x39dfb0
     * @note[short] MacOS (Intel): 0x42a6d0
     * @note[short] Windows: 0x138cc0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x39de1c
     * @note[short] MacOS (Intel): 0x42a530
     * @note[short] Windows: 0x137a30
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x39d754
     * @note[short] MacOS (Intel): 0x429e20
     * @note[short] Windows: 0x137640
     * @note[short] Android
     */
    virtual void updateRate();
    cocos2d::CCArray* m_chests;
    bool m_videoPlaying;
};
