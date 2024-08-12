#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FriendRequestDelegate.hpp"

class FRequestProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public FriendRequestDelegate {
public:
    static constexpr auto CLASS_NAME = "FRequestProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FRequestProfilePage, FLAlertLayer)
    
private:
    [[deprecated("FRequestProfilePage::create not implemented")]]
    /**
     * @note[short] Android
     */
    static FRequestProfilePage* create(bool p0);
public:
    
private:
    [[deprecated("FRequestProfilePage::deleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSelected();
public:

    /**
     * @note[short] Windows: 0x139500
     * @note[short] Android
     */
    bool init(bool p0);
    
private:
    [[deprecated("FRequestProfilePage::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:
    
private:
    [[deprecated("FRequestProfilePage::loadPage not implemented")]]
    /**
     * @note[short] Android
     */
    void loadPage(int p0);
public:
    
private:
    [[deprecated("FRequestProfilePage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onDeleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onSentRequests not implemented")]]
    /**
     * @note[short] Android
     */
    void onSentRequests(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onToggleAllObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x13b100
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);
    
private:
    [[deprecated("FRequestProfilePage::untoggleAll not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn untoggleAll();
public:
    
private:
    [[deprecated("FRequestProfilePage::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("FRequestProfilePage::updatePageArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows();
public:
    
private:
    [[deprecated("FRequestProfilePage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6a53c0
     * @note[short] MacOS (Intel): 0x79d050
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x6a53b4
     * @note[short] MacOS (Intel): 0x79d020
     * @note[short] Windows: 0x13a960
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6a52a8
     * @note[short] MacOS (Intel): 0x79cf30
     * @note[short] Windows: 0x13a740
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x6a53f8
     * @note[short] MacOS (Intel): 0x79d090
     * @note[short] Windows: 0x13a970
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x6a5480
     * @note[short] MacOS (Intel): 0x79d100
     * @note[short] Windows: 0x13a9c0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x6a563c
     * @note[short] MacOS (Intel): 0x79d2a0
     * @note[short] Windows: 0x13ab30
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x6a5a00
     * @note[short] MacOS (Intel): 0x79d660
     * @note[short] Windows: 0x13b2a0
     * @note[short] Android
     */
    virtual TodoReturn loadFRequestsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x6a5b0c
     * @note[short] MacOS (Intel): 0x79d750
     * @note[short] Windows: 0x13b320
     * @note[short] Android
     */
    virtual TodoReturn loadFRequestsFailed(char const* p0, GJErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x6a5c6c
     * @note[short] MacOS (Intel): 0x79d8a0
     * @note[short] Windows: 0x13b3c0
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x6a5c38
     * @note[short] MacOS (Intel): 0x79d860
     * @note[short] Windows: 0x13b3a0
     * @note[short] Android
     */
    virtual TodoReturn forceReloadRequests(bool p0);
};
