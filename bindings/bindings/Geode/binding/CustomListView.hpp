#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomListView.hpp"

class CustomListView : public BoomListView {
public:
    static constexpr auto CLASS_NAME = "CustomListView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomListView, BoomListView)
	inline CustomListView() {}

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~CustomListView();

    /**
     * @note[short] MacOS (ARM): 0x1e7194
     * @note[short] MacOS (Intel): 0x23bc80
     * @note[short] Windows: 0xa8600
     * @note[short] iOS: 0x101f44
     * @note[short] Android
     */
    static CustomListView* create(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float width, float height);
    
private:
    [[deprecated("CustomListView::getCellHeight not implemented")]]
    /**
     * @note[short] iOS: 0x102794
     * @note[short] Android
     */
    float getCellHeight(BoomListType p0);
public:

    /**
     * @note[short] Windows: 0xaa280
     * @note[short] Android
     */
    TodoReturn reloadAll();

    /**
     * @note[short] MacOS (ARM): 0x1f3900
     * @note[short] MacOS (Intel): 0x2491d0
     * @note[short] Windows: 0xa9bb0
     * @note[short] Android
     */
    virtual void setupList(float p0);
    
private:
    [[deprecated("CustomListView::getListCell not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1e72a4
     * @note[short] MacOS (Intel): 0x23bdc0
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1e82d8
     * @note[short] MacOS (Intel): 0x23d950
     * @note[short] Windows: 0xa94f0
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* p0, int p1);
    int m_unknown;
};
