#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRotationControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJRotationControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRotationControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJRotationControl();

    /**
     * @note[short] MacOS (ARM): 0xdca8
     * @note[short] MacOS (Intel): 0xbcc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cfa48
     * @note[short] Android
     */
    static GJRotationControl* create();

    /**
     * @note[short] MacOS (ARM): 0xdd84
     * @note[short] MacOS (Intel): 0xbdb0
     * @note[short] Windows: 0x125490
     * @note[short] Android
     */
    void finishTouch();
    
private:
    [[deprecated("GJRotationControl::setAngle not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x49ea4
     * @note[short] MacOS (Intel): 0x520d0
     * @note[short] Android
     */
    void setAngle(float p0);
public:
    
private:
    [[deprecated("GJRotationControl::updateSliderPosition not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x49f24
     * @note[short] MacOS (Intel): 0x52150
     * @note[short] Android
     */
    void updateSliderPosition(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x49db0
     * @note[short] MacOS (Intel): 0x51fe0
     * @note[short] Windows: 0x125370
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4a378
     * @note[short] MacOS (Intel): 0x525e0
     * @note[short] Windows: 0x1257d0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x4a014
     * @note[short] MacOS (Intel): 0x52250
     * @note[short] Windows: 0x125510
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4a128
     * @note[short] MacOS (Intel): 0x52370
     * @note[short] Windows: 0x125610
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4a264
     * @note[short] MacOS (Intel): 0x524d0
     * @note[short] Windows: 0x1257b0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4a35c
     * @note[short] MacOS (Intel): 0x525a0
     * @note[short] Windows: 0x6fd20
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    cocos2d::CCPoint m_cursorDifference;
    cocos2d::CCPoint m_controlPosition;
    cocos2d::CCSprite* m_controlSprite;
    float m_startingRotation;
    float m_currentRotation;
    int m_touchID;
    GJRotationControlDelegate* m_delegate;
};
