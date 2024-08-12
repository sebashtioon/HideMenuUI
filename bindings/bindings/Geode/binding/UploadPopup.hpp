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
#include "LevelUploadDelegate.hpp"

class UploadPopup : public FLAlertLayer, public LevelUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadPopup, FLAlertLayer)
    
private:
    [[deprecated("UploadPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UploadPopup* create(GJGameLevel* p0);
public:
    
private:
    [[deprecated("UploadPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);
public:
    
private:
    [[deprecated("UploadPopup::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadPopup::onReturnToLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void onReturnToLevel(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x22390c
     * @note[short] MacOS (Intel): 0x27e660
     * @note[short] Windows: 0x2eb740
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x2234dc
     * @note[short] MacOS (Intel): 0x27e200
     * @note[short] Windows: 0x464dc0
     * @note[short] Android
     */
    virtual void levelUploadFinished(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x223714
     * @note[short] MacOS (Intel): 0x27e450
     * @note[short] Windows: 0x464f90
     * @note[short] Android
     */
    virtual void levelUploadFailed(GJGameLevel* p0);
};
