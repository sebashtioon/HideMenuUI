#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCIndexPath.hpp"

class TableViewCell : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "TableViewCell";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TableViewCell, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x553cfc
     * @note[short] MacOS (Intel): 0x633d10
     * @note[short] Windows: 0x755e0
     * @note[short] iOS: 0x3a740
     * @note[short] Android
     */
     TableViewCell(char const* p0, float p1, float p2);
    
private:
    [[deprecated("TableViewCell::updateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateVisibility();
public:
    void* m_unknown;
    TableView* m_tableView;
    CCIndexPath m_indexPath;
    void* m_unknown2;
    gd::string m_unknownString;
    float m_width;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
    BoomListType m_listType;
};
