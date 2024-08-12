#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CreateGuidelinesLayer.hpp"

class FindBPMLayer : public CreateGuidelinesLayer {
public:
    static constexpr auto CLASS_NAME = "FindBPMLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindBPMLayer, CreateGuidelinesLayer)
    
private:
    [[deprecated("FindBPMLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static FindBPMLayer* create(int p0);
public:
    
private:
    [[deprecated("FindBPMLayer::calculateBPM not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateBPM();
public:
    
private:
    [[deprecated("FindBPMLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x46be80
     * @note[short] MacOS (Intel): 0x515c40
     * @note[short] Windows: 0x9a060
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46bcec
     * @note[short] MacOS (Intel): 0x515ab0
     * @note[short] Windows: 0x99ed0
     * @note[short] Android
     */
    virtual TodoReturn playMusic();

    /**
     * @note[short] MacOS (ARM): 0x46bd88
     * @note[short] MacOS (Intel): 0x515b40
     * @note[short] Windows: 0x99f70
     * @note[short] Android
     */
    virtual TodoReturn registerTouch();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46bc0c
     * @note[short] MacOS (Intel): 0x5159a0
     * @note[short] Windows: 0x99c90
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46bc44
     * @note[short] MacOS (Intel): 0x5159e0
     * @note[short] Windows: 0x99e50
     * @note[short] Android
     */
    virtual TodoReturn recordingDidStop();
};
