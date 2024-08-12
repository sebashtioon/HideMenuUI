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
#include "GJSpecialColorSelectDelegate.hpp"

class ColorSelectPopup : public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "ColorSelectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ColorSelectPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x8c220
     * @note[short] Android
     */
    static ColorSelectPopup* create(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("ColorSelectPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ColorSelectPopup* create(ColorAction* p0);
public:

    /**
     * @note[short] Windows: 0x8c220
     * @note[short] Android
     */
    static ColorSelectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2);
    
private:
    [[deprecated("ColorSelectPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ColorSelectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] Windows: 0x8fc90
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* p0);
    
private:
    [[deprecated("ColorSelectPopup::colorToHex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorToHex(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("ColorSelectPopup::getColorValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getColorValue();
public:
    
private:
    [[deprecated("ColorSelectPopup::hexToColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hexToColor(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x8c410
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2);
    
private:
    [[deprecated("ColorSelectPopup::onCopy not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onCopyOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopyOpacity(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onDefault not implemented")]]
    /**
     * @note[short] Android
     */
    void onDefault(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onHSVLegacyMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onHSVLegacyMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onPaste not implemented")]]
    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onPlayerColor1 not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlayerColor1(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onPlayerColor2 not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlayerColor2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onSelectSpecialColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onTintGround not implemented")]]
    /**
     * @note[short] Android
     */
    void onTintGround(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onToggleHSVMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleHSVMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onToggleTintMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleTintMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onUpdateCopyColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::onUpdateCustomColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ColorSelectPopup::selectColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectColor(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("ColorSelectPopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("ColorSelectPopup::updateColorLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorLabels();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateColorValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorValue();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateCopyColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCopyColor();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateCopyColorTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCopyColorTextInputLabel();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateCustomColorIdx not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCustomColorIdx();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateDurLabel not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x646c84
     * @note[short] MacOS (Intel): 0x734fd0
     * @note[short] Android
     */
    void updateDurLabel();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateHSVMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHSVMode();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateHSVValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHSVValue();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void updateOpacity();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateOpacityLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateOpacityLabel();
public:
    
private:
    [[deprecated("ColorSelectPopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("ColorSelectPopup::show not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x649d8c
     * @note[short] MacOS (Intel): 0x738340
     * @note[short] Android
     */
    virtual void show();
public:
    
private:
    [[deprecated("ColorSelectPopup::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x647c48
     * @note[short] MacOS (Intel): 0x7360c0
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:

    /**
     * @note[short] MacOS (ARM): 0x649e58
     * @note[short] MacOS (Intel): 0x738430
     * @note[short] Windows: 0x914c0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x6482e8
     * @note[short] MacOS (Intel): 0x7368b0
     * @note[short] Windows: 0x8ff40
     * @note[short] Android
     */
    virtual void colorValueChanged(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x64a358
     * @note[short] MacOS (Intel): 0x7389d0
     * @note[short] Windows: 0x91e80
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* p0, int p1);
    GEODE_PAD(112);
    ColorAction* m_colorAction;
    GEODE_PAD(32);
    ConfigureHSVWidget* m_hsvWidget;
};
