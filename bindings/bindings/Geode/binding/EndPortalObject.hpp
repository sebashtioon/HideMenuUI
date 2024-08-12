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

class EndPortalObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EndPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndPortalObject, GameObject)
    
private:
    [[deprecated("EndPortalObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EndPortalObject* create();
public:

    /**
     * @note[short] MacOS (ARM): 0x3268cc
     * @note[short] MacOS (Intel): 0x39f810
     * @note[short] Windows: 0x134050
     * @note[short] Android
     */
    TodoReturn getSpawnPos();
    
private:
    [[deprecated("EndPortalObject::triggerObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x326838
     * @note[short] MacOS (Intel): 0x39f780
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("EndPortalObject::updateColors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColors(cocos2d::ccColor3B p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x326a8c
     * @note[short] MacOS (Intel): 0x39fa00
     * @note[short] Windows: 0x1342c0
     * @note[short] Android
     */
    TodoReturn updateEndPos(bool p0);
    
private:
    [[deprecated("EndPortalObject::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x326498
     * @note[short] MacOS (Intel): 0x39f390
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("EndPortalObject::setPosition not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x326930
     * @note[short] MacOS (Intel): 0x39f890
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
public:
    
private:
    [[deprecated("EndPortalObject::setVisible not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x326a28
     * @note[short] MacOS (Intel): 0x39f9a0
     * @note[short] Android
     */
    virtual void setVisible(bool p0);
public:
    GEODE_PAD(8);
};
