#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextStyleSection : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "TextStyleSection";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextStyleSection, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x3f786c
     * @note[short] MacOS (Intel): 0x4925f0
     * @note[short] Windows: 0x6c320
     * @note[short] Android
     */
    static TextStyleSection* create(int p0, int p1, TextStyleType p2);

    /**
     * @note[short] MacOS (ARM): 0x3f7530
     * @note[short] MacOS (Intel): 0x492260
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createColoredSection(cocos2d::ccColor3B p0, int p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x3f76c0
     * @note[short] MacOS (Intel): 0x3f76c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createDelaySection(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x3f75b4
     * @note[short] MacOS (Intel): 0x4922e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createInstantSection(int p0, int p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x3f7638
     * @note[short] MacOS (Intel): 0x492360
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createShakeSection(int p0, int p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x3f78e0
     * @note[short] MacOS (Intel): 0x492660
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int p0, int p1, TextStyleType p2);
    TextStyleType m_styleType;
    int m_startIndex;
    int m_endIndex;
    cocos2d::ccColor3B m_color;
    float m_instantTime;
    float m_delay;
    int m_shakeIntensity;
    int m_shakesPerSecond;
};
