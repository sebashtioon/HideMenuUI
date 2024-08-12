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

class TOSPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TOSPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TOSPopup, FLAlertLayer)
    
private:
    [[deprecated("TOSPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static TOSPopup* create();
public:
    
private:
    [[deprecated("TOSPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TOSPopup::onPrivacy not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrivacy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TOSPopup::onTOS not implemented")]]
    /**
     * @note[short] Android
     */
    void onTOS(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x24c9f0
     * @note[short] MacOS (Intel): 0x2ab8d0
     * @note[short] Windows: 0x28bdb0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void keyBackClicked();
};
