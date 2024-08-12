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
#include "MessageListDelegate.hpp"

class MessagesProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public MessageListDelegate {
public:
    static constexpr auto CLASS_NAME = "MessagesProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MessagesProfilePage, FLAlertLayer)
    
private:
    [[deprecated("MessagesProfilePage::create not implemented")]]
    /**
     * @note[short] Android
     */
    static MessagesProfilePage* create(bool p0);
public:

    /**
     * @note[short] Windows: 0x316cf0
     * @note[short] Android
     */
    TodoReturn deleteSelected();

    /**
     * @note[short] Windows: 0x315d70
     * @note[short] Android
     */
    bool init(bool p0);
    
private:
    [[deprecated("MessagesProfilePage::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:
    
private:
    [[deprecated("MessagesProfilePage::loadPage not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1d7b74
     * @note[short] MacOS (Intel): 0x22a2b0
     * @note[short] Android
     */
    void loadPage(int p0);
public:

    /**
     * @note[short] Windows: 0x317110
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MessagesProfilePage::onDeleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onNextPage not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1d7b04
     * @note[short] MacOS (Intel): 0x22a220
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onPrevPage not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1d7af8
     * @note[short] MacOS (Intel): 0x22a200
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onSentMessages not implemented")]]
    /**
     * @note[short] Android
     */
    void onSentMessages(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onToggleAllObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x317690
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);
    
private:
    [[deprecated("MessagesProfilePage::untoggleAll not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn untoggleAll();
public:
    
private:
    [[deprecated("MessagesProfilePage::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("MessagesProfilePage::updatePageArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows();
public:
    
private:
    [[deprecated("MessagesProfilePage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1d85c4
     * @note[short] MacOS (Intel): 0x22ad40
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x1d85b8
     * @note[short] MacOS (Intel): 0x22ad10
     * @note[short] Windows: 0x3171d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1d8120
     * @note[short] MacOS (Intel): 0x22a8f0
     * @note[short] Windows: 0x316f70
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    
private:
    [[deprecated("MessagesProfilePage::onClosePopup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1d81b0
     * @note[short] MacOS (Intel): 0x22a960
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1d8238
     * @note[short] MacOS (Intel): 0x22a9d0
     * @note[short] Windows: 0x316fa0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);
    
private:
    [[deprecated("MessagesProfilePage::uploadActionFailed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1d83f4
     * @note[short] MacOS (Intel): 0x22ab70
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x1d8868
     * @note[short] MacOS (Intel): 0x22b010
     * @note[short] Windows: 0x317820
     * @note[short] Android
     */
    virtual void loadMessagesFinished(cocos2d::CCArray* p0, char const* p1);
    
private:
    [[deprecated("MessagesProfilePage::loadMessagesFailed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1d897c
     * @note[short] MacOS (Intel): 0x22b140
     * @note[short] Android
     */
    virtual void loadMessagesFailed(char const* p0, GJErrorCode p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x1d8aa8
     * @note[short] MacOS (Intel): 0x22b250
     * @note[short] Windows: 0x317970
     * @note[short] Android
     */
    virtual void forceReloadMessages(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1d8adc
     * @note[short] MacOS (Intel): 0x22b290
     * @note[short] Windows: 0x317990
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);
};
