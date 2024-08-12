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

class LevelCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1f4a04
     * @note[short] MacOS (Intel): 0x24a640
     * @note[short] Windows: 0xabe60
     * @note[short] iOS: 0x10d72c
     * @note[short] Android
     */
     LevelCell(char const* p0, float p1, float p2);
    
private:
    [[deprecated("LevelCell::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1f4904
     * @note[short] MacOS (Intel): 0x24a540
     * @note[short] iOS: 0x10d698
     * @note[short] Android
     */
    static LevelCell* create(float p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x1f5430
     * @note[short] MacOS (Intel): 0x24b030
     * @note[short] Windows: 0xac110
     * @note[short] iOS: 0x10e0dc
     * @note[short] Android
     */
    void loadCustomLevelCell();

    /**
     * @note[short] MacOS (ARM): 0x1ea748
     * @note[short] MacOS (Intel): 0x23fd90
     * @note[short] Windows: 0xabf30
     * @note[short] iOS: 0x104524
     * @note[short] Android
     */
    void loadFromLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x1f4aa4
     * @note[short] MacOS (Intel): 0x24a710
     * @note[short] Windows: 0xaea50
     * @note[short] iOS: 0x10d7cc
     * @note[short] Android
     */
    void loadLocalLevelCell();

    /**
     * @note[short] MacOS (ARM): 0x1f7d40
     * @note[short] MacOS (Intel): 0x24dca0
     * @note[short] Windows: 0xaf4e0
     * @note[short] iOS: 0x1106a4
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f7d28
     * @note[short] MacOS (Intel): 0x24dc80
     * @note[short] Windows: 0xac0f0
     * @note[short] iOS: 0x11068c
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f7ea4
     * @note[short] MacOS (Intel): 0x24de00
     * @note[short] Windows: 0xaf700
     * @note[short] iOS: 0x1107dc
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelCell::updateBGColor not implemented")]]
    /**
     * @note[short] iOS: 0x1046b8
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1f4538
     * @note[short] MacOS (Intel): 0x24a0e0
     * @note[short] Windows: 0xaf250
     * @note[short] iOS: 0x10d484
     * @note[short] Android
     */
    void updateCellMode(int p0);
    
private:
    [[deprecated("LevelCell::updateToggle not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1f451c
     * @note[short] MacOS (Intel): 0x24a0b0
     * @note[short] Android
     */
    void updateToggle();
public:

    /**
     * @note[short] MacOS (ARM): 0x1f4a88
     * @note[short] MacOS (Intel): 0x24a6e0
     * @note[short] Windows: 0xabf10
     * @note[short] iOS: 0x10d7b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1f7ee4
     * @note[short] MacOS (Intel): 0x24de30
     * @note[short] Windows: 0xaf740
     * @note[short] iOS: 0x11081c
     * @note[short] Android
     */
    virtual void draw();
    CCMenuItemSpriteExtra* m_button;
    GJGameLevel* m_level;
    bool m_cellDrawn;
    CCMenuItemToggler* m_toggler;
    cocos2d::CCPoint m_point;
    cocos2d::CCMenu* m_mainMenu;
    bool m_compactView;
    int m_cellMode;
};
