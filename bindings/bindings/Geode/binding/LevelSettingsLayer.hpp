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
#include "ColorSelectDelegate.hpp"
#include "SelectArtDelegate.hpp"
#include "SelectSettingDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "TextInputDelegate.hpp"

class LevelSettingsLayer : public FLAlertLayer, public ColorSelectDelegate, public SelectArtDelegate, public SelectSettingDelegate, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x20e4dc
     * @note[short] MacOS (Intel): 0x267640
     * @note[short] Windows: 0x2fe200
     * @note[short] Android
     */
    static LevelSettingsLayer* create(LevelSettingsObject* p0, LevelEditorLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x211020
     * @note[short] MacOS (Intel): 0x26a520
     * @note[short] Windows: 0x300d30
     * @note[short] Android
     */
    void createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);

    /**
     * @note[short] MacOS (ARM): 0x20e644
     * @note[short] MacOS (Intel): 0x267840
     * @note[short] Windows: 0x2fe3f0
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0, LevelEditorLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x210dd0
     * @note[short] MacOS (Intel): 0x26a280
     * @note[short] Windows: 0x3015c0
     * @note[short] Android
     */
    void onBGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x210f30
     * @note[short] MacOS (Intel): 0x26a410
     * @note[short] Windows: 0x3011b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2108d0
     * @note[short] MacOS (Intel): 0x269d30
     * @note[short] Windows: 0x3013b0
     * @note[short] Android
     */
    void onCol(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x211278
     * @note[short] MacOS (Intel): 0x26a730
     * @note[short] Windows: 0x300f80
     * @note[short] Android
     */
    void onDisable(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x210ed4
     * @note[short] MacOS (Intel): 0x26a3b0
     * @note[short] Windows: 0x301690
     * @note[short] Android
     */
    void onFGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x210c48
     * @note[short] MacOS (Intel): 0x26a100
     * @note[short] Windows: 0x300900
     * @note[short] Android
     */
    void onGameplayMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x210e0c
     * @note[short] MacOS (Intel): 0x26a2c0
     * @note[short] Windows: 0x301610
     * @note[short] Android
     */
    void onGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x210c04
     * @note[short] MacOS (Intel): 0x26a0c0
     * @note[short] Windows: 0x3012f0
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x211334
     * @note[short] MacOS (Intel): 0x26a800
     * @note[short] Windows: 0x300ad0
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21128c
     * @note[short] MacOS (Intel): 0x26a750
     * @note[short] Windows: 0x300fa0
     * @note[short] Android
     */
    void onOptionToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x210f10
     * @note[short] MacOS (Intel): 0x26a3f0
     * @note[short] Windows: 0x3016e0
     * @note[short] Android
     */
    void onSelectFont(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSettingsLayer::onSelectMode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2119a4
     * @note[short] MacOS (Intel): 0x26afa0
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSelectSpeed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x211a64
     * @note[short] MacOS (Intel): 0x26b060
     * @note[short] Android
     */
    void onSelectSpeed(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x211370
     * @note[short] MacOS (Intel): 0x26a850
     * @note[short] Windows: 0x300a10
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21087c
     * @note[short] MacOS (Intel): 0x269cd0
     * @note[short] Windows: 0x301340
     * @note[short] Android
     */
    void onShowPicker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2112f8
     * @note[short] MacOS (Intel): 0x26a7c0
     * @note[short] Windows: 0x300a80
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSettingsLayer::showPicker not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x211b94
     * @note[short] MacOS (Intel): 0x26b180
     * @note[short] Android
     */
    void showPicker(ColorAction* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x211bd4
     * @note[short] MacOS (Intel): 0x26b1f0
     * @note[short] Windows: 0x301460
     * @note[short] Android
     */
    void updateColorSprite(ColorChannelSprite* p0);

    /**
     * @note[short] MacOS (ARM): 0x2108f0
     * @note[short] MacOS (Intel): 0x269d50
     * @note[short] Windows: 0x3013f0
     * @note[short] Android
     */
    void updateColorSprites();

    /**
     * @note[short] MacOS (ARM): 0x210d1c
     * @note[short] MacOS (Intel): 0x26a1d0
     * @note[short] Windows: 0x300940
     * @note[short] Android
     */
    void updateGameplayModeButtons();

    /**
     * @note[short] MacOS (ARM): 0x211810
     * @note[short] MacOS (Intel): 0x26ae10
     * @note[short] Windows: 0x300cb0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x212060
     * @note[short] MacOS (Intel): 0x26b740
     * @note[short] Windows: 0x301b50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x211c80
     * @note[short] MacOS (Intel): 0x26b2a0
     * @note[short] Windows: 0xc1450
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x211bc8
     * @note[short] MacOS (Intel): 0x26b1c0
     * @note[short] Windows: 0x3013e0
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x211e60
     * @note[short] MacOS (Intel): 0x26b4d0
     * @note[short] Windows: 0x301800
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x211654
     * @note[short] MacOS (Intel): 0x26ac40
     * @note[short] Windows: 0x300b30
     * @note[short] Android
     */
    virtual void selectSettingClosed(SelectSettingLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x211868
     * @note[short] MacOS (Intel): 0x26ae60
     * @note[short] Windows: 0x89f80
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x211884
     * @note[short] MacOS (Intel): 0x26aea0
     * @note[short] Windows: 0x300fe0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    SongSelectNode* m_songSelectNode;
    Speed m_speed;
    ColorChannelSprite* m_bgColorSprite;
    ColorChannelSprite* m_gColorSprite;
    ColorChannelSprite* m_g2ColorSprite;
    ColorChannelSprite* m_lineColorSprite;
    ColorChannelSprite* m_mgColorSprite;
    ColorChannelSprite* m_mg2ColorSprite;
    cocos2d::CCSprite* m_moreColorsSprite;
    cocos2d::CCSprite* m_backgroundSprite;
    cocos2d::CCSprite* m_groundSprite;
    cocos2d::CCSprite* m_middlegroundSprite;
    cocos2d::CCSprite* m_speedSprite;
    cocos2d::CCSprite* m_modeSprite;
    LevelSettingsObject* m_settingsObject;
    void* m_unkPtr;
    cocos2d::CCArray* m_modeToggles;
    cocos2d::CCArray* m_speedButtons;
    LevelSettingsDelegate* m_delegate;
    LevelEditorLayer* m_editorLayer;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    CCMenuItemSpriteExtra* m_classicButton;
    CCMenuItemSpriteExtra* m_platformerButton;
    bool m_disableInput;
};
