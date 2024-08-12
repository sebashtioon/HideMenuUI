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
#include "SelectSettingDelegate.hpp"

class SetupAudioLineGuidePopup : public SetupTriggerPopup, public SelectSettingDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAudioLineGuidePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioLineGuidePopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAudioLineGuidePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupAudioLineGuidePopup* create(AudioLineGuideGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAudioLineGuidePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(AudioLineGuideGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAudioLineGuidePopup::onSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x4d5abc
     * @note[short] MacOS (Intel): 0x58b4c0
     * @note[short] Windows: 0x444910
     * @note[short] Android
     */
    virtual void selectSettingClosed(SelectSettingLayer* p0);
};
