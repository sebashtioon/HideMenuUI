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
#include "SelectArtDelegate.hpp"

class SetupArtSwitchPopup : public SetupTriggerPopup, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupArtSwitchPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupArtSwitchPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupArtSwitchPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupArtSwitchPopup* create(ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupArtSwitchPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupArtSwitchPopup::onArt not implemented")]]
    /**
     * @note[short] Android
     */
    void onArt(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x4d723c
     * @note[short] MacOS (Intel): 0x58d020
     * @note[short] Windows: 0x446640
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* p0);
};
