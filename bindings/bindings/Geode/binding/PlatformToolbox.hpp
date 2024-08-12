#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlatformToolbox {
public:
    static constexpr auto CLASS_NAME = "PlatformToolbox";
    
private:
    [[deprecated("PlatformToolbox::activateGameCenter not implemented")]]
    /**
     * @note[short] iOS: 0x1774e4
     * @note[short] Android
     */
    static void activateGameCenter();
public:
    
private:
    [[deprecated("PlatformToolbox::copyToClipboard not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn copyToClipboard(gd::string p0);
public:
    
private:
    [[deprecated("PlatformToolbox::doesFileExist not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn doesFileExist(gd::string p0);
public:
    
private:
    [[deprecated("PlatformToolbox::downloadAndSavePromoImage not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn downloadAndSavePromoImage(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("PlatformToolbox::gameDidSave not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn gameDidSave();
public:
    
private:
    [[deprecated("PlatformToolbox::getDeviceRefreshRate not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getDeviceRefreshRate();
public:
    
private:
    [[deprecated("PlatformToolbox::getDisplaySize not implemented")]]
    /**
     * @note[short] iOS: 0x17793c
     * @note[short] Android
     */
    static TodoReturn getDisplaySize();
public:
    
private:
    [[deprecated("PlatformToolbox::getRawPath not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getRawPath(char const* p0);
public:
    
private:
    [[deprecated("PlatformToolbox::getUniqueUserID not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getUniqueUserID();
public:
    
private:
    [[deprecated("PlatformToolbox::getUserID not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getUserID();
public:

    /**
     * @note[short] MacOS (ARM): 0x42c87c
     * @note[short] MacOS (Intel): 0x4cdbb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1779b4
     * @note[short] Android
     */
    static void hideCursor();

    /**
     * @note[short] MacOS (ARM): 0x42d470
     * @note[short] MacOS (Intel): 0x4cea70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x177980
     * @note[short] Android
     */
    static bool isControllerConnected();
    
private:
    [[deprecated("PlatformToolbox::isHD not implemented")]]
    /**
     * @note[short] Android
     */
    static bool isHD();
public:
    
private:
    [[deprecated("PlatformToolbox::isLocalPlayerAuthenticated not implemented")]]
    /**
     * @note[short] iOS: 0x1774e8
     * @note[short] Android
     */
    static bool isLocalPlayerAuthenticated();
public:
    
private:
    [[deprecated("PlatformToolbox::isLowMemoryDevice not implemented")]]
    /**
     * @note[short] Android
     */
    static bool isLowMemoryDevice();
public:
    
private:
    [[deprecated("PlatformToolbox::isNetworkAvailable not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x42c7f0
     * @note[short] MacOS (Intel): 0x4cda60
     * @note[short] Android
     */
    static bool isNetworkAvailable();
public:
    
private:
    [[deprecated("PlatformToolbox::isSignedInGooglePlay not implemented")]]
    /**
     * @note[short] Android
     */
    static bool isSignedInGooglePlay();
public:
    
private:
    [[deprecated("PlatformToolbox::loadAndDecryptFileToString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn loadAndDecryptFileToString(char const* p0, char const* p1);
public:
    
private:
    [[deprecated("PlatformToolbox::logEvent not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn logEvent(char const* p0);
public:
    
private:
    [[deprecated("PlatformToolbox::onGameLaunch not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn onGameLaunch();
public:
    
private:
    [[deprecated("PlatformToolbox::onNativePause not implemented")]]
    /**
     * @note[short] iOS: 0x1774c8
     * @note[short] Android
     */
    static void onNativePause();
public:
    
private:
    [[deprecated("PlatformToolbox::onNativeResume not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn onNativeResume();
public:
    
private:
    [[deprecated("PlatformToolbox::onToggleKeyboard not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn onToggleKeyboard();
public:
    
private:
    [[deprecated("PlatformToolbox::openAppPage not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn openAppPage();
public:
    
private:
    [[deprecated("PlatformToolbox::platformShutdown not implemented")]]
    /**
     * @note[short] Android
     */
    static void platformShutdown();
public:
    
private:
    [[deprecated("PlatformToolbox::refreshWindow not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn refreshWindow();
public:
    
private:
    [[deprecated("PlatformToolbox::reportAchievementWithID not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn reportAchievementWithID(char const* p0, int p1);
public:
    
private:
    [[deprecated("PlatformToolbox::reportLoadingFinished not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn reportLoadingFinished();
public:
    
private:
    [[deprecated("PlatformToolbox::resizeWindow not implemented")]]
    /**
     * @note[short] iOS: 0x177938
     * @note[short] Android
     */
    static void resizeWindow(float width, float height);
public:
    
private:
    [[deprecated("PlatformToolbox::saveAndEncryptStringToFile not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn saveAndEncryptStringToFile(gd::string p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("PlatformToolbox::sendMail not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn sendMail(char const* p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("PlatformToolbox::setBlockBackButton not implemented")]]
    /**
     * @note[short] Android
     */
    static void setBlockBackButton(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::setKeyboardState not implemented")]]
    /**
     * @note[short] Android
     */
    static void setKeyboardState(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::shouldResumeSound not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn shouldResumeSound();
public:
    
private:
    [[deprecated("PlatformToolbox::showAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    static void showAchievements();
public:

    /**
     * @note[short] MacOS (ARM): 0x42c894
     * @note[short] MacOS (Intel): 0x4cdbd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void showCursor();
    
private:
    [[deprecated("PlatformToolbox::signInGooglePlay not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn signInGooglePlay();
public:
    
private:
    [[deprecated("PlatformToolbox::signOutGooglePlay not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn signOutGooglePlay();
public:
    
private:
    [[deprecated("PlatformToolbox::spriteFromSavedFile not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn spriteFromSavedFile(gd::string p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleCallGLFinish not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn toggleCallGLFinish(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleCPUSleepMode not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn toggleCPUSleepMode(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleForceTimer not implemented")]]
    /**
     * @note[short] iOS: 0x17798c
     * @note[short] Android
     */
    static void toggleForceTimer(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleFullScreen not implemented")]]
    /**
     * @note[short] iOS: 0x177934
     * @note[short] Android
     */
    static void toggleFullScreen(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleLockCursor not implemented")]]
    /**
     * @note[short] iOS: 0x1779c4
     * @note[short] Android
     */
    static void toggleLockCursor(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleMouseControl not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn toggleMouseControl(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleSmoothFix not implemented")]]
    /**
     * @note[short] iOS: 0x177990
     * @note[short] Android
     */
    static void toggleSmoothFix(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::toggleVerticalSync not implemented")]]
    /**
     * @note[short] iOS: 0x177988
     * @note[short] Android
     */
    static void toggleVerticalSync(bool p0);
public:
    
private:
    [[deprecated("PlatformToolbox::tryShowRateDialog not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn tryShowRateDialog(gd::string p0);
public:
    
private:
    [[deprecated("PlatformToolbox::updateMouseControl not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn updateMouseControl();
public:
    
private:
    [[deprecated("PlatformToolbox::updateWindowedSize not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn updateWindowedSize(float p0, float p1);
public:
};
