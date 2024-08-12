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
#include "CurrencyRewardDelegate.hpp"

class RewardUnlockLayer : public FLAlertLayer, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardUnlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardUnlockLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1c6b60
     * @note[short] MacOS (Intel): 0x215ec0
     * @note[short] Windows: 0x3a9c50
     * @note[short] Android
     */
    static RewardUnlockLayer* create(int p0, RewardsPage* p1);

    /**
     * @note[short] MacOS (ARM): 0x1c8358
     * @note[short] MacOS (Intel): 0x2178f0
     * @note[short] Windows: 0x3aab00
     * @note[short] Android
     */
    void connectionTimeout();

    /**
     * @note[short] MacOS (ARM): 0x1c74a0
     * @note[short] MacOS (Intel): 0x2169a0
     * @note[short] Windows: 0x3a9d80
     * @note[short] Android
     */
    bool init(int p0, RewardsPage* p1);

    /**
     * @note[short] MacOS (ARM): 0x1ca7c4
     * @note[short] MacOS (Intel): 0x219f80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void labelEnterFinishedO(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1c8300
     * @note[short] MacOS (Intel): 0x217890
     * @note[short] Windows: 0x3ad200
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c81a4
     * @note[short] MacOS (Intel): 0x217750
     * @note[short] Windows: 0x3aab60
     * @note[short] Android
     */
    void playDropSound();

    /**
     * @note[short] MacOS (ARM): 0x1ca0d4
     * @note[short] MacOS (Intel): 0x2198a0
     * @note[short] Windows: 0x3ac240
     * @note[short] Android
     */
    void playLabelEffect(int p0, int p1, cocos2d::CCSprite* p2, cocos2d::CCPoint p3, float p4);

    /**
     * @note[short] MacOS (ARM): 0x1c83c0
     * @note[short] MacOS (Intel): 0x217960
     * @note[short] Windows: 0x3aad20
     * @note[short] Android
     */
    void playRewardEffect();

    /**
     * @note[short] MacOS (ARM): 0x1c6e04
     * @note[short] MacOS (Intel): 0x2161d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool readyToCollect(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x1ca74c
     * @note[short] MacOS (Intel): 0x219f00
     * @note[short] Windows: 0x3ac1d0
     * @note[short] Android
     */
    void showCloseButton();

    /**
     * @note[short] MacOS (ARM): 0x1c6e24
     * @note[short] MacOS (Intel): 0x2161f0
     * @note[short] Windows: 0x3aaa40
     * @note[short] Android
     */
    bool showCollectReward(GJRewardItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x1c8230
     * @note[short] MacOS (Intel): 0x2177c0
     * @note[short] Windows: 0x3aac00
     * @note[short] Android
     */
    void step2();

    /**
     * @note[short] MacOS (ARM): 0x1ca0bc
     * @note[short] MacOS (Intel): 0x219880
     * @note[short] Windows: 0x3aad00
     * @note[short] Android
     */
    void step3();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1ca7c8
     * @note[short] MacOS (Intel): 0x219f90
     * @note[short] Windows: 0x3ad1f0
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* p0);
    cocos2d::CCArray* m_backgroundObjects;
    RewardsPage* m_rewardsPage;
    GJChestSprite* m_chestSprite;
    int m_chestType;
    bool m_rewardCollected;
    bool m_animationPlayed;
    GJRewardItem* m_rewardItem;
    cocos2d::CCLabelBMFont* m_wrongLabel;
    CCMenuItemSpriteExtra* m_closeBtn;
    CCMenuItemSpriteExtra* m_rewardBtn;
    float m_unkFloat;
};
