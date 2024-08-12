#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FontObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "FontObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FontObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FontObject();

    /**
     * @note[short] MacOS (ARM): 0x1cb140
     * @note[short] MacOS (Intel): 0x21aa40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static FontObject* createWithConfigFile(char const* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1cba44
     * @note[short] MacOS (Intel): 0x21b480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30470c
     * @note[short] Android
     */
    int getFontWidth(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1cb1b4
     * @note[short] MacOS (Intel): 0x21aab0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool initWithConfigFile(char const* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1cb1cc
     * @note[short] MacOS (Intel): 0x21aac0
     * @note[short] Windows: 0x3a7d0
     * @note[short] Android
     */
    void parseConfigFile(char const* p0, float p1);
    std::array<int, 300> m_hugeIntArray;
};
