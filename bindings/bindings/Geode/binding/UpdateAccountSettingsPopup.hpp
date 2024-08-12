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
#include "GJAccountSettingsDelegate.hpp"

class UpdateAccountSettingsPopup : public FLAlertLayer, public GJAccountSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "UpdateAccountSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UpdateAccountSettingsPopup, FLAlertLayer)
    
private:
    [[deprecated("UpdateAccountSettingsPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UpdateAccountSettingsPopup* create(GJAccountSettingsLayer* p0, int p1, int p2, int p3, gd::string p4, gd::string p5, gd::string p6);
public:
    
private:
    [[deprecated("UpdateAccountSettingsPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJAccountSettingsLayer* p0, int p1, int p2, int p3, gd::string p4, gd::string p5, gd::string p6);
public:
    
private:
    [[deprecated("UpdateAccountSettingsPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x240d24
     * @note[short] MacOS (Intel): 0x29ecb0
     * @note[short] Windows: 0x282f90
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x240b20
     * @note[short] MacOS (Intel): 0x29eaa0
     * @note[short] Windows: 0x282c10
     * @note[short] Android
     */
    virtual TodoReturn updateSettingsFinished();

    /**
     * @note[short] MacOS (ARM): 0x240c38
     * @note[short] MacOS (Intel): 0x29ebc0
     * @note[short] Windows: 0x282d10
     * @note[short] Android
     */
    virtual TodoReturn updateSettingsFailed();
};
