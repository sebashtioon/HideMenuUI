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

class CharacterColorPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CharacterColorPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CharacterColorPage, FLAlertLayer)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
     CharacterColorPage();
    
private:
    [[deprecated("CharacterColorPage::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x585908
     * @note[short] MacOS (Intel): 0x669c10
     * @note[short] iOS: 0x12f2cc
     * @note[short] Android
     */
    static CharacterColorPage* create();
public:
    
private:
    [[deprecated("CharacterColorPage::activeColorForMode not implemented")]]
    /**
     * @note[short] Android
     */
    int activeColorForMode(int mode);
public:
    
private:
    [[deprecated("CharacterColorPage::checkColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkColor(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("CharacterColorPage::colorForIndex not implemented")]]
    /**
     * @note[short] Android
     */
    int colorForIndex(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x586a8c
     * @note[short] MacOS (Intel): 0x66ae50
     * @note[short] Windows: 0x87600
     * @note[short] iOS: 0x1300e8
     * @note[short] Android
     */
    void createColorMenu();
    
private:
    [[deprecated("CharacterColorPage::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("CharacterColorPage::offsetForIndex not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCPoint offsetForIndex(int p0);
public:

    /**
     * @note[short] Windows: 0x88f50
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x586740
     * @note[short] MacOS (Intel): 0x66ab00
     * @note[short] Windows: 0x87d00
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5873e4
     * @note[short] MacOS (Intel): 0x66b7c0
     * @note[short] Windows: 0x88550
     * @note[short] Android
     */
    void onPlayerColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x586e64
     * @note[short] MacOS (Intel): 0x66b220
     * @note[short] Windows: 0x87550
     * @note[short] Android
     */
    void toggleGlow(cocos2d::CCObject* p0);
    
private:
    [[deprecated("CharacterColorPage::toggleGlowItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGlowItems(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x586678
     * @note[short] MacOS (Intel): 0x66aa50
     * @note[short] Windows: 0x87430
     * @note[short] Android
     */
    void toggleShip(cocos2d::CCObject* p0);
    
private:
    [[deprecated("CharacterColorPage::updateColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void updateColorMode(int p0);
public:

    /**
     * @note[short] Windows: 0x88d30
     * @note[short] Android
     */
    void updateIconColors();

    /**
     * @note[short] MacOS (ARM): 0x585a10
     * @note[short] MacOS (Intel): 0x669d70
     * @note[short] Windows: 0x866e0
     * @note[short] iOS: 0x12f38c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x587994
     * @note[short] MacOS (Intel): 0x66bd60
     * @note[short] Windows: 0x41750
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5878e8
     * @note[short] MacOS (Intel): 0x66bcc0
     * @note[short] Windows: 0x88f90
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("CharacterColorPage::show not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x587760
     * @note[short] MacOS (Intel): 0x66bb30
     * @note[short] Android
     */
    virtual void show();
public:
    int m_colorMode;
    float m_height;
    float m_width;
    cocos2d::CCArray* m_playerObjects;
    cocos2d::CCArray* m_modeButtons;
    cocos2d::CCDictionary* m_colorButtons;
    cocos2d::CCArray* m_cursors;
    CharacterColorDelegate* m_delegate;
    CCMenuItemToggler* m_glowToggler;
    cocos2d::CCLabelBMFont* m_glowLabel;
};
