#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class PauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "PauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PauseLayer, CCBlockLayer)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
     PauseLayer();

    /**
     * @note[short] MacOS (ARM): 0x35a7b4
     * @note[short] MacOS (Intel): 0x3d9bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14cadc
     * @note[short] Android
     */
    static PauseLayer* create(bool p0);
    
private:
    [[deprecated("PauseLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] MacOS (ARM): 0x35c470
     * @note[short] MacOS (Intel): 0x3db8e0
     * @note[short] Windows: 0x35cac0
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] MacOS (ARM): 0x35a880
     * @note[short] MacOS (Intel): 0x3d9ca0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x35c06c
     * @note[short] MacOS (Intel): 0x3db520
     * @note[short] Windows: 0x35c4d0
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x35bd28
     * @note[short] MacOS (Intel): 0x3db1b0
     * @note[short] Windows: 0x35c8f0
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x35bebc
     * @note[short] MacOS (Intel): 0x3db360
     * @note[short] Windows: 0x35c640
     * @note[short] iOS: 0x14e134
     * @note[short] Android
     */
    void onNormalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35be64
     * @note[short] MacOS (Intel): 0x3db300
     * @note[short] Windows: 0x35c560
     * @note[short] iOS: 0x14e0f8
     * @note[short] Android
     */
    void onPracticeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35c4f4
     * @note[short] MacOS (Intel): 0x3db980
     * @note[short] Windows: 0x35cd70
     * @note[short] iOS: 0x14e3a8
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onRecordReplays not implemented")]]
    /**
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PauseLayer::onReplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x35c00c
     * @note[short] MacOS (Intel): 0x3db4b0
     * @note[short] Windows: 0x35c7b0
     * @note[short] Android
     */
    void onRestart(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35be28
     * @note[short] MacOS (Intel): 0x3db2c0
     * @note[short] Windows: 0x35c850
     * @note[short] Android
     */
    void onRestartFull(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35bdf0
     * @note[short] MacOS (Intel): 0x3db280
     * @note[short] Windows: 0x35c720
     * @note[short] iOS: 0x14e084
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35c048
     * @note[short] MacOS (Intel): 0x3db4f0
     * @note[short] Windows: 0x35b8e0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onTime not implemented")]]
    /**
     * @note[short] Android
     */
    void onTime(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PauseLayer::setupProgressBars not implemented")]]
    /**
     * @note[short] Android
     */
    void setupProgressBars();
public:
    
private:
    [[deprecated("PauseLayer::sfxSliderChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x35c0ac
     * @note[short] MacOS (Intel): 0x3db560
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("PauseLayer::tryShowBanner not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowBanner(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x35bf08
     * @note[short] MacOS (Intel): 0x3db3b0
     * @note[short] Windows: 0x35cb90
     * @note[short] iOS: 0x14e164
     * @note[short] Android
     */
    void tryQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35c734
     * @note[short] MacOS (Intel): 0x3dbba0
     * @note[short] Windows: 0x35cf90
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x35c658
     * @note[short] MacOS (Intel): 0x3dbaa0
     * @note[short] Windows: 0x35cec0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x35a888
     * @note[short] MacOS (Intel): 0x3d9cc0
     * @note[short] Windows: 0x35abc0
     * @note[short] iOS: 0x14cb9c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x35c5a8
     * @note[short] MacOS (Intel): 0x3dba20
     * @note[short] Windows: 0x35cd20
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    bool m_unkBool1;
    bool m_unkBool2;
};
