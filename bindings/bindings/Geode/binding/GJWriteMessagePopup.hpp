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
#include "TextInputDelegate.hpp"
#include "UploadMessageDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJWriteMessagePopup : public FLAlertLayer, public TextInputDelegate, public UploadMessageDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJWriteMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJWriteMessagePopup, FLAlertLayer)
    
private:
    [[deprecated("GJWriteMessagePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJWriteMessagePopup* create(int p0, int p1);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::closeMessagePopup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeMessagePopup(bool p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0, int p1);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::onClearBody not implemented")]]
    /**
     * @note[short] Android
     */
    void onClearBody(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::onSend not implemented")]]
    /**
     * @note[short] Android
     */
    void onSend(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::updateBody not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBody(gd::string p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::updateCharCountLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCharCountLabel(int p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::updateSubject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSubject(gd::string p0);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::updateText not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateText(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x247474
     * @note[short] MacOS (Intel): 0x2a5ab0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x247460
     * @note[short] MacOS (Intel): 0x2a5a80
     * @note[short] Windows: 0x288550
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void textInputOpened(CCTextInputNode* p0);
    
private:
    [[deprecated("GJWriteMessagePopup::textInputClosed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2474ac
     * @note[short] MacOS (Intel): 0x2a5af0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2474d0
     * @note[short] MacOS (Intel): 0x2a5b50
     * @note[short] Windows: 0x288560
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x247adc
     * @note[short] MacOS (Intel): 0x2a6150
     * @note[short] Windows: 0x288b40
     * @note[short] Android
     */
    virtual void uploadMessageFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x247bb4
     * @note[short] MacOS (Intel): 0x2a6210
     * @note[short] Windows: 0x288bc0
     * @note[short] Android
     */
    virtual void uploadMessageFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x247cf4
     * @note[short] MacOS (Intel): 0x2a6340
     * @note[short] Windows: 0x288c70
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x247e78
     * @note[short] MacOS (Intel): 0x2a6490
     * @note[short] Windows: 0x288d10
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    
private:
    [[deprecated("GJWriteMessagePopup::textInputShouldOffset not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x247f98
     * @note[short] MacOS (Intel): 0x2a6570
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("GJWriteMessagePopup::textInputReturn not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x248068
     * @note[short] MacOS (Intel): 0x2a6630
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
public:
};
