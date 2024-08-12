#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SliderTouchLogic.hpp"

class Slider : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "Slider";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(Slider, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x296e54
     * @note[short] MacOS (Intel): 0x303500
     * @note[short] Windows: 0x70230
     * @note[short] iOS: 0x2ff908
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);

    /**
     * @note[short] MacOS (ARM): 0x296c3c
     * @note[short] MacOS (Intel): 0x3032c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler);

    /**
     * @note[short] MacOS (ARM): 0x296d40
     * @note[short] MacOS (Intel): 0x3033e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, float scale);
    
private:
    [[deprecated("Slider::disableSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableSlider();
public:
    
private:
    [[deprecated("Slider::disableTouch not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x297408
     * @note[short] MacOS (Intel): 0x303b10
     * @note[short] Android
     */
    void disableTouch();
public:
    
private:
    [[deprecated("Slider::enableSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableSlider();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool getLiveDragging();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    SliderThumb* getThumb();
    
private:
    [[deprecated("Slider::getValue not implemented")]]
    /**
     * @note[short] Android
     */
    float getValue();
public:
    
private:
    [[deprecated("Slider::hideGroove not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideGroove(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x296f64
     * @note[short] MacOS (Intel): 0x303620
     * @note[short] Windows: 0x70360
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);
    
private:
    [[deprecated("Slider::setBarVisibility not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2974b4
     * @note[short] MacOS (Intel): 0x303c00
     * @note[short] iOS: 0x2ffdc8
     * @note[short] Android
     */
    void setBarVisibility(bool p0);
public:
    
private:
    [[deprecated("Slider::setLiveDragging not implemented")]]
    /**
     * @note[short] Android
     */
    void setLiveDragging(bool p0);
public:
    
private:
    [[deprecated("Slider::setMaxOffset not implemented")]]
    /**
     * @note[short] Android
     */
    void setMaxOffset(float p0);
public:
    
private:
    [[deprecated("Slider::setRotated not implemented")]]
    /**
     * @note[short] Android
     */
    void setRotated(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x29727c
     * @note[short] MacOS (Intel): 0x303960
     * @note[short] Windows: 0x70710
     * @note[short] iOS: 0x2ffccc
     * @note[short] Android
     */
    void setValue(float val);
    
private:
    [[deprecated("Slider::sliderBegan not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderBegan();
public:
    
private:
    [[deprecated("Slider::sliderEnded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderEnded();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ff85c
     * @note[short] Android: Out of line
     */
    void updateBar();

    /**
     * @note[short] MacOS (ARM): 0x2974dc
     * @note[short] MacOS (Intel): 0x303c60
     * @note[short] Windows: 0x70820
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x29751c
     * @note[short] MacOS (Intel): 0x303ce0
     * @note[short] Windows: 0x70860
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2974fc
     * @note[short] MacOS (Intel): 0x303ca0
     * @note[short] Windows: 0x70840
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    SliderTouchLogic* m_touchLogic;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_groove;
    float m_width;
    float m_height;
    void* m_unknown;
    void* m_unknown2;
};
