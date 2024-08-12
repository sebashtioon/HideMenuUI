#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class EditTriggersPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditTriggersPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditTriggersPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x239848
     * @note[short] MacOS (Intel): 0x296a30
     * @note[short] Windows: 0x27c920
     * @note[short] Android
     */
    static EditTriggersPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x2399d0
     * @note[short] MacOS (Intel): 0x296c60
     * @note[short] Windows: 0x27ca30
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("EditTriggersPopup::determineStartValues not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x296f20
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("EditTriggersPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x296f30
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
