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

class SetupShaderEffectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShaderEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShaderEffectPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupShaderEffectPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupShaderEffectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::onResetColors not implemented")]]
    /**
     * @note[short] Android
     */
    void onResetColors(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::onZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupBulge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupBulge();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupChromatic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupChromatic();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupChromaticGlitch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupChromaticGlitch();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupColorChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupColorChange();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupGlitch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupGlitch();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupGrayscale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupGrayscale();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupHueShift not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupHueShift();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupInvertColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupInvertColor();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupLensCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLensCircle();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupMotionBlur not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupMotionBlur();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupPinch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupPinch();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupPixelate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupPixelate();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupRadialBlur not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupRadialBlur();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupSepia not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSepia();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupShaderTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupShaderTrigger();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupShockLine not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupShockLine();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupShockWave not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupShockWave();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::setupSplitScreen not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSplitScreen();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::updateZLayerButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateZLayerButtons();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::zLayerToString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn zLayerToString(int p0);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::toggleGroup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x26b028
     * @note[short] MacOS (Intel): 0x2cce80
     * @note[short] Android
     */
    virtual TodoReturn toggleGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x2ccec0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::updateDefaultTriggerValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x26a714
     * @note[short] MacOS (Intel): 0x2cc610
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();
public:
    
private:
    [[deprecated("SetupShaderEffectPopup::valueDidChange not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x26acfc
     * @note[short] MacOS (Intel): 0x2ccb50
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:
};
