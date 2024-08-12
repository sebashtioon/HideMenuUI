#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"

class ConfigureHSVWidget : public cocos2d::CCNode, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ConfigureHSVWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ConfigureHSVWidget, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x3ac04c
     * @note[short] MacOS (Intel): 0x439770
     * @note[short] Windows: 0x95140
     * @note[short] Android
     */
    static ConfigureHSVWidget* create(cocos2d::ccHSVValue p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x3acccc
     * @note[short] MacOS (Intel): 0x43a4c0
     * @note[short] Windows: 0x95af0
     * @note[short] Android
     */
    void createTextInputNode(cocos2d::CCPoint p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3ada2c
     * @note[short] MacOS (Intel): 0x43b280
     * @note[short] Windows: 0x96890
     * @note[short] Android
     */
    static cocos2d::ccHSVValue getHSV(GameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x3ac39c
     * @note[short] MacOS (Intel): 0x439b20
     * @note[short] Windows: 0x95210
     * @note[short] Android
     */
    bool init(cocos2d::ccHSVValue p0, bool p1, bool p2);
    
private:
    [[deprecated("ConfigureHSVWidget::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3ac120
     * @note[short] MacOS (Intel): 0x439840
     * @note[short] Android
     */
    void onClose();
public:

    /**
     * @note[short] MacOS (ARM): 0x3ad158
     * @note[short] MacOS (Intel): 0x43a8e0
     * @note[short] Windows: 0x96300
     * @note[short] Android
     */
    void onResetHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ad070
     * @note[short] MacOS (Intel): 0x43a800
     * @note[short] Windows: 0x96200
     * @note[short] Android
     */
    void onToggleSConst(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ad0e4
     * @note[short] MacOS (Intel): 0x43a870
     * @note[short] Windows: 0x96280
     * @note[short] Android
     */
    void onToggleVConst(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3acf28
     * @note[short] MacOS (Intel): 0x43a6f0
     * @note[short] Windows: 0x960e0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ad1d0
     * @note[short] MacOS (Intel): 0x43a960
     * @note[short] Windows: 0x96380
     * @note[short] Android
     */
    void updateLabels();

    /**
     * @note[short] MacOS (ARM): 0x3ad704
     * @note[short] MacOS (Intel): 0x43af00
     * @note[short] Windows: 0x96010
     * @note[short] Android
     */
    void updateSliders();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3ad7c8
     * @note[short] MacOS (Intel): 0x43afe0
     * @note[short] Windows: 0x89f80
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3ad7e4
     * @note[short] MacOS (Intel): 0x43b020
     * @note[short] Windows: 0x95d50
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    cocos2d::CCLabelBMFont* m_hueLabel;
    cocos2d::CCLabelBMFont* m_saturationLabel;
    cocos2d::CCLabelBMFont* m_brightnessLabel;
    Slider* m_hueSlider;
    Slider* m_saturationSlider;
    Slider* m_brightnessSlider;
    cocos2d::ccHSVValue m_hsv;
    bool m_mixed;
    HSVWidgetDelegate* m_delegate;
    bool m_addInputs;
    bool m_updating;
    cocos2d::CCDictionary* m_inputs;
};
