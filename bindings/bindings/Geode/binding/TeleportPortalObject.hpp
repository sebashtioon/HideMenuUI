#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "RingObject.hpp"

class TeleportPortalObject : public RingObject {
public:
    static constexpr auto CLASS_NAME = "TeleportPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TeleportPortalObject, RingObject)

    /**
     * @note[short] MacOS (ARM): 0x175db8
     * @note[short] MacOS (Intel): 0x1b8ac0
     * @note[short] Windows: 0x485d20
     * @note[short] Android
     */
    static TeleportPortalObject* create(char const* p0, bool p1);

    /**
     * @note[short] Windows: 0x485fa0
     * @note[short] Android
     */
    TodoReturn getTeleportXOff(cocos2d::CCNode* p0);

    /**
     * @note[short] Windows: 0x4797a0
     * @note[short] Android
     */
    bool init(char const* p0, bool p1);
    
private:
    [[deprecated("TeleportPortalObject::setPositionOverride not implemented")]]
    /**
     * @note[short] Android
     */
    void setPositionOverride(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setStartPosOverride not implemented")]]
    /**
     * @note[short] Android
     */
    void setStartPosOverride(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setPosition not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x176110
     * @note[short] MacOS (Intel): 0x1b8e60
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setRotation not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1761b8
     * @note[short] MacOS (Intel): 0x1b8f10
     * @note[short] Android
     */
    virtual void setRotation(float p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setStartPos not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x175f78
     * @note[short] MacOS (Intel): 0x1b8cb0
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::customObjectSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1780a8
     * @note[short] MacOS (Intel): 0x1bb5f0
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("TeleportPortalObject::getSaveString not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17631c
     * @note[short] MacOS (Intel): 0x1b9060
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::addToGroup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x176234
     * @note[short] MacOS (Intel): 0x1b8fa0
     * @note[short] Android
     */
    virtual void addToGroup(int p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::removeFromGroup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1762b8
     * @note[short] MacOS (Intel): 0x1b9000
     * @note[short] Android
     */
    virtual void removeFromGroup(int p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setRotation2 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x176228
     * @note[short] MacOS (Intel): 0x1b8f70
     * @note[short] Android
     */
    virtual void setRotation2(float p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::addToGroup2 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x17622c
     * @note[short] MacOS (Intel): 0x1b8f80
     * @note[short] Android
     */
    virtual void addToGroup2(int p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::removeFromGroup2 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x176230
     * @note[short] MacOS (Intel): 0x1b8f90
     * @note[short] Android
     */
    virtual void removeFromGroup2(int p0);
public:
    TeleportPortalObject* m_orangePortal;
    bool m_isYellowPortal;
    float m_teleportYOffset;
    bool m_teleportEase;
    bool m_staticForceEnabled;
    int m_staticForce;
    bool m_redirectForceEnabled;
    float m_redirectForceMod;
    float m_redirectForceMin;
    float m_redirectForceMax;
    bool m_saveOffset;
    bool m_ignoreX;
    bool m_ignoreY;
    int m_gravityMode;
    bool m_property443;
    bool m_property464;
    bool m_property510;
    bool m_property591;
    GJBaseGameLayer* m_gameLayer;
};
