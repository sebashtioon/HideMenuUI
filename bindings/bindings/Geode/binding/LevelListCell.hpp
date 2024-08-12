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

class LevelListCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelListCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListCell, TableViewCell)
    
private:
    [[deprecated("LevelListCell::create not implemented")]]
    /**
     * @note[short] Android
     */
    static LevelListCell* create(float p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x1eb538
     * @note[short] MacOS (Intel): 0x240be0
     * @note[short] Windows: 0xbc320
     * @note[short] iOS: 0x105284
     * @note[short] Android
     */
    void loadFromList(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x1fdf64
     * @note[short] MacOS (Intel): 0x2550b0
     * @note[short] Windows: 0xbd700
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelListCell::onListInfo not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fe064
     * @note[short] MacOS (Intel): 0x2551c0
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListCell::onViewProfile not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fe02c
     * @note[short] MacOS (Intel): 0x255190
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("LevelListCell::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fdf5c
     * @note[short] MacOS (Intel): 0x2550a0
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("LevelListCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fe074
     * @note[short] MacOS (Intel): 0x2551e0
     * @note[short] Android
     */
    virtual void draw();
public:
    GJLevelList* m_levelList;
    bool m_addingLevel;
};
