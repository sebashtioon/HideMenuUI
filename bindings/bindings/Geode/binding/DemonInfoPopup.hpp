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

class DemonInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6d2c7c
     * @note[short] MacOS (Intel): 0x7cde90
     * @note[short] Windows: 0x3a3280
     * @note[short] iOS: 0x1a87a0
     * @note[short] Android
     */
    static DemonInfoPopup* create(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x6d0a5c
     * @note[short] MacOS (Intel): 0x7cbb30
     * @note[short] Windows: 0x3a2eb0
     * @note[short] iOS: 0x1a721c
     * @note[short] Android
     */
    static DemonInfoPopup* createFromString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x6d2dd8
     * @note[short] MacOS (Intel): 0x7ce020
     * @note[short] Windows: 0x3a33e0
     * @note[short] iOS: 0x1a88c0
     * @note[short] Android
     */
    bool init(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet);
    
private:
    [[deprecated("DemonInfoPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6d371c
     * @note[short] MacOS (Intel): 0x7ce980
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("DemonInfoPopup::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6d3758
     * @note[short] MacOS (Intel): 0x7ce9b0
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
