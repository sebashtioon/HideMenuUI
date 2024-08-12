#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewDelegate.hpp"
#include "TableViewDataSource.hpp"

class BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
    static constexpr auto CLASS_NAME = "BoomListView";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListView, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BoomListView();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ~BoomListView();
    
private:
    [[deprecated("BoomListView::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x29dce8
     * @note[short] MacOS (Intel): 0x30ba20
     * @note[short] Android
     */
    static BoomListView* create(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);
public:
    
private:
    [[deprecated("BoomListView::addObjectToList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectToList(cocos2d::CCNode* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x29ddf4
     * @note[short] MacOS (Intel): 0x30bb50
     * @note[short] Windows: 0x3b190
     * @note[short] iOS: 0x1d978c
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);
    
private:
    [[deprecated("BoomListView::lockList not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x29df8c
     * @note[short] MacOS (Intel): 0x30bd00
     * @note[short] Android
     */
    void lockList(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x29dff8
     * @note[short] MacOS (Intel): 0x30bd80
     * @note[short] Windows: 0x3b500
     * @note[short] iOS: 0x1d9980
     * @note[short] Android
     */
    virtual void setupList(float p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] MacOS (ARM): 0x29e088
     * @note[short] MacOS (Intel): 0x30be60
     * @note[short] Windows: 0x3b590
     * @note[short] Android
     */
    virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] MacOS (ARM): 0x29e0a0
     * @note[short] MacOS (Intel): 0x30bea0
     * @note[short] Windows: 0x3b5a0
     * @note[short] Android
     */
    virtual int numberOfRowsInSection(unsigned p0, TableView* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual unsigned int numberOfSectionsInTableView(TableView* p0);

    /**
     * @note[short] MacOS (ARM): 0x29e0c0
     * @note[short] MacOS (Intel): 0x30bef0
     * @note[short] Windows: 0x3b5c0
     * @note[short] Android
     */
    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    /**
     * @note[short] MacOS (ARM): 0x29e1dc
     * @note[short] MacOS (Intel): 0x30c000
     * @note[short] Windows: 0x3b650
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x29e370
     * @note[short] MacOS (Intel): 0x30c240
     * @note[short] Windows: 0x3b7c0
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* p0, int p1);
    TableView* m_tableView;
    cocos2d::CCArray* m_entries;
    BoomListType m_type;
    float m_height;
    float m_width;
    float m_itemSeparation;
    int m_currentPage;
    bool m_locked;
};
