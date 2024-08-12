#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAudioTriggerPopup.hpp"
#include "CustomSFXDelegate.hpp"
#include "SFXBrowserDelegate.hpp"

class SetupSFXPopup : public SetupAudioTriggerPopup, public CustomSFXDelegate, public SFXBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4226d8
     * @note[short] MacOS (Intel): 0x4c27a0
     * @note[short] Windows: 0x41ba10
     * @note[short] Android
     */
    static SetupSFXPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupSFXPopup::createSFXWidget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSFXWidget();
public:

    /**
     * @note[short] MacOS (ARM): 0x42287c
     * @note[short] MacOS (Intel): 0x4c2a10
     * @note[short] Windows: 0x41bb60
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupSFXPopup::onBrowseSFX not implemented")]]
    /**
     * @note[short] Android
     */
    void onBrowseSFX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSFXPopup::updateLength not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLength();
public:
    
private:
    [[deprecated("SetupSFXPopup::pageChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x423934
     * @note[short] MacOS (Intel): 0x4c3dc0
     * @note[short] Android
     */
    virtual void pageChanged();
public:

    /**
     * @note[short] MacOS (ARM): 0x423988
     * @note[short] MacOS (Intel): 0x4c3e10
     * @note[short] Windows: 0x41cab0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupSFXPopup::onPlusButton not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x423e6c
     * @note[short] MacOS (Intel): 0x4c43b0
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSFXPopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x423d48
     * @note[short] MacOS (Intel): 0x4c4290
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void sfxObjectSelected(SFXInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x423ca4
     * @note[short] MacOS (Intel): 0x4c41d0
     * @note[short] Windows: 0x41d1a0
     * @note[short] Android
     */
    virtual TodoReturn getActiveSFXID();

    /**
     * @note[short] MacOS (ARM): 0x423cb4
     * @note[short] MacOS (Intel): 0x4c41f0
     * @note[short] Windows: 0x41d1b0
     * @note[short] Android
     */
    virtual TodoReturn overridePlaySFX(SFXInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x423f1c
     * @note[short] MacOS (Intel): 0x4c4450
     * @note[short] Windows: 0x41d8d0
     * @note[short] Android
     */
    virtual TodoReturn sfxBrowserClosed(SFXBrowser* p0);
};
