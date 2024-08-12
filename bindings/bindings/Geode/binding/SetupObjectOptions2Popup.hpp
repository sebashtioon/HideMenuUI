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

class SetupObjectOptions2Popup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptions2Popup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptions2Popup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupObjectOptions2Popup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupObjectOptions2Popup* create(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupObjectOptions2Popup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupObjectOptions2Popup::onPlusButton not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2aac88
     * @note[short] MacOS (Intel): 0x31a1c0
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
};
