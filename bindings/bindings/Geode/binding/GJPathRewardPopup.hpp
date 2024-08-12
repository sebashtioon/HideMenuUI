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

class GJPathRewardPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPathRewardPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathRewardPopup, FLAlertLayer)
    
private:
    [[deprecated("GJPathRewardPopup::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x291828
     * @note[short] MacOS (Intel): 0x2fd890
     * @note[short] Android
     */
    static GJPathRewardPopup* create(int p0);
public:
    
private:
    [[deprecated("GJPathRewardPopup::closePopup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x295d7c
     * @note[short] MacOS (Intel): 0x302230
     * @note[short] Android
     */
    void closePopup();
public:

    /**
     * @note[short] MacOS (ARM): 0x295784
     * @note[short] MacOS (Intel): 0x301c60
     * @note[short] Windows: 0x277aa0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x295c20
     * @note[short] MacOS (Intel): 0x302100
     * @note[short] Windows: 0x277f80
     * @note[short] Android
     */
    void onClaim(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void keyBackClicked();
    int m_pathNumber;
};
