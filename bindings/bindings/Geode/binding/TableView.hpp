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
#include "CCScrollLayerExt.hpp"
#include "CCScrollLayerExtDelegate.hpp"

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
    static constexpr auto CLASS_NAME = "TableView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TableView, CCScrollLayerExt)
	inline TableView(cocos2d::CCRect rect) : CCScrollLayerExt(rect) {
		m_touchStartPosition2 = cocos2d::CCPointMake(0.f, 0.f);
		m_unknown2 = cocos2d::CCPointMake(0.f, 0.f);
		m_touchPosition2 = cocos2d::CCPointMake(0.f, 0.f);
		m_tableDelegate = nullptr;
		m_dataSource = nullptr;
		m_cellDelegate = nullptr;
		m_unused2 = false;
		m_vScrollbarVisible = false;
		m_hScrollbarVisible = false;
		m_disableHorizontal = false;
		m_unused3 = nullptr;
		m_delegate = this;
		m_touchOutOfBoundary = false;
		m_array2 = cocos2d::CCArray::create();
		m_array2->retain();
		m_cellArray = cocos2d::CCArray::create();
		m_cellArray->retain();
		m_array3 = cocos2d::CCArray::create();
		m_array3->retain();
		m_touchLastY = 0.f;
		m_cancellingTouches = false;
		m_idk2 = false;
	}

    /**
     * @note[short] MacOS (ARM): 0x54dea8
     * @note[short] MacOS (Intel): 0x62cd90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30f340
     * @note[short] Android
     */
    static TableView* create(TableViewDelegate* tvd, TableViewDataSource* tvds, TableViewCellDelegate* tvcd, cocos2d::CCRect rect);
    
private:
    [[deprecated("TableView::cancelAndStoleTouch not implemented")]]
    /**
     * @note[short] iOS: 0x310134
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("TableView::cellForRowAtIndexPath not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cellForRowAtIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::cellForTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cellForTouch(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfCell(cocos2d::CCPoint& p0, float p1);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfContent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfContent(float p0);
public:
    
private:
    [[deprecated("TableView::checkFirstCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkFirstCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::checkLastCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkLastCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::claimTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimTouch(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("TableView::deleteTableViewCell not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x54e858
     * @note[short] MacOS (Intel): 0x62d840
     * @note[short] Android
     */
    void deleteTableViewCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::dequeueReusableCellWithIdentifier not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dequeueReusableCellWithIdentifier(char const* p0);
public:
    
private:
    [[deprecated("TableView::initTableViewCells not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn initTableViewCells();
public:
    
private:
    [[deprecated("TableView::isDuplicateIndexPath not implemented")]]
    /**
     * @note[short] Android
     */
    bool isDuplicateIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::isDuplicateInVisibleCellArray not implemented")]]
    /**
     * @note[short] Android
     */
    bool isDuplicateInVisibleCellArray(CCIndexPath* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x54eb08
     * @note[short] MacOS (Intel): 0x62db70
     * @note[short] Windows: 0x73810
     * @note[short] iOS: 0x30fbfc
     * @note[short] Android
     */
    void reloadData();
    
private:
    [[deprecated("TableView::removeIndexPathFromPathAddedArray not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeIndexPathFromPathAddedArray(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::scrollToIndexPath not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scrollToIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::touchFinish not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn touchFinish(cocos2d::CCTouch* p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): 0x62e110
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): 0x62e120
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x54f1d8
     * @note[short] MacOS (Intel): 0x62e2c0
     * @note[short] Windows: 0x73d60
     * @note[short] iOS: 0x3101d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x54fc20
     * @note[short] MacOS (Intel): 0x62ee00
     * @note[short] Windows: 0x73ff0
     * @note[short] iOS: 0x310988
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x54f9d8
     * @note[short] MacOS (Intel): 0x62ebc0
     * @note[short] Windows: 0x73f10
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x54fb44
     * @note[short] MacOS (Intel): 0x62ed40
     * @note[short] Windows: 0x73f70
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x54f060
     * @note[short] MacOS (Intel): 0x62e130
     * @note[short] Windows: 0x3d720
     * @note[short] iOS: 0x310098
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x54fd14
     * @note[short] MacOS (Intel): 0x62eef0
     * @note[short] Windows: 0x745a0
     * @note[short] iOS: 0x310a50
     * @note[short] Android
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void scrollViewTouchMoving(CCScrollLayerExt* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void scrollViewDidEndMoving(CCScrollLayerExt* p0);
    bool m_touchOutOfBoundary;
    cocos2d::CCTouch* m_touchStart;
    cocos2d::CCPoint m_touchStartPosition2;
    cocos2d::CCPoint m_unknown2;
    cocos2d::CCPoint m_touchPosition2;
    void* m_idk;
    bool m_touchMoved;
    cocos2d::CCArray* m_cellArray;
    cocos2d::CCArray* m_array2;
    cocos2d::CCArray* m_array3;
    TableViewDelegate* m_tableDelegate;
    
private:
    [[deprecated("TableView::getCellDelegateType not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getCellDelegateType();
public:
    TableViewDataSource* m_dataSource;
    TableViewCellDelegate* m_cellDelegate;
    bool m_unused2;
    void* m_unused3;
    int m_unused4;
    float m_touchLastY;
    bool m_cancellingTouches;
    bool m_idk2;
};
