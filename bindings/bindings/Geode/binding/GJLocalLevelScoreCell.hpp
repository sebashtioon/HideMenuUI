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

class GJLocalLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLocalLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLocalLevelScoreCell, TableViewCell)

    /**
     * @note[short] Windows: 0xb7360
     * @note[short] Android
     */
    void loadFromScore(GJLocalScore* p0);
    
private:
    [[deprecated("GJLocalLevelScoreCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1fb06c
     * @note[short] MacOS (Intel): 0x251820
     * @note[short] Windows: 0x3b9a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fb078
     * @note[short] MacOS (Intel): 0x251840
     * @note[short] Windows: 0xabd00
     * @note[short] Android
     */
    virtual void draw();
};
