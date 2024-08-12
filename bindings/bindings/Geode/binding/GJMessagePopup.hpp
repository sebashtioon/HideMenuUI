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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DownloadMessageDelegate.hpp"

class GJMessagePopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DownloadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessagePopup, FLAlertLayer)
    
private:
    [[deprecated("GJMessagePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJMessagePopup* create(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::blockUser not implemented")]]
    /**
     * @note[short] Android
     */
    void blockUser();
public:
    
private:
    [[deprecated("GJMessagePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJUserMessage* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2445b4
     * @note[short] MacOS (Intel): 0x2a2980
     * @note[short] Windows: 0x285be0
     * @note[short] iOS: 0x2eb808
     * @note[short] Android
     */
    void loadFromGJMessage(GJUserMessage* p0);
    
private:
    [[deprecated("GJMessagePopup::onBlock not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onRemove not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onReply not implemented")]]
    /**
     * @note[short] Android
     */
    void onReply(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2454a8
     * @note[short] MacOS (Intel): 0x2a3920
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] MacOS (ARM): 0x245524
     * @note[short] MacOS (Intel): 0x2a3990
     * @note[short] Windows: 0x286930
     * @note[short] Android
     */
    virtual TodoReturn downloadMessageFinished(GJUserMessage* p0);

    /**
     * @note[short] MacOS (ARM): 0x2455fc
     * @note[short] MacOS (Intel): 0x2a3a50
     * @note[short] Windows: 0x286980
     * @note[short] Android
     */
    virtual TodoReturn downloadMessageFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2456b4
     * @note[short] MacOS (Intel): 0x2a3af0
     * @note[short] Windows: 0x2869c0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x24589c
     * @note[short] MacOS (Intel): 0x2a3cb0
     * @note[short] Windows: 0x286b50
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x245a0c
     * @note[short] MacOS (Intel): 0x2a3e00
     * @note[short] Windows: 0x286c20
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x245b30
     * @note[short] MacOS (Intel): 0x2a3f00
     * @note[short] Windows: 0x286ca0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
