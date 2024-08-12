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

class LevelPage : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelPage, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelPage();

    /**
     * @note[short] MacOS (ARM): 0x3aea48
     * @note[short] MacOS (Intel): 0x43c580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40ac08
     * @note[short] Android
     */
    static LevelPage* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x3b0314
     * @note[short] MacOS (Intel): 0x43dde0
     * @note[short] Windows: 0x2fbe20
     * @note[short] Android
     */
    void addSecretCoin();

    /**
     * @note[short] MacOS (ARM): 0x3b2564
     * @note[short] MacOS (Intel): 0x440360
     * @note[short] Windows: 0x2fc530
     * @note[short] Android
     */
    void addSecretDoor();

    /**
     * @note[short] MacOS (ARM): 0x3b145c
     * @note[short] MacOS (Intel): 0x43f130
     * @note[short] Windows: 0x2f9570
     * @note[short] iOS: 0x40c8e4
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x3b0e74
     * @note[short] MacOS (Intel): 0x43ea10
     * @note[short] Windows: 0x2fd820
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelPage::onMoreGames not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3b26d0
     * @note[short] MacOS (Intel): 0x4404d0
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x3b0b5c
     * @note[short] MacOS (Intel): 0x43e730
     * @note[short] Windows: 0x2fd2e0
     * @note[short] iOS: 0x40c32c
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b2b7c
     * @note[short] MacOS (Intel): 0x440980
     * @note[short] Windows: 0x2fc740
     * @note[short] Android
     */
    void onSecretDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b2018
     * @note[short] MacOS (Intel): 0x43fdc0
     * @note[short] Windows: 0x2fb760
     * @note[short] Android
     */
    void onTheTower(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3b2734
     * @note[short] MacOS (Intel): 0x440530
     * @note[short] Windows: 0x2fc060
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x3b33a4
     * @note[short] MacOS (Intel): 0x4412a0
     * @note[short] Windows: 0x2fd640
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x3b3464
     * @note[short] MacOS (Intel): 0x441360
     * @note[short] Windows: 0x2fd720
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x3aecd4
     * @note[short] MacOS (Intel): 0x43c820
     * @note[short] Windows: 0x2fa200
     * @note[short] iOS: 0x40ae0c
     * @note[short] Android
     */
    void updateDynamicPage(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x3b3518
     * @note[short] MacOS (Intel): 0x441430
     * @note[short] Windows: 0x2fdcc0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3b3630
     * @note[short] MacOS (Intel): 0x441590
     * @note[short] Windows: 0x6fd20
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3b364c
     * @note[short] MacOS (Intel): 0x4415d0
     * @note[short] Windows: 0x99990
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3b3254
     * @note[short] MacOS (Intel): 0x441180
     * @note[short] Windows: 0x2fd200
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
    bool m_isBusy;
    GJGameLevel* m_level;
    cocos2d::CCMenu* m_levelMenu;
    cocos2d::extension::CCScale9Sprite* m_levelDisplay;
    cocos2d::CCLabelBMFont* m_normalProgressLabel;
    cocos2d::CCLabelBMFont* m_practiceProgressLabel;
    cocos2d::CCLabelBMFont* m_nameLabel;
    cocos2d::CCLabelBMFont* m_starsLabel;
    float m_progressWidth;
    cocos2d::CCSprite* m_normalProgressBar;
    cocos2d::CCSprite* m_practiceProgressBar;
    cocos2d::CCSprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSize m_levelDisplaySize;
    cocos2d::CCArray* m_coins;
    cocos2d::CCArray* m_dynamicObjects;
    cocos2d::CCArray* m_levelObjects;
    cocos2d::CCArray* m_progressObjects;
    GameObject* m_coinObject;
    cocos2d::CCSprite* m_secretDoor;
};
