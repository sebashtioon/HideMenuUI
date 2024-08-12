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

class SmartTemplateCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SmartTemplateCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartTemplateCell, TableViewCell)

    /**
     * @note[short] Windows: 0xbbc50
     * @note[short] Android
     */
    void loadFromObject(GJSmartTemplate* p0);
    
private:
    [[deprecated("SmartTemplateCell::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xbc040
     * @note[short] Android
     */
    void updateBGColor(int p0);
    
private:
    [[deprecated("SmartTemplateCell::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fdb3c
     * @note[short] MacOS (Intel): 0x254b10
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("SmartTemplateCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fdbf8
     * @note[short] MacOS (Intel): 0x254be0
     * @note[short] Android
     */
    virtual void draw();
public:
};
