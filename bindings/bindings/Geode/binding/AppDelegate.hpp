#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AppDelegate : public cocos2d::CCApplication, public cocos2d::CCSceneDelegate {
public:
    static constexpr auto CLASS_NAME = "AppDelegate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AppDelegate, cocos2d::CCApplication)

    /**
     * @note[short] MacOS (ARM): 0x585208
     * @note[short] MacOS (Intel): 0x669430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static AppDelegate* get();
    
private:
    [[deprecated("AppDelegate::bgScale not implemented")]]
    /**
     * @note[short] iOS: 0x278f80
     * @note[short] Android
     */
    float bgScale();
public:
    
private:
    [[deprecated("AppDelegate::checkSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkSound();
public:
    
private:
    [[deprecated("AppDelegate::hideLoadingCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingCircle();
public:
    
private:
    [[deprecated("AppDelegate::loadingIsFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadingIsFinished();
public:

    /**
     * @note[short] Windows: 0x81cf0
     * @note[short] Android
     */
    bool musicTest();

    /**
     * @note[short] Windows: 0x81970
     * @note[short] Android
     */
    void pauseGame();

    /**
     * @note[short] Windows: 0x81a50
     * @note[short] Android
     */
    void pauseSound();

    /**
     * @note[short] Windows: 0x80f30
     * @note[short] Android
     */
    void platformShutdown();

    /**
     * @note[short] MacOS (ARM): 0x585520
     * @note[short] MacOS (Intel): 0x669780
     * @note[short] Windows: 0x81bf0
     * @note[short] Android
     */
    void resumeSound();
    
private:
    [[deprecated("AppDelegate::setIdleTimerDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    void setIdleTimerDisabled(bool p0);
public:

    /**
     * @note[short] Windows: 0x80f50
     * @note[short] Android
     */
    void setupGLView();
    
private:
    [[deprecated("AppDelegate::showLoadingCircle not implemented")]]
    /**
     * @note[short] iOS: 0x2793c0
     * @note[short] Android
     */
    void showLoadingCircle(bool p0, bool p1, bool p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x585084
     * @note[short] MacOS (Intel): 0x6692b0
     * @note[short] Windows: 0x81370
     * @note[short] iOS: 0x278e40
     * @note[short] Android
     */
    virtual bool applicationDidFinishLaunching();

    /**
     * @note[short] MacOS (ARM): 0x5852fc
     * @note[short] MacOS (Intel): 0x669550
     * @note[short] Windows: 0x81720
     * @note[short] iOS: 0x279024
     * @note[short] Android
     */
    virtual void applicationDidEnterBackground();

    /**
     * @note[short] MacOS (ARM): 0x585434
     * @note[short] MacOS (Intel): 0x669690
     * @note[short] Windows: 0x817a0
     * @note[short] iOS: 0x2790dc
     * @note[short] Android
     */
    virtual void applicationWillEnterForeground();

    /**
     * @note[short] MacOS (ARM): 0x585218
     * @note[short] MacOS (Intel): 0x669450
     * @note[short] Windows: 0x816c0
     * @note[short] iOS: 0x278fa4
     * @note[short] Android
     */
    virtual void applicationWillBecomeActive();

    /**
     * @note[short] MacOS (ARM): 0x58522c
     * @note[short] MacOS (Intel): 0x669470
     * @note[short] Windows: 0x81710
     * @note[short] iOS: 0x278fbc
     * @note[short] Android
     */
    virtual void applicationWillResignActive();

    /**
     * @note[short] MacOS (ARM): 0x5856b4
     * @note[short] MacOS (Intel): 0x669920
     * @note[short] Windows: 0x81e30
     * @note[short] iOS: 0x2792a8
     * @note[short] Android
     */
    virtual void trySaveGame(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x58578c
     * @note[short] MacOS (Intel): 0x669a00
     * @note[short] Windows: 0x81f10
     * @note[short] iOS: 0x279378
     * @note[short] Android
     */
    virtual void willSwitchToScene(cocos2d::CCScene* p0);
    GEODE_PAD(4);
    cocos2d::CCScene* m_runningScene;
};
