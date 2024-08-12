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
#include "FLAlertLayerProtocol.hpp"
#include "GameRateDelegate.hpp"
#include "ListButtonBarDelegate.hpp"
#include "DialogDelegate.hpp"
#include "CharacterColorDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class GJGarageLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate, public CharacterColorDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJGarageLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGarageLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31a060
     * @note[short] Android: Out of line
     */
     GJGarageLayer();
    
private:
    [[deprecated("GJGarageLayer::achievementForUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string achievementForUnlock(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x266240
     * @note[short] Android
     */
    gd::string descriptionForUnlock(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x2fb2e8
     * @note[short] MacOS (Intel): 0x36f1c0
     * @note[short] Windows: 0x264710
     * @note[short] Android
     */
    cocos2d::CCArray* getItems(IconType p0);

    /**
     * @note[short] Windows: 0x2647d0
     * @note[short] Android
     */
    cocos2d::CCArray* getItems(int p0, int p1, IconType p2, int p3);
    
private:
    [[deprecated("GJGarageLayer::getLockFrame not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getLockFrame(int p0, UnlockType p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x2f6a6c
     * @note[short] MacOS (Intel): 0x36a6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x312750
     * @note[short] Android
     */
    static GJGarageLayer* node();

    /**
     * @note[short] Windows: 0x263e50
     * @note[short] Android
     */
    void onArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x266f60
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x262a50
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x263f50
     * @note[short] Android
     */
    void onNavigate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x266d80
     * @note[short] iOS: 0x31520c
     * @note[short] Android
     */
    void onPaint(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2fb710
     * @note[short] MacOS (Intel): 0x36f5e0
     * @note[short] Windows: 0x265100
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2fa384
     * @note[short] MacOS (Intel): 0x36e1b0
     * @note[short] Windows: 0x263f80
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x266c30
     * @note[short] Android
     */
    void onShards(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x266f00
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2fb65c
     * @note[short] MacOS (Intel): 0x36f510
     * @note[short] Windows: 0x265930
     * @note[short] Android
     */
    void onSpecial(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2657a0
     * @note[short] iOS: 0x316c4c
     * @note[short] Android
     */
    void onToggleItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2fc130
     * @note[short] MacOS (Intel): 0x370230
     * @note[short] Windows: 0x266a40
     * @note[short] Android
     */
    void playRainbowEffect();
    
private:
    [[deprecated("GJGarageLayer::playShadowEffect not implemented")]]
    /**
     * @note[short] Android
     */
    void playShadowEffect();
public:

    /**
     * @note[short] Windows: 0x260f90
     * @note[short] iOS: 0x31270c
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x2fa4f4
     * @note[short] MacOS (Intel): 0x36e340
     * @note[short] Windows: 0x263fb0
     * @note[short] Android
     */
    void selectTab(IconType p0);

    /**
     * @note[short] Windows: 0x2631f0
     * @note[short] Android
     */
    void setupIconSelect();

    /**
     * @note[short] MacOS (ARM): 0x2fa624
     * @note[short] MacOS (Intel): 0x36e480
     * @note[short] Windows: 0x264070
     * @note[short] iOS: 0x315810
     * @note[short] Android
     */
    void setupPage(int p0, IconType p1);

    /**
     * @note[short] MacOS (ARM): 0x2fac80
     * @note[short] MacOS (Intel): 0x36eb00
     * @note[short] Windows: 0x264a90
     * @note[short] iOS: 0x315de0
     * @note[short] Android
     */
    void setupSpecialPage();
    
private:
    [[deprecated("GJGarageLayer::showUnlockPopupNew not implemented")]]
    /**
     * @note[short] Android
     */
    void showUnlockPopupNew(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GJGarageLayer::titleForUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string titleForUnlock(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GJGarageLayer::toggleGlow not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleGlow();
public:

    /**
     * @note[short] MacOS (ARM): 0x2f8658
     * @note[short] MacOS (Intel): 0x36c500
     * @note[short] Windows: 0x2659b0
     * @note[short] Android
     */
    void updatePlayerColors();
    
private:
    [[deprecated("GJGarageLayer::updatePlayerName not implemented")]]
    /**
     * @note[short] Android
     */
    void updatePlayerName(char const* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2f6b6c
     * @note[short] MacOS (Intel): 0x36a810
     * @note[short] Windows: 0x261150
     * @note[short] iOS: 0x3127c4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2fd42c
     * @note[short] MacOS (Intel): 0x3715d0
     * @note[short] Windows: 0x267100
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2f9f8c
     * @note[short] MacOS (Intel): 0x36de20
     * @note[short] Windows: 0x262c50
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2fa0e4
     * @note[short] MacOS (Intel): 0x36df50
     * @note[short] Windows: 0x262e40
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2fa304
     * @note[short] MacOS (Intel): 0x36e150
     * @note[short] Windows: 0xc13a0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2fc440
     * @note[short] MacOS (Intel): 0x370570
     * @note[short] Windows: 0xc1450
     * @note[short] Android
     */
    virtual void listButtonBarSwitchedPage(ListButtonBar* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2fc598
     * @note[short] MacOS (Intel): 0x370700
     * @note[short] Windows: 0x265b30
     * @note[short] Android
     */
    virtual void showUnlockPopup(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x2fd218
     * @note[short] MacOS (Intel): 0x371380
     * @note[short] Windows: 0x266800
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] MacOS (ARM): 0x2fcfe0
     * @note[short] MacOS (Intel): 0x371110
     * @note[short] Windows: 0x2663d0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x2fd0dc
     * @note[short] MacOS (Intel): 0x371220
     * @note[short] Windows: 0x266630
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x2fc360
     * @note[short] MacOS (Intel): 0x370470
     * @note[short] Windows: 0x265980
     * @note[short] Android
     */
    virtual void playerColorChanged();

    /**
     * @note[short] MacOS (ARM): 0x2f9f7c
     * @note[short] MacOS (Intel): 0x36de00
     * @note[short] Windows: 0x262c40
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();
    CCTextInputNode* m_usernameInput;
    SimplePlayer* m_playerObject;
    cocos2d::CCArray* m_tabButtons;
    cocos2d::CCArray* m_pageButtons;
    cocos2d::CCNode* m_unknown;
    cocos2d::CCSprite* m_supporter;
    bool m_hasClosed;
    IconType m_iconType;
    gd::map<IconType, int> m_iconPages;
    cocos2d::CCSprite* m_cursor1;
    cocos2d::CCSprite* m_cursor2;
    CCMenuItemSpriteExtra* m_currentIcon;
    ListButtonBar* m_iconSelection;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_rightArrow;
    cocos2d::CCMenu* m_navDotMenu;
    int m_iconID;
    IconType m_selectedIconType;
    bool m_videoPlaying;
};
