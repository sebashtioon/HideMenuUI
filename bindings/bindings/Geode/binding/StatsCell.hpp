#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"

class StatsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "StatsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsCell, TableViewCell)
    
private:
    [[deprecated("StatsCell::getTitleFromKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTitleFromKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0xb0a20
     * @note[short] iOS: 0x1067a4
     * @note[short] Android
     */
    void loadFromObject(StatsObject* p0);
    
private:
    [[deprecated("StatsCell::updateBGColor not implemented")]]
    /**
     * @note[short] iOS: 0x106a9c
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:
    
private:
    [[deprecated("StatsCell::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1f89a4
     * @note[short] MacOS (Intel): 0x24ea90
     * @note[short] Android
     */
    virtual bool init();
public:

    /**
     * @note[short] MacOS (ARM): 0x1f9510
     * @note[short] MacOS (Intel): 0x24f4a0
     * @note[short] Windows: 0xabd00
     * @note[short] Android
     */
    virtual void draw();
};
