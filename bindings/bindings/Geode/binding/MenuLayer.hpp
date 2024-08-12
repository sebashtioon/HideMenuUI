#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "GooglePlayDelegate.hpp"

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol, public GooglePlayDelegate {
public:
    static constexpr auto CLASS_NAME = "MenuLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x31ad64
     * @note[short] MacOS (Intel): 0x392b80
     * @note[short] Windows: 0x312f60
     * @note[short] iOS: 0x275ef0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x31d060
     * @note[short] MacOS (Intel): 0x394f60
     * @note[short] Windows: 0x315a30
     * @note[short] iOS: 0x277ddc
     * @note[short] Android
     */
    void endGame();

    /**
     * @note[short] MacOS (ARM): 0x31c9d0
     * @note[short] MacOS (Intel): 0x394820
     * @note[short] Windows: 0x314950
     * @note[short] iOS: 0x2778b8
     * @note[short] Android
     */
    void firstNetworkTest();

    /**
     * @note[short] MacOS (ARM): 0x31c39c
     * @note[short] MacOS (Intel): 0x394230
     * @note[short] Windows: 0x314e80
     * @note[short] iOS: 0x2773d4
     * @note[short] Android
     */
    void onAchievements(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c320
     * @note[short] MacOS (Intel): 0x3941a0
     * @note[short] Windows: 0x315390
     * @note[short] iOS: 0x27737c
     * @note[short] Android
     */
    void onCreator(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c96c
     * @note[short] MacOS (Intel): 0x3947c0
     * @note[short] Windows: 0x314700
     * @note[short] iOS: 0x277854
     * @note[short] Android
     */
    void onDaily(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c60c
     * @note[short] MacOS (Intel): 0x394460
     * @note[short] Windows: 0x314d80
     * @note[short] iOS: 0x277620
     * @note[short] Android
     */
    void onDiscord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c57c
     * @note[short] MacOS (Intel): 0x3943e0
     * @note[short] Windows: 0x314d00
     * @note[short] iOS: 0x277590
     * @note[short] Android
     */
    void onFacebook(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onFreeLevels not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31cd68
     * @note[short] MacOS (Intel): 0x394c40
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onFullVersion not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31cd48
     * @note[short] MacOS (Intel): 0x394c20
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onGameCenter not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31ca40
     * @note[short] MacOS (Intel): 0x3948b0
     * @note[short] iOS: 0x2778cc
     * @note[short] Android
     */
    void onGameCenter(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x31c2a4
     * @note[short] MacOS (Intel): 0x394110
     * @note[short] Windows: 0x315420
     * @note[short] iOS: 0x277324
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onGooglePlayGames not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31cb80
     * @note[short] MacOS (Intel): 0x394a10
     * @note[short] Android
     */
    void onGooglePlayGames(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x31c630
     * @note[short] MacOS (Intel): 0x394480
     * @note[short] Windows: 0x314da0
     * @note[short] iOS: 0x277644
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c78c
     * @note[short] MacOS (Intel): 0x3945d0
     * @note[short] Windows: 0x314c40
     * @note[short] iOS: 0x2776c8
     * @note[short] Android
     */
    void onMyProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c480
     * @note[short] MacOS (Intel): 0x3942f0
     * @note[short] Windows: 0x3154b0
     * @note[short] iOS: 0x2774b8
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c3e8
     * @note[short] MacOS (Intel): 0x394270
     * @note[short] Windows: 0x3150d0
     * @note[short] iOS: 0x277420
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31aeac
     * @note[short] MacOS (Intel): 0x392ce0
     * @note[short] Windows: 0x3150e0
     * @note[short] iOS: 0x276044
     * @note[short] Android
     */
    void onOptionsInstant();

    /**
     * @note[short] MacOS (ARM): 0x31c224
     * @note[short] MacOS (Intel): 0x394080
     * @note[short] Windows: 0x315030
     * @note[short] iOS: 0x2772c8
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c6b4
     * @note[short] MacOS (Intel): 0x394500
     * @note[short] Windows: 0x3155f0
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c558
     * @note[short] MacOS (Intel): 0x3943c0
     * @note[short] Windows: 0x314ce0
     * @note[short] iOS: 0x27756c
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c434
     * @note[short] MacOS (Intel): 0x3942b0
     * @note[short] Windows: 0x315270
     * @note[short] iOS: 0x27746c
     * @note[short] Android
     */
    void onStats(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onTrailer not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31cdb4
     * @note[short] MacOS (Intel): 0x394c90
     * @note[short] Android
     */
    void onTrailer(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x31c5e8
     * @note[short] MacOS (Intel): 0x394440
     * @note[short] Windows: 0x314d60
     * @note[short] iOS: 0x2775fc
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c5a0
     * @note[short] MacOS (Intel): 0x394400
     * @note[short] Windows: 0x314d20
     * @note[short] iOS: 0x2775b4
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31c5c4
     * @note[short] MacOS (Intel): 0x394420
     * @note[short] Windows: 0x314d40
     * @note[short] iOS: 0x2775d8
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31cca4
     * @note[short] MacOS (Intel): 0x394b60
     * @note[short] Windows: 0x3150f0
     * @note[short] iOS: 0x277acc
     * @note[short] Android
     */
    void openOptions(bool videoOptions);
    
private:
    [[deprecated("MenuLayer::showGCQuestion not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31ca88
     * @note[short] MacOS (Intel): 0x394900
     * @note[short] Android
     */
    void showGCQuestion();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void showMeltdownPromo();

    /**
     * @note[short] MacOS (ARM): 0x31c988
     * @note[short] MacOS (Intel): 0x3947e0
     * @note[short] Windows: 0x314b20
     * @note[short] iOS: 0x277870
     * @note[short] Android
     */
    void showTOS();
    
private:
    [[deprecated("MenuLayer::syncPlatformAchievements not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31cc74
     * @note[short] MacOS (Intel): 0x394b10
     * @note[short] Android
     */
    void syncPlatformAchievements(float p0);
public:
    
private:
    [[deprecated("MenuLayer::tryShowAd not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x31c9e8
     * @note[short] MacOS (Intel): 0x394850
     * @note[short] Android
     */
    void tryShowAd(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x31c7ec
     * @note[short] MacOS (Intel): 0x394630
     * @note[short] Windows: 0x314850
     * @note[short] iOS: 0x277728
     * @note[short] Android
     */
    void updateUserProfileButton();

    /**
     * @note[short] MacOS (ARM): 0x31cd3c
     * @note[short] MacOS (Intel): 0x394c00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void videoOptionsClosed();

    /**
     * @note[short] MacOS (ARM): 0x31cd2c
     * @note[short] MacOS (Intel): 0x394be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x277b54
     * @note[short] Android
     */
    void videoOptionsOpened();

    /**
     * @note[short] MacOS (ARM): 0x31ab68
     * @note[short] MacOS (Intel): 0x3928a0
     * @note[short] Windows: 0x315710
     * @note[short] iOS: 0x275e78
     * @note[short] Android
     */
    void willClose();

    /**
     * @note[short] MacOS (ARM): 0x31af14
     * @note[short] MacOS (Intel): 0x392d40
     * @note[short] Windows: 0x3130f0
     * @note[short] iOS: 0x27604c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x31cdf4
     * @note[short] MacOS (Intel): 0x394cd0
     * @note[short] Windows: 0x3155e0
     * @note[short] iOS: 0x277b74
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x31d06c
     * @note[short] MacOS (Intel): 0x394f90
     * @note[short] Windows: 0x3159c0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x31cba8
     * @note[short] MacOS (Intel): 0x394a40
     * @note[short] Windows: 0x314fe0
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS (ARM): 0x31ce00
     * @note[short] MacOS (Intel): 0x394d00
     * @note[short] Windows: 0x3157b0
     * @note[short] iOS: 0x277c30
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    bool m_showingTOS;
    cocos2d::CCSprite* m_gpSprite;
    cocos2d::CCSprite* m_viewProfileSprite;
    cocos2d::CCLabelBMFont* m_profileLabel;
    CCMenuItemSpriteExtra* m_profileButton;
    void* m_unknown;
    MenuGameLayer* m_menuGameLayer;
};
