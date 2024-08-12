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

class MapPackCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "MapPackCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MapPackCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1ea984
     * @note[short] MacOS (Intel): 0x23ffb0
     * @note[short] Windows: 0xaf940
     * @note[short] Android
     */
    void loadFromMapPack(GJMapPack* p0);
    
private:
    [[deprecated("MapPackCell::onClaimReward not implemented")]]
    /**
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MapPackCell::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MapPackCell::playCompleteEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCompleteEffect();
public:
    
private:
    [[deprecated("MapPackCell::reloadCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reloadCell();
public:
    
private:
    [[deprecated("MapPackCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1f824c
     * @note[short] MacOS (Intel): 0x24e2e0
     * @note[short] Windows: 0xaf8e0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("MapPackCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1f8744
     * @note[short] MacOS (Intel): 0x24e7d0
     * @note[short] Android
     */
    virtual void draw();
public:
};
