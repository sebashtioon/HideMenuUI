#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCLightStrip : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCLightStrip";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCLightStrip, cocos2d::CCNode)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
     CCLightStrip();

    /**
     * @note[short] MacOS (ARM): 0x465538
     * @note[short] MacOS (Intel): 0x50ea00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCLightStrip* create(float width, float toWidth, float toHeight, float duration, float delay);

    /**
     * @note[short] MacOS (ARM): 0x4659e8
     * @note[short] MacOS (Intel): 0x50eee0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(float width, float toWidth, float toHeight, float duration, float delay);

    /**
     * @note[short] MacOS (ARM): 0x465b00
     * @note[short] MacOS (Intel): 0x50f020
     * @note[short] Windows: 0x42e30
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x465c58
     * @note[short] MacOS (Intel): 0x50f1b0
     * @note[short] Windows: 0x42ff0
     * @note[short] Android
     */
    virtual void updateTweenAction(float value, char const* keyword);
    float m_objectWidth;
    float m_toWidth;
    float m_toHeight;
    float m_duration;
    cocos2d::ccColor4B m_color;
    float m_opacity;
    float m_width;
    float m_height;
};
