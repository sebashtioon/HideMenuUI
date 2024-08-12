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

class FindObjectPopup : public SetIDPopup {
public:
    static constexpr auto CLASS_NAME = "FindObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindObjectPopup, SetIDPopup)
    
private:
    [[deprecated("FindObjectPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static FindObjectPopup* create();
public:
    
private:
    [[deprecated("FindObjectPopup::onFindObjectID not implemented")]]
    /**
     * @note[short] Android
     */
    void onFindObjectID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FindObjectPopup::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x24a3c8
     * @note[short] MacOS (Intel): 0x2a8eb0
     * @note[short] Android
     */
    virtual bool init();
public:
};
