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

class GJLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLevelScoreCell, TableViewCell)

    /**
     * @note[short] Windows: 0xb7760
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJLevelScoreCell::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJLevelScoreCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:
    
private:
    [[deprecated("GJLevelScoreCell::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fb1a4
     * @note[short] MacOS (Intel): 0x251a10
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJLevelScoreCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fb1ec
     * @note[short] MacOS (Intel): 0x251a60
     * @note[short] Android
     */
    virtual void draw();
public:
};
