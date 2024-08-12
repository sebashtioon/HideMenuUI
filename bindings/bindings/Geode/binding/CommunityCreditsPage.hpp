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

class CommunityCreditsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CommunityCreditsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommunityCreditsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CommunityCreditsPage();

    /**
     * @note[short] MacOS (ARM): 0x2adfa4
     * @note[short] MacOS (Intel): 0x31d260
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CommunityCreditsPage* create();
    
private:
    [[deprecated("CommunityCreditsPage::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x2b00a0
     * @note[short] MacOS (Intel): 0x31f610
     * @note[short] Windows: 0x94830
     * @note[short] Android
     */
    void goToPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2b0024
     * @note[short] MacOS (Intel): 0x31f5a0
     * @note[short] Windows: 0x82fc0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b0060
     * @note[short] MacOS (Intel): 0x31f5d0
     * @note[short] Windows: 0x947f0
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ae0a8
     * @note[short] MacOS (Intel): 0x31d3b0
     * @note[short] Windows: 0x927f0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2b03c8
     * @note[short] MacOS (Intel): 0x31f930
     * @note[short] Windows: 0x41750
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2b034c
     * @note[short] MacOS (Intel): 0x31f8c0
     * @note[short] Windows: 0x82ff0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2b01c4
     * @note[short] MacOS (Intel): 0x31f730
     * @note[short] Windows: 0x94950
     * @note[short] Android
     */
    virtual void show();
    cocos2d::CCDictionary* m_pageObjects;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    int m_page;
};
