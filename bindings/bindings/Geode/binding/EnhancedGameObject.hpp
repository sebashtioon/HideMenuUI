#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class EnhancedGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EnhancedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnhancedGameObject, GameObject)
    
private:
    [[deprecated("EnhancedGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EnhancedGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::createRotateAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createRotateAction(float p0, int p1);
public:

    /**
     * @note[short] Windows: 0x19a7c0
     * @note[short] Android
     */
    bool init(char const* p0);
    
private:
    [[deprecated("EnhancedGameObject::previewAnimateOnTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn previewAnimateOnTrigger();
public:
    
private:
    [[deprecated("EnhancedGameObject::refreshRotateAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshRotateAction();
public:
    
private:
    [[deprecated("EnhancedGameObject::resetSyncedAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSyncedAnimation();
public:
    
private:
    [[deprecated("EnhancedGameObject::setupAnimationVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupAnimationVariables();
public:
    
private:
    [[deprecated("EnhancedGameObject::triggerAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAnimation();
public:
    
private:
    [[deprecated("EnhancedGameObject::updateRotateAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateRotateAction(float p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::updateState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateState(int p0);
public:

    /**
     * @note[short] Windows: 0x19c930
     * @note[short] Android
     */
    void updateUserCoin();
    
private:
    [[deprecated("EnhancedGameObject::waitForAnimationTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn waitForAnimationTrigger();
public:

    /**
     * @note[short] MacOS (ARM): 0x502290
     * @note[short] MacOS (Intel): 0x5d5220
     * @note[short] Windows: 0x19afb0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x501c24
     * @note[short] MacOS (Intel): 0x5d4a60
     * @note[short] Windows: 0x19a970
     * @note[short] Android
     */
    virtual void resetObject();
    
private:
    [[deprecated("EnhancedGameObject::deactivateObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5033f4
     * @note[short] MacOS (Intel): 0x5d80e0
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501ed8
     * @note[short] MacOS (Intel): 0x5d4d40
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("EnhancedGameObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x50345c
     * @note[short] MacOS (Intel): 0x5d8140
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::triggerActivated not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501d50
     * @note[short] MacOS (Intel): 0x5d4bd0
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::restoreObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501ca0
     * @note[short] MacOS (Intel): 0x5d4b00
     * @note[short] Android
     */
    virtual void restoreObject();
public:
    
private:
    [[deprecated("EnhancedGameObject::animationTriggered not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501e50
     * @note[short] MacOS (Intel): 0x5d4ca0
     * @note[short] Android
     */
    virtual void animationTriggered();
public:
    
private:
    [[deprecated("EnhancedGameObject::activatedByPlayer not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501d5c
     * @note[short] MacOS (Intel): 0x5d4be0
     * @note[short] Android
     */
    virtual void activatedByPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::hasBeenActivatedByPlayer not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501dbc
     * @note[short] MacOS (Intel): 0x5d4c30
     * @note[short] Android
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::resumeAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeAudio();
public:
    
private:
    [[deprecated("EnhancedGameObject::resumeAudioDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeAudioDelayed();
public:
    
private:
    [[deprecated("EnhancedGameObject::hasBeenActivated not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501e30
     * @note[short] MacOS (Intel): 0x5d4c80
     * @note[short] Android
     */
    virtual bool hasBeenActivated();
public:
    
private:
    [[deprecated("EnhancedGameObject::saveActiveColors not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501e60
     * @note[short] MacOS (Intel): 0x5d4cc0
     * @note[short] Android
     */
    virtual void saveActiveColors();
public:
    
private:
    [[deprecated("EnhancedGameObject::canAllowMultiActivate not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501b2c
     * @note[short] MacOS (Intel): 0x5d4760
     * @note[short] Android
     */
    virtual bool canAllowMultiActivate();
public:
    
private:
    [[deprecated("EnhancedGameObject::getHasSyncedAnimation not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1a1528
     * @note[short] MacOS (Intel): 0x1ed500
     * @note[short] Android
     */
    virtual bool getHasSyncedAnimation();
public:
    
private:
    [[deprecated("EnhancedGameObject::getHasRotateAction not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1a1530
     * @note[short] MacOS (Intel): 0x1ed510
     * @note[short] Android
     */
    virtual bool getHasRotateAction();
public:
    
private:
    [[deprecated("EnhancedGameObject::canMultiActivate not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501d2c
     * @note[short] MacOS (Intel): 0x5d4bb0
     * @note[short] Android
     */
    virtual bool canMultiActivate(bool p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::powerOnObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501cd8
     * @note[short] MacOS (Intel): 0x5d4b40
     * @note[short] Android
     */
    virtual TodoReturn powerOnObject(int p0);
public:
    
private:
    [[deprecated("EnhancedGameObject::powerOffObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x501cec
     * @note[short] MacOS (Intel): 0x5d4b60
     * @note[short] Android
     */
    virtual TodoReturn powerOffObject();
public:
    
private:
    [[deprecated("EnhancedGameObject::stateSensitiveOff not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x173994
     * @note[short] MacOS (Intel): 0x1b61c0
     * @note[short] Android
     */
    virtual TodoReturn stateSensitiveOff(GJBaseGameLayer* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2000b0
     * @note[short] MacOS (Intel): 0x2577a0
     * @note[short] Windows: 0x19ddf0
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float p0, int p1);
    
private:
    [[deprecated("EnhancedGameObject::updateAnimateOnTrigger not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x201478
     * @note[short] MacOS (Intel): 0x2596c0
     * @note[short] Android
     */
    virtual TodoReturn updateAnimateOnTrigger(bool p0);
public:
    GEODE_PAD(42);
    bool m_hasCustomAnimation;
    bool m_hasCustomRotation;
    bool m_disableRotation;
    GEODE_PAD(3);
    float m_rotationSpeed;
    GEODE_PAD(12);
    bool m_animationRandomizedStart;
    float m_animationSpeed;
    bool m_animationShouldUseSpeed;
    bool m_animateOnTrigger;
    bool m_disableDelayedLoop;
    bool m_disableAnimShine;
    int m_singleFrame;
    bool m_animationOffset;
    GEODE_PAD(15);
    bool m_animateOnlyWhenActive;
    bool m_isNoMultiActivate;
    bool m_isMultiActivate;
    GEODE_PAD(4);
};
