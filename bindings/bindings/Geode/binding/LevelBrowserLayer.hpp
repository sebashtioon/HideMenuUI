#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "SetIDPopupDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "ShareCommentDelegate.hpp"

class LevelBrowserLayer : public cocos2d::CCLayerColor, public LevelManagerDelegate, public FLAlertLayerProtocol, public SetIDPopupDelegate, public SetTextPopupDelegate, public TableViewCellDelegate, public ShareCommentDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelBrowserLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelBrowserLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x3f8e04
     * @note[short] MacOS (Intel): 0x493f50
     * @note[short] Windows: 0x2b5530
     * @note[short] Android
     */
     ~LevelBrowserLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x2b5340
     * @note[short] iOS: 0x259734
     * @note[short] Android: Out of line
     */
     LevelBrowserLayer();

    /**
     * @note[short] MacOS (ARM): 0x3f8e88
     * @note[short] MacOS (Intel): 0x494190
     * @note[short] Windows: 0x2b5760
     * @note[short] iOS: 0x41d1c4
     * @note[short] Android
     */
    static LevelBrowserLayer* create(GJSearchObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f8e3c
     * @note[short] MacOS (Intel): 0x494150
     * @note[short] Windows: 0x2b5710
     * @note[short] iOS: 0x41d178
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJSearchObject* search);
    
private:
    [[deprecated("LevelBrowserLayer::createNewLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createNewLevel(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelBrowserLayer::createNewList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createNewList(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelBrowserLayer::createNewSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createNewSmartTemplate(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelBrowserLayer::deleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSelected();
public:
    
private:
    [[deprecated("LevelBrowserLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLayer(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x2bb8f0
     * @note[short] Android
     */
    cocos2d::CCArray* getItemsMatchingSearch(cocos2d::CCArray* p0, gd::string p1, GJSearchObject* p2);

    /**
     * @note[short] MacOS (ARM): 0x3fdccc
     * @note[short] MacOS (Intel): 0x4993a0
     * @note[short] Windows: 0x2b8750
     * @note[short] Android
     */
    gd::string getSearchTitle();

    /**
     * @note[short] MacOS (ARM): 0x3f8fc4
     * @note[short] MacOS (Intel): 0x494360
     * @note[short] Windows: 0x2b57d0
     * @note[short] iOS: 0x41d238
     * @note[short] Android
     */
    bool init(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0x2b70e0
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x3fc3cc
     * @note[short] MacOS (Intel): 0x497710
     * @note[short] Windows: 0x2b72b0
     * @note[short] Android
     */
    void loadPage(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0x2bb510
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2baf60
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fabe0
     * @note[short] MacOS (Intel): 0x496030
     * @note[short] Windows: 0x2bbc80
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2bada0
     * @note[short] Android
     */
    void onFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b9530
     * @note[short] Android
     */
    void onGoToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b93b0
     * @note[short] Android
     */
    void onGoToLastPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3faab0
     * @note[short] MacOS (Intel): 0x495f20
     * @note[short] Windows: 0x2b9420
     * @note[short] Android
     */
    void onGoToPage(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelBrowserLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b9b60
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2ba9e0
     * @note[short] Android
     */
    void onLocalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2babd0
     * @note[short] Android
     */
    void onMyOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2ba530
     * @note[short] Android
     */
    void onNew(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fa970
     * @note[short] MacOS (Intel): 0x495dc0
     * @note[short] Windows: 0x2b9910
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fa93c
     * @note[short] MacOS (Intel): 0x495d80
     * @note[short] Windows: 0x2b9990
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fba5c
     * @note[short] MacOS (Intel): 0x496e10
     * @note[short] Windows: 0x2bb3d0
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2bb100
     * @note[short] Android
     */
    void onRemoveAllFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2bae80
     * @note[short] Android
     */
    void onSaved(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2ba900
     * @note[short] Android
     */
    void onSavedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2bb5b0
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2bbfc0
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelBrowserLayer::reloadAllObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void reloadAllObjects();
public:
    
private:
    [[deprecated("LevelBrowserLayer::setSearchObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3fa8f4
     * @note[short] MacOS (Intel): 0x495d30
     * @note[short] Android
     */
    void setSearchObject(GJSearchObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3fda3c
     * @note[short] MacOS (Intel): 0x4990a0
     * @note[short] Windows: 0x2b8440
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x3ffc14
     * @note[short] MacOS (Intel): 0x49b600
     * @note[short] Windows: 0x2bc7d0
     * @note[short] Android
     */
    void show();
    
private:
    [[deprecated("LevelBrowserLayer::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateLevelsLabel();
public:

    /**
     * @note[short] Windows: 0x2b97e0
     * @note[short] Android
     */
    void updatePageLabel();

    /**
     * @note[short] MacOS (ARM): 0x3ff9cc
     * @note[short] MacOS (Intel): 0x49b3f0
     * @note[short] Windows: 0x2bc620
     * @note[short] Android
     */
    virtual void onEnter();
    
private:
    [[deprecated("LevelBrowserLayer::onEnterTransitionDidFinish not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x49b590
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();
public:

    /**
     * @note[short] MacOS (ARM): 0x3ffc98
     * @note[short] MacOS (Intel): 0x49b680
     * @note[short] Windows: 0x3b850
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ffbc4
     * @note[short] MacOS (Intel): 0x49b5a0
     * @note[short] Windows: 0x2bc760
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3fedb8
     * @note[short] MacOS (Intel): 0x49a740
     * @note[short] Windows: 0x2b9aa0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3feddc
     * @note[short] MacOS (Intel): 0x49a780
     * @note[short] Windows: 0x2b9ac0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x3fe3d0
     * @note[short] MacOS (Intel): 0x499c80
     * @note[short] Windows: 0x2b8fb0
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x3fe500
     * @note[short] MacOS (Intel): 0x499de0
     * @note[short] Windows: 0x2b90e0
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3fe5ec
     * @note[short] MacOS (Intel): 0x499ec0
     * @note[short] Windows: 0x2b9130
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x3fed04
     * @note[short] MacOS (Intel): 0x49a690
     * @note[short] Windows: 0x2b9a10
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ff0f8
     * @note[short] MacOS (Intel): 0x49aa70
     * @note[short] Windows: 0x2baac0
     * @note[short] Android
     */
    virtual void shareCommentClosed(gd::string p0, ShareCommentLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ff1dc
     * @note[short] MacOS (Intel): 0x49ab50
     * @note[short] Windows: 0x2bb830
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x3ff3dc
     * @note[short] MacOS (Intel): 0x49ada0
     * @note[short] Windows: 0x2bc060
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3febf0
     * @note[short] MacOS (Intel): 0x49a560
     * @note[short] Windows: 0x2b95e0
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3ffcc0
     * @note[short] MacOS (Intel): 0x49b700
     * @note[short] Windows: 0x2b54e0
     * @note[short] Android
     */
    virtual void updateResultArray(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x3ffa78
     * @note[short] MacOS (Intel): 0x49b470
     * @note[short] Windows: 0x2bc6c0
     * @note[short] Android
     */
    virtual void cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    bool m_unk;
    bool m_allSelected;
    TextArea* m_noInternet;
    GJListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_lastBtn;
    CCMenuItemSpriteExtra* m_cancelSearchBtn;
    CCMenuItemSpriteExtra* m_refreshBtn;
    cocos2d::CCArray* m_levels;
    GJSearchObject* m_searchObject;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCLabelBMFont* m_pageText;
    CCMenuItemSpriteExtra* m_pageBtn;
    cocos2d::CCLabelBMFont* m_folderText;
    CCMenuItemSpriteExtra* m_folderBtn;
    CCMenuItemToggler* m_allObjectsToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    LoadingCircle* m_circle;
    int m_lastPage;
    bool m_isOverlay;
    cocos2d::CCScene* m_scene;
    int m_zOffset;
    bool m_unk2;
    int m_listHeight;
    float m_unkFloat;
    float m_unkFloat2;
    TableViewCellDelegate* m_delegate;
    bool m_cached;
};
