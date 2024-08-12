#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DialogObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "DialogObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x34d384
     * @note[short] MacOS (Intel): 0x3ca660
     * @note[short] Windows: 0xcfb10
     * @note[short] iOS: 0x8a034
     * @note[short] Android
     */
    static DialogObject* create(gd::string character, gd::string text, int characterFrame, float textScale, bool skippable, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x34d5ec
     * @note[short] MacOS (Intel): 0x3ca8a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(gd::string character, gd::string text, int characterFrame, float textScale, bool skippable, cocos2d::ccColor3B color);
    gd::string m_text;
    gd::string m_character;
    int m_characterFrame;
    cocos2d::ccColor3B m_color;
    float m_textScale;
    bool m_skippable;
};
