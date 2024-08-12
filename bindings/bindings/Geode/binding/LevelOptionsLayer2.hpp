#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelOptionsLayer.hpp"

class LevelOptionsLayer2 : public LevelOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer2, LevelOptionsLayer)
    
private:
    [[deprecated("LevelOptionsLayer2::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2140e4
     * @note[short] MacOS (Intel): 0x26da60
     * @note[short] Android
     */
    static LevelOptionsLayer2* create(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("LevelOptionsLayer2::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x214468
     * @note[short] MacOS (Intel): 0x26dec0
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x214564
     * @note[short] MacOS (Intel): 0x26dfc0
     * @note[short] Windows: 0x304380
     * @note[short] Android
     */
    virtual void setupOptions();
};
