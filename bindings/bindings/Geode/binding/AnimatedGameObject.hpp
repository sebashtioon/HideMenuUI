#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"
#include "SpritePartDelegate.hpp"

class AnimatedGameObject : public EnhancedGameObject, public AnimatedSpriteDelegate, public SpritePartDelegate {
public:
    static constexpr auto CLASS_NAME = "AnimatedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedGameObject, EnhancedGameObject)
    
private:
    [[deprecated("AnimatedGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AnimatedGameObject* create(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::animationForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animationForID(int p0, int p1);
public:
    
private:
    [[deprecated("AnimatedGameObject::getTweenTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTweenTime(int p0, int p1);
public:
    
private:
    [[deprecated("AnimatedGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::playAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playAnimation(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setupAnimatedSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupAnimatedSize(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setupChildSprites not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupChildSprites();
public:
    
private:
    [[deprecated("AnimatedGameObject::updateChildSpriteColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChildSpriteColor(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::updateObjectAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateObjectAnimation();
public:

    /**
     * @note[short] MacOS (ARM): 0x1709b8
     * @note[short] MacOS (Intel): 0x1b2620
     * @note[short] Windows: 0x477be0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
    
private:
    [[deprecated("AnimatedGameObject::setChildColor not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1723f0
     * @note[short] MacOS (Intel): 0x1b4260
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::resetObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x172390
     * @note[short] MacOS (Intel): 0x1b41f0
     * @note[short] Android
     */
    virtual void resetObject();
public:
    
private:
    [[deprecated("AnimatedGameObject::activateObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x170860
     * @note[short] MacOS (Intel): 0x1b24a0
     * @note[short] Android
     */
    virtual void activateObject();
public:
    
private:
    [[deprecated("AnimatedGameObject::deactivateObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1708a4
     * @note[short] MacOS (Intel): 0x1b24e0
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setObjectColor not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x170a84
     * @note[short] MacOS (Intel): 0x1b2700
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x170ab8
     * @note[short] MacOS (Intel): 0x1b2730
     * @note[short] Windows: 0x477cf0
     * @note[short] Android
     */
    virtual void animationFinished(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x171b5c
     * @note[short] MacOS (Intel): 0x1b3a30
     * @note[short] Windows: 0x478fd0
     * @note[short] Android
     */
    virtual TodoReturn displayFrameChanged(cocos2d::CCObject* p0, gd::string p1);
};
