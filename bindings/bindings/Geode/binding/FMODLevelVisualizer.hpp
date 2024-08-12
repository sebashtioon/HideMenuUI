#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include <fmod.hpp>

class FMODLevelVisualizer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODLevelVisualizer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODLevelVisualizer, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x24d2e4
     * @note[short] MacOS (Intel): 0x2ac1c0
     * @note[short] Windows: 0x28c5d0
     * @note[short] Android
     */
    static FMODLevelVisualizer* create();

    /**
     * @note[short] MacOS (ARM): 0x24d7dc
     * @note[short] MacOS (Intel): 0x2ac670
     * @note[short] Windows: 0x28cb10
     * @note[short] Android
     */
    void updateVisualizer(float p0, float p1, float p2);
    
private:
    [[deprecated("FMODLevelVisualizer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x24d36c
     * @note[short] MacOS (Intel): 0x2ac230
     * @note[short] Android
     */
    virtual bool init();
public:
};
