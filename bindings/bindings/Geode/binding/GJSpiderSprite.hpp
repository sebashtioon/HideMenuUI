#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJRobotSprite.hpp"

class GJSpiderSprite : public GJRobotSprite {
public:
    static constexpr auto CLASS_NAME = "GJSpiderSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpiderSprite, GJRobotSprite)

    /**
     * @note[short] MacOS (ARM): 0x50fc60
     * @note[short] MacOS (Intel): 0x5e6690
     * @note[short] Windows: 0x2957b0
     * @note[short] Android
     */
    static GJSpiderSprite* create(int p0);
    
private:
    [[deprecated("GJSpiderSprite::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x50fd94
     * @note[short] MacOS (Intel): 0x5e67e0
     * @note[short] Android
     */
    bool init(int p0);
public:
};
