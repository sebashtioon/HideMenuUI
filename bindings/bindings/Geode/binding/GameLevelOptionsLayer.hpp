#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class GameLevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameLevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameLevelOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): 0x24edd8
     * @note[short] MacOS (Intel): 0x2ade70
     * @note[short] Windows: 0x28e750
     * @note[short] Android
     */
    static GameLevelOptionsLayer* create(GJGameLevel* p0);
    
private:
    [[deprecated("GameLevelOptionsLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x24ef94
     * @note[short] MacOS (Intel): 0x2ae0f0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x24effc
     * @note[short] MacOS (Intel): 0x2ae150
     * @note[short] Windows: 0x28e8b0
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x24f068
     * @note[short] MacOS (Intel): 0x2ae1c0
     * @note[short] Windows: 0x28e930
     * @note[short] Android
     */
    virtual void didToggle(int p0);
    GJGameLevel* m_level;
};
