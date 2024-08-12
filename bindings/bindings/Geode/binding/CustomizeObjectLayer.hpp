#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"
#include "HSVWidgetDelegate.hpp"
#include "ColorSelectDelegate.hpp"
#include "ColorSetupDelegate.hpp"

class CustomizeObjectLayer : public FLAlertLayer, public TextInputDelegate, public HSVWidgetDelegate, public ColorSelectDelegate, public ColorSetupDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0xa3150
     * @note[short] iOS: 0x53b08
     * @note[short] Android
     */
    static CustomizeObjectLayer* create(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("CustomizeObjectLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::determineStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();
public:

    /**
     * @note[short] Windows: 0xa72a0
     * @note[short] Android
     */
    int getActiveMode(bool p0);

    /**
     * @note[short] Windows: 0xa7b10
     * @note[short] Android
     */
    TodoReturn getButtonByTag(int p0);
    
private:
    [[deprecated("CustomizeObjectLayer::getHSV not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getHSV();
public:

    /**
     * @note[short] Windows: 0xa7dc0
     * @note[short] Android
     */
    void highlightSelected(ButtonSprite* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a2700
     * @note[short] MacOS (Intel): 0x1eef50
     * @note[short] Windows: 0xa32f0
     * @note[short] iOS: 0x53b8c
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("CustomizeObjectLayer::onBreakApart not implemented")]]
    /**
     * @note[short] Android
     */
    void onBreakApart(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onBrowse not implemented")]]
    /**
     * @note[short] Android
     */
    void onBrowse(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onClear not implemented")]]
    /**
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa7ef0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomizeObjectLayer::onCopy not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onEditColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa6a60
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomizeObjectLayer::onLiveEdit not implemented")]]
    /**
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onNextColorChannel not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextColorChannel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::onPaste not implemented")]]
    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa7b90
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a4888
     * @note[short] MacOS (Intel): 0x1f13b0
     * @note[short] Windows: 0xa6ed0
     * @note[short] iOS: 0x55b84
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomizeObjectLayer::onSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa7490
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomizeObjectLayer::recreateLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn recreateLayer();
public:
    
private:
    [[deprecated("CustomizeObjectLayer::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1a645c
     * @note[short] MacOS (Intel): 0x1f3120
     * @note[short] Windows: 0xa70e0
     * @note[short] iOS: 0x56ee8
     * @note[short] Android
     */
    void toggleVisible();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateChannelLabel(int channel);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    void updateColorSprite();
    
private:
    [[deprecated("CustomizeObjectLayer::updateCurrentSelection not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCurrentSelection();
public:

    /**
     * @note[short] Windows: 0xa7a80
     * @note[short] Android
     */
    void updateCustomColorLabels();

    /**
     * @note[short] Windows: 0xa6860
     * @note[short] Android
     */
    void updateHSVButtons();
    
private:
    [[deprecated("CustomizeObjectLayer::updateKerningLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateKerningLabel();
public:

    /**
     * @note[short] Windows: 0xa7c50
     * @note[short] Android
     */
    void updateSelected(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1a693c
     * @note[short] MacOS (Intel): 0x1f3620
     * @note[short] Windows: 0xa7fd0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1a6590
     * @note[short] MacOS (Intel): 0x1f3280
     * @note[short] Windows: 0xa7560
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);
    
private:
    [[deprecated("CustomizeObjectLayer::textInputClosed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1a66b8
     * @note[short] MacOS (Intel): 0x1f3390
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1a66d4
     * @note[short] MacOS (Intel): 0x1f33d0
     * @note[short] Windows: 0xa76f0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a639c
     * @note[short] MacOS (Intel): 0x1f3030
     * @note[short] Windows: 0xa6c90
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);

    /**
     * @note[short] MacOS (ARM): 0x1a6160
     * @note[short] MacOS (Intel): 0x1f2dd0
     * @note[short] Windows: 0xa6620
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a5d40
     * @note[short] MacOS (Intel): 0x1f2960
     * @note[short] Windows: 0xa6280
     * @note[short] Android
     */
    virtual void colorSetupClosed(int p0);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_colorButtons;
    cocos2d::CCArray* m_colorTabNodes;
    cocos2d::CCArray* m_textTabNodes;
    cocos2d::CCArray* m_unkArray;
    cocos2d::CCArray* m_detailTabNodes;
    int m_selectedMode;
    int m_customColorChannel;
    bool m_unk0x200;
    bool m_unk0x201;
    bool m_glowDisabled;
    CCMenuItemSpriteExtra* m_baseButton;
    CCMenuItemSpriteExtra* m_detailButton;
    CCMenuItemSpriteExtra* m_textButton;
    CCMenuItemSpriteExtra* m_baseColorHSV;
    CCMenuItemSpriteExtra* m_detailColorHSV;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_selectedColorLabel;
    CCTextInputNode* m_customColorInput;
    CCTextInputNode* m_textInput;
    int m_kerningAmount;
    cocos2d::CCLabelBMFont* m_kerningLabel;
    Slider* m_kerningSlider;
    ButtonSprite* m_customColorButtonSprite;
    CCMenuItemSpriteExtra* m_customColorButton;
    CCMenuItemSpriteExtra* m_arrowDown;
    CCMenuItemSpriteExtra* m_arrowUp;
    cocos2d::extension::CCScale9Sprite* m_customColorInputBG;
    ColorChannelSprite* m_colorSprite;
    CCMenuItemSpriteExtra* m_colorSpriteButton;
    CCMenuItemSpriteExtra* m_liveSelectButton;
    bool m_showTextInput;
    bool m_customColorSelected;
};
