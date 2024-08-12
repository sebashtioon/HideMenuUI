#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SliderThumb : public cocos2d::CCMenuItemImage {
public:
    static constexpr auto CLASS_NAME = "SliderThumb";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderThumb, cocos2d::CCMenuItemImage)
    
private:
    [[deprecated("SliderThumb::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SliderThumb* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3);
public:

    /**
     * @note[short] MacOS (ARM): 0x296090
     * @note[short] MacOS (Intel): 0x3025d0
     * @note[short] Windows: 0x6fdc0
     * @note[short] iOS: 0x2ff24c
     * @note[short] Android
     */
    float getValue();
    
private:
    [[deprecated("SliderThumb::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3);
public:
    
private:
    [[deprecated("SliderThumb::setMaxOffset not implemented")]]
    /**
     * @note[short] Android
     */
    void setMaxOffset(float p0);
public:
    
private:
    [[deprecated("SliderThumb::setRotated not implemented")]]
    /**
     * @note[short] Android
     */
    void setRotated(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x296114
     * @note[short] MacOS (Intel): 0x302670
     * @note[short] Windows: 0x6fe50
     * @note[short] iOS: 0x2ff2d0
     * @note[short] Android
     */
    void setValue(float p0);
    float m_length;
    bool m_vertical;
};
