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

class SetupSequenceTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSequenceTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSequenceTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupSequenceTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupSequenceTriggerPopup* create(SequenceTriggerGameObject* p0);
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(SequenceTriggerGameObject* p0);
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::onAddChance not implemented")]]
    /**
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::onChangeOrder not implemented")]]
    /**
     * @note[short] Android
     */
    void onChangeOrder(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::onDeleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::onSelect not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::updateGroupIDButtons not implemented")]]
    /**
     * @note[short] Android
     */
    void updateGroupIDButtons();
public:
    
private:
    [[deprecated("SetupSequenceTriggerPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x443f38
     * @note[short] MacOS (Intel): 0x4e8ae0
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
