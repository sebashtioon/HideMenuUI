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

class SetupRandAdvTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandAdvTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandAdvTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupRandAdvTriggerPopup* create(RandTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::addChance not implemented")]]
    /**
     * @note[short] Android
     */
    void addChance(int p0, int p1);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::addChanceToObject not implemented")]]
    /**
     * @note[short] Android
     */
    void addChanceToObject(RandTriggerGameObject* p0, int p1, int p2);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::callRemoveFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void callRemoveFromGroup(float p0);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(RandTriggerGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::onAddChance not implemented")]]
    /**
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::onRemoveFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::removeGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    void removeGroupID(int p0);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::removeGroupIDFromObject not implemented")]]
    /**
     * @note[short] Android
     */
    void removeGroupIDFromObject(RandTriggerGameObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::updateGroupIDButtons not implemented")]]
    /**
     * @note[short] Android
     */
    void updateGroupIDButtons();
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x318dc4
     * @note[short] MacOS (Intel): 0x390790
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void textChanged(CCTextInputNode* p0);
};
