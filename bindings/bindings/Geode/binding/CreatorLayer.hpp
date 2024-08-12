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

class CreatorLayer : public cocos2d::CCLayer, public cocos2d::CCSceneTransitionDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CreatorLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CreatorLayer();

    /**
     * @note[short] MacOS (ARM): 0x236598
     * @note[short] MacOS (Intel): 0x2933e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb7504
     * @note[short] Android
     */
    static CreatorLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x2364b4
     * @note[short] MacOS (Intel): 0x2932c0
     * @note[short] Windows: 0x9a190
     * @note[short] iOS: 0xb74ac
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();
    
private:
    [[deprecated("CreatorLayer::canPlayOnlineLevels not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2389d8
     * @note[short] MacOS (Intel): 0x295a00
     * @note[short] Android
     */
    bool canPlayOnlineLevels();
public:

    /**
     * @note[short] MacOS (ARM): 0x237fec
     * @note[short] MacOS (Intel): 0x294fc0
     * @note[short] Windows: 0x9d810
     * @note[short] iOS: 0xb8a08
     * @note[short] Android
     */
    void checkQuestsStatus();

    /**
     * @note[short] MacOS (ARM): 0x237864
     * @note[short] MacOS (Intel): 0x294840
     * @note[short] Windows: 0x9c3a0
     * @note[short] Android
     */
    void onAdventureMap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238978
     * @note[short] MacOS (Intel): 0x2959a0
     * @note[short] Windows: 0x9d9c0
     * @note[short] iOS: 0xb90d0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2378f4
     * @note[short] MacOS (Intel): 0x2948b0
     * @note[short] Windows: 0x9c770
     * @note[short] Android
     */
    void onChallenge(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23792c
     * @note[short] MacOS (Intel): 0x2948e0
     * @note[short] Windows: 0x9c510
     * @note[short] Android
     */
    void onDailyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23796c
     * @note[short] MacOS (Intel): 0x294920
     * @note[short] Windows: 0x9c550
     * @note[short] Android
     */
    void onEventLevel(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreatorLayer::onFameLevels not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2389e0
     * @note[short] MacOS (Intel): 0x295a10
     * @note[short] Android
     */
    void onFameLevels(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x237b5c
     * @note[short] MacOS (Intel): 0x294b10
     * @note[short] Windows: 0x9ba60
     * @note[short] Android
     */
    void onFeaturedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x237b14
     * @note[short] MacOS (Intel): 0x294ac0
     * @note[short] Windows: 0x9bd50
     * @note[short] Android
     */
    void onGauntlets(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2373bc
     * @note[short] MacOS (Intel): 0x2943c0
     * @note[short] Windows: 0x9b8b0
     * @note[short] Android
     */
    void onLeaderboards(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x237c24
     * @note[short] MacOS (Intel): 0x294bf0
     * @note[short] Windows: 0x9bc90
     * @note[short] Android
     */
    void onMapPacks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2373f8
     * @note[short] MacOS (Intel): 0x294400
     * @note[short] Windows: 0x9bdd0
     * @note[short] Android
     */
    void onMultiplayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x237cac
     * @note[short] MacOS (Intel): 0x294c90
     * @note[short] Windows: 0x9b4a0
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x237c70
     * @note[short] MacOS (Intel): 0x294c50
     * @note[short] Windows: 0x9bc10
     * @note[short] Android
     */
    void onOnlineLevels(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreatorLayer::onOnlyFullVersion not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x237d74
     * @note[short] MacOS (Intel): 0x294d70
     * @note[short] Android
     */
    void onOnlyFullVersion(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x237ba8
     * @note[short] MacOS (Intel): 0x294b70
     * @note[short] Windows: 0x9bb20
     * @note[short] Android
     */
    void onPaths(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2372fc
     * @note[short] MacOS (Intel): 0x2942f0
     * @note[short] Windows: 0x9b6b0
     * @note[short] Android
     */
    void onSavedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2380e8
     * @note[short] MacOS (Intel): 0x2950c0
     * @note[short] Windows: 0x9c8e0
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x237bc4
     * @note[short] MacOS (Intel): 0x294b90
     * @note[short] Windows: 0x9bb40
     * @note[short] Android
     */
    void onTopLists(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238398
     * @note[short] MacOS (Intel): 0x295340
     * @note[short] Windows: 0x9cfc0
     * @note[short] iOS: 0xb8cbc
     * @note[short] Android
     */
    void onTreasureRoom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23794c
     * @note[short] MacOS (Intel): 0x294900
     * @note[short] Windows: 0x9c530
     * @note[short] Android
     */
    void onWeeklyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x236654
     * @note[short] MacOS (Intel): 0x2934c0
     * @note[short] Windows: 0x9a300
     * @note[short] iOS: 0xb75b4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x238b9c
     * @note[short] MacOS (Intel): 0x295bf0
     * @note[short] Windows: 0x9dae0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x238b2c
     * @note[short] MacOS (Intel): 0x295b70
     * @note[short] Windows: 0x9da20
     * @note[short] Android
     */
    virtual void sceneWillResume();

    /**
     * @note[short] MacOS (ARM): 0x238a2c
     * @note[short] MacOS (Intel): 0x295a70
     * @note[short] Windows: 0x9d900
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
    cocos2d::CCSprite* m_secretDoorSprite;
    cocos2d::CCSprite* m_questsSprite;
    int m_vaultDialogIndex;
    int m_versusDialogIndex;
};
