#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemToggler : public cocos2d::CCMenuItem {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemToggler";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemToggler, cocos2d::CCMenuItem)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCMenuItemToggler();

    /**
     * @note[short] MacOS (ARM): 0x50d28
     * @note[short] MacOS (Intel): 0x5a6b0
     * @note[short] Windows: 0x44360
     * @note[short] iOS: 0x19cbf4
     * @note[short] Android
     */
    static CCMenuItemToggler* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemToggler* createWithSize(const char* spr1, const char* spr2, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCMenuItemToggler* createWithStandardSprites(cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);
    
private:
    [[deprecated("CCMenuItemToggler::activeItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activeItem();
public:

    /**
     * @note[short] MacOS (ARM): 0x50e0c
     * @note[short] MacOS (Intel): 0x5a780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x19ccc4
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* off, cocos2d::CCNode* on, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    /**
     * @note[short] Windows: 0x44700
     * @note[short] iOS: 0x19ce74
     * @note[short] Android
     */
    void normalTouch(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x44720
     * @note[short] iOS: 0x19ce88
     * @note[short] Android
     */
    void selectedTouch(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x51318
     * @note[short] MacOS (Intel): 0x5ac30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setSizeMult(float mult);

    /**
     * @note[short] MacOS (ARM): 0x51240
     * @note[short] MacOS (Intel): 0x5ab60
     * @note[short] Windows: 0x44740
     * @note[short] iOS: 0x19ce9c
     * @note[short] Android
     */
    void toggle(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isToggled();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isOn();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setClickable(bool on);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void toggleWithCallback(bool on);

    /**
     * @note[short] MacOS (ARM): 0x5146c
     * @note[short] MacOS (Intel): 0x5ad70
     * @note[short] Windows: 0x44610
     * @note[short] iOS: 0x19d014
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x5142c
     * @note[short] MacOS (Intel): 0x5ad40
     * @note[short] Windows: 0x445c0
     * @note[short] iOS: 0x19cfd4
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] MacOS (ARM): 0x514ac
     * @note[short] MacOS (Intel): 0x5ada0
     * @note[short] Windows: 0x44660
     * @note[short] iOS: 0x19d054
     * @note[short] Android
     */
    virtual void unselected();

    /**
     * @note[short] MacOS (ARM): 0x514ec
     * @note[short] MacOS (Intel): 0x5add0
     * @note[short] Windows: 0x446b0
     * @note[short] iOS: 0x19cfd4
     * @note[short] Android
     */
    virtual void setEnabled(bool p0);

    /**
Update the sizing of this toggle's image

 If you for example have a `ButtonSprite` on this toggle and change the

 text, you need to call `updateSprite` afterwards to fix the toggle's

 content size

 @note Geode additi     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateSprite();
    CCMenuItemSpriteExtra* m_offButton;
    CCMenuItemSpriteExtra* m_onButton;
    bool m_toggled;
    bool m_notClickable;
};
