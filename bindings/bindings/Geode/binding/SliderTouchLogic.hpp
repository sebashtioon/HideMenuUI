#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SliderThumb.hpp"

class SliderTouchLogic : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "SliderTouchLogic";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderTouchLogic, cocos2d::CCMenu)
    
private:
    [[deprecated("SliderTouchLogic::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SliderTouchLogic* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, float p4);
public:
    
private:
    [[deprecated("SliderTouchLogic::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, float p4);
public:
    
private:
    [[deprecated("SliderTouchLogic::setMaxOffset not implemented")]]
    /**
     * @note[short] Android
     */
    void setMaxOffset(float p0);
public:
    
private:
    [[deprecated("SliderTouchLogic::setRotated not implemented")]]
    /**
     * @note[short] Android
     */
    void setRotated(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x29676c
     * @note[short] MacOS (Intel): 0x302d40
     * @note[short] Windows: 0x6ffc0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x296980
     * @note[short] MacOS (Intel): 0x302f70
     * @note[short] Windows: 0x700b0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2968d0
     * @note[short] MacOS (Intel): 0x302eb0
     * @note[short] Windows: 0x70070
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("SliderTouchLogic::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x296c04
     * @note[short] MacOS (Intel): 0x303280
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    float m_unknownUnused;
    float m_length;
    SliderThumb* m_thumb;
    Slider* m_slider;
    bool m_activateThumb;
    cocos2d::CCPoint m_position;
    bool m_rotated;
};
