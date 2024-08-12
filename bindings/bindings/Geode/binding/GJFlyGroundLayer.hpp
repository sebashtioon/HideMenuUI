#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGroundLayer.hpp"

class GJFlyGroundLayer : public GJGroundLayer {
public:
    static constexpr auto CLASS_NAME = "GJFlyGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJFlyGroundLayer, GJGroundLayer)
    
private:
    [[deprecated("GJFlyGroundLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJFlyGroundLayer* create();
public:
    
private:
    [[deprecated("GJFlyGroundLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x51d4e4
     * @note[short] MacOS (Intel): 0x5f54c0
     * @note[short] Android
     */
    virtual bool init();
public:
};
