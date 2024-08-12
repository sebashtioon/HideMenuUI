#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"
#include "GJSpecialColorSelectDelegate.hpp"

class SetColorIDPopup : public SetIDPopup, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "SetColorIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetColorIDPopup, SetIDPopup)
    
private:
    [[deprecated("SetColorIDPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetColorIDPopup* create(int p0);
public:
    
private:
    [[deprecated("SetColorIDPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("SetColorIDPopup::onSelectSpecialColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x249f14
     * @note[short] MacOS (Intel): 0x2a8870
     * @note[short] Windows: 0x28a170
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* p0, int p1);
};
