#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FLAlertLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "FLAlertLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FLAlertLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x4080c8
     * @note[short] MacOS (Intel): 0x4a49c0
     * @note[short] Windows: 0x50960
     * @note[short] iOS: 0x2bbd80
     * @note[short] Android
     */
     ~FLAlertLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FLAlertLayer();

    /**
     * @note[short] MacOS (ARM): 0x4083e8
     * @note[short] MacOS (Intel): 0x4a4da0
     * @note[short] Windows: 0x50ac0
     * @note[short] iOS: 0x2bbef8
     * @note[short] Android
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale);

    /**
     * @note[short] MacOS (ARM): 0x4085d8
     * @note[short] MacOS (Intel): 0x4a4fd0
     * @note[short] Windows: 0x50a10
     * @note[short] iOS: 0x2bc020
     * @note[short] Android
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width);

    /**
     * @note[short] MacOS (ARM): 0x4082d0
     * @note[short] MacOS (Intel): 0x4a4c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2bbe38
     * @note[short] Android
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FLAlertLayer* create(char const* title, const gd::string& desc, char const* btn);
    
private:
    [[deprecated("FLAlertLayer::incrementForcePrio not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x409224
     * @note[short] MacOS (Intel): 0x4a5d10
     * @note[short] iOS: 0x2bcb0c
     * @note[short] Android
     */
    void incrementForcePrio();
public:

    /**
     * @note[short] MacOS (ARM): 0x4086f8
     * @note[short] MacOS (Intel): 0x4a50e0
     * @note[short] Windows: 0x50ce0
     * @note[short] iOS: 0x2bc0e8
     * @note[short] Android
     */
    bool init(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7, float p8);

    /**
     * @note[short] MacOS (ARM): 0x409150
     * @note[short] MacOS (Intel): 0x4a5c40
     * @note[short] Windows: 0x50bd0
     * @note[short] iOS: 0x2bca5c
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x409274
     * @note[short] MacOS (Intel): 0x4a5d60
     * @note[short] Windows: 0x51ac0
     * @note[short] iOS: 0x2bcb5c
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4092d4
     * @note[short] MacOS (Intel): 0x4a5dc0
     * @note[short] Windows: 0x51b20
     * @note[short] iOS: 0x2bcbbc
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4094f8
     * @note[short] MacOS (Intel): 0x4a5ff0
     * @note[short] Windows: 0x51b80
     * @note[short] iOS: 0x2bccb0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4097a8
     * @note[short] MacOS (Intel): 0x4a6230
     * @note[short] Windows: 0x51cd0
     * @note[short] iOS: 0x2bcea0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x409658
     * @note[short] MacOS (Intel): 0x4a6110
     * @note[short] Windows: 0x51c20
     * @note[short] iOS: 0x2bcd68
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x409718
     * @note[short] MacOS (Intel): 0x4a61b0
     * @note[short] Windows: 0x51c90
     * @note[short] iOS: 0x2bce28
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4099dc
     * @note[short] MacOS (Intel): 0x4a6460
     * @note[short] Windows: 0x51ee0
     * @note[short] iOS: 0x2bd0a0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x4093d0
     * @note[short] MacOS (Intel): 0x4a5ed0
     * @note[short] Windows: 0x51a00
     * @note[short] iOS: 0x2bcc4c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x409334
     * @note[short] MacOS (Intel): 0x4a5e20
     * @note[short] Windows: 0x51980
     * @note[short] iOS: 0x2bcc1c
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x409838
     * @note[short] MacOS (Intel): 0x4a62b0
     * @note[short] Windows: 0x51d10
     * @note[short] iOS: 0x2bcf18
     * @note[short] Android
     */
    virtual void show();
    cocos2d::CCMenu* m_buttonMenu;
    FLAlertLayerProtocol* m_alertProtocol;
    cocos2d::CCNode* m_scene;
    bool m_reverseKeyBack;
    cocos2d::ccColor3B m_color;
    cocos2d::CCLayer* m_mainLayer;
    int m_ZOrder;
    bool m_noElasticity;
    cocos2d::ccColor3B m_color2;
    ButtonSprite* m_button1;
    ButtonSprite* m_button2;
    ScrollingLayer* m_scrollingLayer;
    int m_controlConnected;
    bool m_containsBorder;
    bool m_noAction;
    int m_joystickConnected;
    bool m_forcePrioRegistered;
};
