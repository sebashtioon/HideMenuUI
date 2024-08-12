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

class StarInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "StarInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StarInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x6d37d4
     * @note[short] MacOS (Intel): 0x7cea20
     * @note[short] Windows: 0x3a42a0
     * @note[short] Android
     */
    static StarInfoPopup* create(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, bool p9);

    /**
     * @note[short] MacOS (ARM): 0x6d05b0
     * @note[short] MacOS (Intel): 0x7cb650
     * @note[short] Windows: 0x3a3d10
     * @note[short] Android
     */
    static StarInfoPopup* createFromString(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x6d081c
     * @note[short] MacOS (Intel): 0x7cb8e0
     * @note[short] Windows: 0x3a3ff0
     * @note[short] Android
     */
    static StarInfoPopup* createFromStringMoons(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x6d392c
     * @note[short] MacOS (Intel): 0x7cebb0
     * @note[short] Windows: 0x3a43e0
     * @note[short] Android
     */
    bool init(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, bool p9);
    
private:
    [[deprecated("StarInfoPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6d4180
     * @note[short] MacOS (Intel): 0x7cf3a0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("StarInfoPopup::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6d41bc
     * @note[short] MacOS (Intel): 0x7cf3d0
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
