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

class SetupGradientPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGradientPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGradientPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupGradientPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupGradientPopup* create(GradientTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGradientPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GradientTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGradientPopup::onBlending not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlending(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGradientPopup::onZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGradientPopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupGradientPopup::updateBlending not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBlending();
public:
    
private:
    [[deprecated("SetupGradientPopup::updateBlendingLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBlendingLabel();
public:
    
private:
    [[deprecated("SetupGradientPopup::updateGradientLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGradientLabels(bool p0);
public:
    
private:
    [[deprecated("SetupGradientPopup::updateZLayerButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateZLayerButtons();
public:

    /**
     * @note[short] MacOS (ARM): 0x524cd4
     * @note[short] MacOS (Intel): 0x5fda40
     * @note[short] Windows: 0x3f6a70
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x524e04
     * @note[short] MacOS (Intel): 0x5fdb60
     * @note[short] Windows: 0x3f6b80
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x524e60
     * @note[short] MacOS (Intel): 0x5fdbb0
     * @note[short] Windows: 0x3f6c00
     * @note[short] Android
     */
    virtual TodoReturn updateToggleItem(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x525010
     * @note[short] MacOS (Intel): 0x5fdd70
     * @note[short] Windows: 0x3f7010
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
};
