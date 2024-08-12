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
#include "FLAlertLayerProtocol.hpp"
#include "GJPurchaseDelegate.hpp"

class GJPathPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJPurchaseDelegate {
public:
    static constexpr auto CLASS_NAME = "GJPathPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2916fc
     * @note[short] MacOS (Intel): 0x2fd710
     * @note[short] Windows: 0x273250
     * @note[short] Android
     */
    static GJPathPage* create(int p0, GJPathsLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x291bec
     * @note[short] MacOS (Intel): 0x2fdcf0
     * @note[short] Windows: 0x273380
     * @note[short] Android
     */
    bool init(int p0, GJPathsLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x29392c
     * @note[short] MacOS (Intel): 0x2ffb30
     * @note[short] Windows: 0x274ed0
     * @note[short] Android
     */
    void onActivatePath(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x293564
     * @note[short] MacOS (Intel): 0x2ff7c0
     * @note[short] Windows: 0x276b80
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x293614
     * @note[short] MacOS (Intel): 0x2ff850
     * @note[short] Windows: 0x274f00
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x293820
     * @note[short] MacOS (Intel): 0x2ffa40
     * @note[short] Windows: 0x275100
     * @note[short] Android
     */
    void onUnlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x293958
     * @note[short] MacOS (Intel): 0x2ffb70
     * @note[short] Windows: 0x275950
     * @note[short] Android
     */
    void playUnlockAnimation();

    /**
     * @note[short] MacOS (ARM): 0x293f08
     * @note[short] MacOS (Intel): 0x300220
     * @note[short] Windows: 0x275280
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x294854
     * @note[short] MacOS (Intel): 0x300c00
     * @note[short] Windows: 0x276a90
     * @note[short] Android
     */
    void unlockAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x29460c
     * @note[short] MacOS (Intel): 0x300920
     * @note[short] Windows: 0x275fa0
     * @note[short] Android
     */
    void unlockAnimationStep2();

    /**
     * @note[short] MacOS (ARM): 0x2949b0
     * @note[short] MacOS (Intel): 0x300d60
     * @note[short] Windows: 0x276220
     * @note[short] Android
     */
    void unlockAnimationStep3();
    
private:
    [[deprecated("GJPathPage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2953bc
     * @note[short] MacOS (Intel): 0x3018a0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x295258
     * @note[short] MacOS (Intel): 0x301760
     * @note[short] Windows: 0x276c20
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("GJPathPage::show not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2953f4
     * @note[short] MacOS (Intel): 0x3018e0
     * @note[short] Android
     */
    virtual void show();
public:

    /**
     * @note[short] MacOS (ARM): 0x293954
     * @note[short] MacOS (Intel): 0x2ffb60
     * @note[short] Windows: 0x2750f0
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* p0);
    GJPathsLayer* m_pathsLayer;
    int m_pathNumber;
    bool m_animationPlaying;
    int m_dialogIndex;
};
