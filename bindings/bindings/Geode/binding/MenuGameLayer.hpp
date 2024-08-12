#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MenuGameLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MenuGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a4d88
     * @note[short] Android: Out of line
     */
     MenuGameLayer();

    /**
     * @note[short] MacOS (ARM): 0x45c1f0
     * @note[short] MacOS (Intel): 0x5044b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a3858
     * @note[short] Android
     */
    static MenuGameLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x45d628
     * @note[short] MacOS (Intel): 0x505ac0
     * @note[short] Windows: 0x3129e0
     * @note[short] Android
     */
    void destroyPlayer();

    /**
     * @note[short] MacOS (ARM): 0x45c6e4
     * @note[short] MacOS (Intel): 0x504a10
     * @note[short] Windows: 0x311340
     * @note[short] Android
     */
    cocos2d::ccColor3B getBGColor(int p0);

    /**
     * @note[short] MacOS (ARM): 0x45cc04
     * @note[short] MacOS (Intel): 0x504f10
     * @note[short] Windows: 0x311db0
     * @note[short] Android
     */
    void resetPlayer();

    /**
     * @note[short] MacOS (ARM): 0x45c7e8
     * @note[short] MacOS (Intel): 0x504ab0
     * @note[short] Windows: 0x311610
     * @note[short] Android
     */
    void tryJump(float p0);

    /**
     * @note[short] MacOS (ARM): 0x45ca58
     * @note[short] MacOS (Intel): 0x504d10
     * @note[short] Windows: 0x3111f0
     * @note[short] Android
     */
    void updateColor(float p0);
    
private:
    [[deprecated("MenuGameLayer::updateColors not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x45d2b8
     * @note[short] MacOS (Intel): 0x5056e0
     * @note[short] Android
     */
    void updateColors();
public:

    /**
     * @note[short] MacOS (ARM): 0x45d330
     * @note[short] MacOS (Intel): 0x505750
     * @note[short] Windows: 0x3118e0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x45c2d0
     * @note[short] MacOS (Intel): 0x5045b0
     * @note[short] Windows: 0x310ac0
     * @note[short] iOS: 0x3a38cc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x45d824
     * @note[short] MacOS (Intel): 0x505cc0
     * @note[short] Windows: 0x312c60
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
     * @note[short] MacOS (ARM): 0x45d94c
     * @note[short] MacOS (Intel): 0x505e20
     * @note[short] Windows: 0x6fd20
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x45d968
     * @note[short] MacOS (Intel): 0x505e60
     * @note[short] Windows: 0x312e10
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
    bool m_videoOptionsOpen;
    float m_deltaCount;
    bool m_isDestroyingPlayer;
    int m_initCount;
    cocos2d::CCPoint m_unused1;
    PlayerObject* m_playerObject;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    float m_backgroundSpeed;
};
