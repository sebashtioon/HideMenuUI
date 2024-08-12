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

class ShardsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShardsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShardsPage();

    /**
     * @note[short] MacOS (ARM): 0x42de74
     * @note[short] MacOS (Intel): 0x4cf720
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShardsPage* create();
    
private:
    [[deprecated("ShardsPage::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("ShardsPage::goToPage not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x42f970
     * @note[short] MacOS (Intel): 0x4d1540
     * @note[short] Android
     */
    void goToPage(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x42f8bc
     * @note[short] MacOS (Intel): 0x4d14a0
     * @note[short] Windows: 0x82fc0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x42f8f8
     * @note[short] MacOS (Intel): 0x4d14d0
     * @note[short] Windows: 0x460cc0
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x42f930
     * @note[short] MacOS (Intel): 0x4d1500
     * @note[short] Windows: 0x460d00
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x42df74
     * @note[short] MacOS (Intel): 0x4cf860
     * @note[short] Windows: 0x45de70
     * @note[short] iOS: 0x3aaf40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x42fcc8
     * @note[short] MacOS (Intel): 0x4d1890
     * @note[short] Windows: 0x41750
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x42fc4c
     * @note[short] MacOS (Intel): 0x4d1820
     * @note[short] Windows: 0x82ff0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x42fac4
     * @note[short] MacOS (Intel): 0x4d1690
     * @note[short] Windows: 0x84fb0
     * @note[short] Android
     */
    virtual void show();
    cocos2d::CCDictionary* m_pages;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    cocos2d::CCSprite* m_tierSprite;
    int m_page;
};
