#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DungeonBarsSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "DungeonBarsSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DungeonBarsSprite, cocos2d::CCNode)
    
private:
    [[deprecated("DungeonBarsSprite::create not implemented")]]
    /**
     * @note[short] Android
     */
    static DungeonBarsSprite* create();
public:
    
private:
    [[deprecated("DungeonBarsSprite::animateOutBars not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animateOutBars();
public:
    
private:
    [[deprecated("DungeonBarsSprite::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x414e48
     * @note[short] MacOS (Intel): 0x4b2440
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("DungeonBarsSprite::visit not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x414ec8
     * @note[short] MacOS (Intel): 0x4b24c0
     * @note[short] Android
     */
    virtual void visit();
public:
};
