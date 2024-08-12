#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"
#include "LevelManagerDelegate.hpp"

class GauntletSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x4c5010
     * @note[short] MacOS (Intel): 0x578c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c907c
     * @note[short] Android
     */
    static GauntletSelectLayer* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4c69b0
     * @note[short] MacOS (Intel): 0x57a7f0
     * @note[short] Windows: 0x1ed600
     * @note[short] Android
     */
    void goToPage(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x4c50d8
     * @note[short] MacOS (Intel): 0x578d40
     * @note[short] Windows: 0x1ebd80
     * @note[short] iOS: 0x1c9138
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4c5b24
     * @note[short] MacOS (Intel): 0x579880
     * @note[short] Windows: 0x1ed7b0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c5b98
     * @note[short] MacOS (Intel): 0x5798f0
     * @note[short] Windows: 0x1ec8f0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c5b10
     * @note[short] MacOS (Intel): 0x579860
     * @note[short] Windows: 0x1ed5c0
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c6560
     * @note[short] MacOS (Intel): 0x57a370
     * @note[short] Windows: 0x1ed870
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c5afc
     * @note[short] MacOS (Intel): 0x579840
     * @note[short] Windows: 0x1ed5e0
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c5c50
     * @note[short] MacOS (Intel): 0x5799a0
     * @note[short] Windows: 0x1eca30
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c4f30
     * @note[short] MacOS (Intel): 0x578b30
     * @note[short] Windows: 0x1ebc50
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4c5cf8
     * @note[short] MacOS (Intel): 0x579a60
     * @note[short] Windows: 0x1ece70
     * @note[short] iOS: 0x1c9d18
     * @note[short] Android
     */
    void setupGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x4c6aa4
     * @note[short] MacOS (Intel): 0x57a8e0
     * @note[short] Windows: 0x1ed760
     * @note[short] Android
     */
    void unblockPlay();
    
private:
    [[deprecated("GauntletSelectLayer::updateArrows not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4c618c
     * @note[short] MacOS (Intel): 0x579f80
     * @note[short] Android
     */
    void updateArrows();
public:

    /**
     * @note[short] MacOS (ARM): 0x4c6d18
     * @note[short] MacOS (Intel): 0x57ab60
     * @note[short] Windows: 0x1edf40
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x4c6bec
     * @note[short] MacOS (Intel): 0x57aa30
     * @note[short] Windows: 0x1ed860
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4c6b4c
     * @note[short] MacOS (Intel): 0x57a990
     * @note[short] Windows: 0x1ed770
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4c6aac
     * @note[short] MacOS (Intel): 0x57a8f0
     * @note[short] Windows: 0x1ed770
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4c61dc
     * @note[short] MacOS (Intel): 0x579fd0
     * @note[short] Windows: 0x1ecb50
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x4c6374
     * @note[short] MacOS (Intel): 0x57a180
     * @note[short] Windows: 0x1ecd00
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);
    cocos2d::CCSprite* m_backgroundSprite;
    BoomScrollLayer* m_scrollLayer;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    bool m_exiting;
    bool m_playing;
    TextArea* m_tryAgainText;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCDictionary* m_gauntlets;
    bool m_playBlocked;
};
