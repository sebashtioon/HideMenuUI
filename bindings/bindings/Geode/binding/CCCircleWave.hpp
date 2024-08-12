#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCircleWave : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCCircleWave";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCircleWave, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x13cef4
     * @note[short] MacOS (Intel): 0x173740
     * @note[short] Windows: 0x41980
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);

    /**
     * @note[short] MacOS (ARM): 0x13ceec
     * @note[short] MacOS (Intel): 0x173730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x177c18
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn);
    
private:
    [[deprecated("CCCircleWave::baseSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn baseSetup(float p0);
public:
    
private:
    [[deprecated("CCCircleWave::followObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x13d244
     * @note[short] MacOS (Intel): 0x173af0
     * @note[short] Android
     */
    TodoReturn followObject(cocos2d::CCNode* p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x13cfc0
     * @note[short] MacOS (Intel): 0x173820
     * @note[short] Windows: 0x41a30
     * @note[short] Android
     */
    bool init(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);

    /**
     * @note[short] MacOS (ARM): 0x13d1f8
     * @note[short] MacOS (Intel): 0x173ab0
     * @note[short] Windows: 0x41cb0
     * @note[short] Android
     */
    TodoReturn updatePosition(float p0);

    /**
     * @note[short] MacOS (ARM): 0x13d1c4
     * @note[short] MacOS (Intel): 0x173a80
     * @note[short] Windows: 0x41c70
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x13d660
     * @note[short] MacOS (Intel): 0x173f10
     * @note[short] Windows: 0x42080
     * @note[short] Android
     */
    virtual void removeMeAndCleanup();

    /**
     * @note[short] MacOS (ARM): 0x13d528
     * @note[short] MacOS (Intel): 0x173dd0
     * @note[short] Windows: 0x41f50
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x13d2d4
     * @note[short] MacOS (Intel): 0x173b80
     * @note[short] Windows: 0x41cf0
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);
    cocos2d::CCNode* m_target;
    float m_width;
    float m_radius;
    float m_opacity;
    cocos2d::ccColor3B m_color;
    cocos2d::CCPoint m_position;
    CircleMode m_circleMode;
    int m_lineWidth;
    float m_opacityMod;
    bool m_blendAdditive;
    CCCircleWaveDelegate* m_delegate;
};
