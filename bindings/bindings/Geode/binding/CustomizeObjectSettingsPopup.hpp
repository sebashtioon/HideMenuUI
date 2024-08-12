#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class CustomizeObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectSettingsPopup, SetupTriggerPopup)
    
private:
    [[deprecated("CustomizeObjectSettingsPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CustomizeObjectSettingsPopup* create(GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2);
public:
    
private:
    [[deprecated("CustomizeObjectSettingsPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x1a6eb8
     * @note[short] MacOS (Intel): 0x1f3c00
     * @note[short] Windows: 0xa8440
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a6e38
     * @note[short] MacOS (Intel): 0x1f3b90
     * @note[short] Windows: 0xa8390
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};
