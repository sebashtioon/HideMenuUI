#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class OptionsLayer : public GJDropDownLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "OptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsLayer, GJDropDownLayer)
	inline OptionsLayer() {
		m_optionsMenu = nullptr;
		m_unknown = nullptr;
		m_layerChoice = 0;
		m_recordReplays = false;
		m_musicSlider = nullptr;
		m_sfxSlider = nullptr;
		m_lastVaultDialog = -1;
	}

    /**
     * @note[short] MacOS (ARM): 0x6ad67c
     * @note[short] MacOS (Intel): 0x7a60c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xedfcc
     * @note[short] Android
     */
    static OptionsLayer* create();
    
private:
    [[deprecated("OptionsLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("OptionsLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void exitLayer();
public:

    /**
     * @note[short] MacOS (ARM): 0x6ae7b8
     * @note[short] MacOS (Intel): 0x7a72e0
     * @note[short] Windows: 0x351110
     * @note[short] iOS: 0xeec30
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x351bd0
     * @note[short] iOS: 0xee9dc
     * @note[short] Android
     */
    void onAccount(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x351b80
     * @note[short] iOS: 0xee9ec
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
    
private:
    [[deprecated("OptionsLayer::onMenuMusic not implemented")]]
    /**
     * @note[short] iOS: 0xeecd8
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x6ae1f8
     * @note[short] MacOS (Intel): 0x7a6d70
     * @note[short] Windows: 0x3512f0
     * @note[short] iOS: 0xeea08
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);
    
private:
    [[deprecated("OptionsLayer::onProgressBar not implemented")]]
    /**
     * @note[short] Android
     */
    void onProgressBar(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onRate not implemented")]]
    /**
     * @note[short] iOS: 0xeea24
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsLayer::onRecordReplays not implemented")]]
    /**
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x6ae50c
     * @note[short] MacOS (Intel): 0x7a7060
     * @note[short] Windows: 0x351450
     * @note[short] iOS: 0xeea58
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);
    
private:
    [[deprecated("OptionsLayer::onSoundtracks not implemented")]]
    /**
     * @note[short] iOS: 0xeea38
     * @note[short] Android
     */
    void onSoundtracks(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x351c90
     * @note[short] iOS: 0xeea48
     * @note[short] Android
     */
    void onSupport(cocos2d::CCObject* sender);
    
private:
    [[deprecated("OptionsLayer::onVideo not implemented")]]
    /**
     * @note[short] Android
     */
    void onVideo(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x6ae828
     * @note[short] MacOS (Intel): 0x7a7350
     * @note[short] Windows: 0x351210
     * @note[short] iOS: 0xeec9c
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* p0);
    
private:
    [[deprecated("OptionsLayer::tryEnableRecord not implemented")]]
    /**
     * @note[short] Android
     */
    void tryEnableRecord();
public:

    /**
     * @note[short] MacOS (ARM): 0x6ad80c
     * @note[short] MacOS (Intel): 0x7a6300
     * @note[short] Windows: 0x3504c0
     * @note[short] iOS: 0xee0d4
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x6aebcc
     * @note[short] MacOS (Intel): 0x7a7790
     * @note[short] Windows: 0x351cb0
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    cocos2d::CCMenu* m_optionsMenu;
    void* m_unknown;
    int m_layerChoice;
    bool m_recordReplays;
    Slider* m_musicSlider;
    Slider* m_sfxSlider;
    int m_lastVaultDialog;
};
