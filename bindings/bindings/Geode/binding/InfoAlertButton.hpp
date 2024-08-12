#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCMenuItemSpriteExtra.hpp"

class InfoAlertButton : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "InfoAlertButton";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoAlertButton, CCMenuItemSpriteExtra)

    /**
     * @note[short] MacOS (ARM): 0x4c9214
     * @note[short] MacOS (Intel): 0x57cca0
     * @note[short] Windows: 0x2a7e50
     * @note[short] Android
     */
    static InfoAlertButton* create(gd::string p0, gd::string p1, float p2);
    
private:
    [[deprecated("InfoAlertButton::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4c94b0
     * @note[short] MacOS (Intel): 0x57cf20
     * @note[short] Android
     */
    bool init(gd::string p0, gd::string p1, float p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x4c9554
     * @note[short] MacOS (Intel): 0x57cfc0
     * @note[short] Windows: 0x2a8050
     * @note[short] Android
     */
    virtual void activate();
    gd::string m_title;
    gd::string m_description;
    float m_textScale;
    bool m_scroll;
};
