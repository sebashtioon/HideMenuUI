#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"
#include "BoomScrollLayerDelegate.hpp"

class SecretRewardsLayer : public cocos2d::CCLayer, public DialogDelegate, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretRewardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretRewardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ff01c
     * @note[short] Android: Out of line
     */
     SecretRewardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x55c6f4
     * @note[short] MacOS (Intel): 0x63cf00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8c5c
     * @note[short] Android
     */
    static SecretRewardsLayer* create(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x55c6a8
     * @note[short] MacOS (Intel): 0x63cec0
     * @note[short] Windows: 0x3ae160
     * @note[short] iOS: 0x2f8c10
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x55f2b0
     * @note[short] MacOS (Intel): 0x63fc70
     * @note[short] Windows: 0x3b0720
     * @note[short] iOS: 0x2fadf4
     * @note[short] Android
     */
    void createSecondaryLayer(int p0);

    /**
     * @note[short] MacOS (ARM): 0x55f6ec
     * @note[short] MacOS (Intel): 0x640100
     * @note[short] Windows: 0x3b0b70
     * @note[short] iOS: 0x2fb19c
     * @note[short] Android
     */
    cocos2d::CCArray* generateChestItems(int p0);
    
private:
    [[deprecated("SecretRewardsLayer::getPageColor not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x55e820
     * @note[short] MacOS (Intel): 0x63f1b0
     * @note[short] Android
     */
    cocos2d::ccColor3B getPageColor(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x55e690
     * @note[short] MacOS (Intel): 0x63f060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fa67c
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x55c7dc
     * @note[short] MacOS (Intel): 0x63d020
     * @note[short] Windows: 0x3ae2c0
     * @note[short] iOS: 0x2f8cd0
     * @note[short] Android
     */
    bool init(bool p0);
    
private:
    [[deprecated("SecretRewardsLayer::moveToMainLayer not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x55f180
     * @note[short] MacOS (Intel): 0x63fb20
     * @note[short] iOS: 0x2facd4
     * @note[short] Android
     */
    void moveToMainLayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::moveToSecondaryLayer not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x55ec98
     * @note[short] MacOS (Intel): 0x63f650
     * @note[short] iOS: 0x2faabc
     * @note[short] Android
     */
    void moveToSecondaryLayer(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x55e0ec
     * @note[short] MacOS (Intel): 0x63eae0
     * @note[short] Windows: 0x3b24f0
     * @note[short] iOS: 0x2fa1d8
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55e158
     * @note[short] MacOS (Intel): 0x63eb50
     * @note[short] Windows: 0x3b0490
     * @note[short] iOS: 0x2fa244
     * @note[short] Android
     */
    void onChestType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5603c4
     * @note[short] MacOS (Intel): 0x640fc0
     * @note[short] Windows: 0x3b1520
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55e4bc
     * @note[short] MacOS (Intel): 0x63ee90
     * @note[short] Windows: 0x3b19e0
     * @note[short] iOS: 0x2fa52c
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55e850
     * @note[short] MacOS (Intel): 0x63f200
     * @note[short] Windows: 0x3b1de0
     * @note[short] iOS: 0x2fa80c
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55e600
     * @note[short] MacOS (Intel): 0x63efe0
     * @note[short] Windows: 0x3b01a0
     * @note[short] iOS: 0x2fa624
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5607b4
     * @note[short] MacOS (Intel): 0x641370
     * @note[short] Windows: 0x3b2720
     * @note[short] Android
     */
    void showDialog01();

    /**
     * @note[short] MacOS (ARM): 0x561f70
     * @note[short] MacOS (Intel): 0x643050
     * @note[short] Windows: 0x3b4030
     * @note[short] Android
     */
    void showDialog03();

    /**
     * @note[short] MacOS (ARM): 0x564250
     * @note[short] MacOS (Intel): 0x645b50
     * @note[short] Windows: 0x3b6530
     * @note[short] Android
     */
    void showDialogDiamond();

    /**
     * @note[short] MacOS (ARM): 0x5630f8
     * @note[short] MacOS (Intel): 0x6445c0
     * @note[short] Windows: 0x3b52d0
     * @note[short] Android
     */
    void showDialogMechanic();
    
private:
    [[deprecated("SecretRewardsLayer::showLockedChest not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x55ed90
     * @note[short] MacOS (Intel): 0x63f770
     * @note[short] Android
     */
    void showLockedChest();
public:

    /**
     * @note[short] MacOS (ARM): 0x564d38
     * @note[short] MacOS (Intel): 0x646860
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showShop(int shop);

    /**
     * @note[short] MacOS (ARM): 0x55e1ac
     * @note[short] MacOS (Intel): 0x63eb90
     * @note[short] Windows: 0x3b2120
     * @note[short] iOS: 0x2fa298
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* p0);

    /**
     * @note[short] MacOS (ARM): 0x55f054
     * @note[short] MacOS (Intel): 0x63fa10
     * @note[short] Windows: 0x3b05e0
     * @note[short] iOS: 0x2fabb4
     * @note[short] Android
     */
    void updateBackButton();

    /**
     * @note[short] MacOS (ARM): 0x55e294
     * @note[short] MacOS (Intel): 0x63ec60
     * @note[short] Windows: 0x3b2200
     * @note[short] iOS: 0x2fa380
     * @note[short] Android
     */
    void updateUnlockedLabel();

    /**
     * @note[short] MacOS (ARM): 0x564f80
     * @note[short] MacOS (Intel): 0x646ab0
     * @note[short] Windows: 0x3b26e0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x564f0c
     * @note[short] MacOS (Intel): 0x646a20
     * @note[short] Windows: 0x3b26d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x564da8
     * @note[short] MacOS (Intel): 0x6468d0
     * @note[short] Windows: 0x3b1bf0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x55e6e4
     * @note[short] MacOS (Intel): 0x63f0a0
     * @note[short] Windows: 0x3b0260
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCLayer* m_secondaryLayer;
    cocos2d::CCLabelBMFont* m_chestLabel;
    cocos2d::CCLabelBMFont* m_chestCounter;
    cocos2d::CCDictionary* m_chestCounters;
    cocos2d::CCLabelBMFont* m_keysLabel;
    void* m_unknown;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    cocos2d::CCSprite* m_backSprite;
    int m_unkSize4_1;
    int m_unkSize4_2;
    BoomScrollLayer* m_mainScrollLayer;
    BoomScrollLayer* m_secondaryScrollLayer;
    cocos2d::CCSprite* m_backgroundSprite;
    int m_scratchDialogIndex;
    int m_potborDialogIndex;
    int m_diamondDialogIndex;
    int m_mechanicDialogIndex;
    bool m_inMainLayer;
    GJRewardType m_rewardType;
    int m_lockedDialogIndex;
};
