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

class FriendRequestPopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "FriendRequestPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendRequestPopup, FLAlertLayer)
    
private:
    [[deprecated("FriendRequestPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static FriendRequestPopup* create(GJFriendRequest* p0);
public:
    
private:
    [[deprecated("FriendRequestPopup::blockUser not implemented")]]
    /**
     * @note[short] Android
     */
    void blockUser();
public:
    
private:
    [[deprecated("FriendRequestPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJFriendRequest* p0);
public:
    
private:
    [[deprecated("FriendRequestPopup::loadFromGJFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void loadFromGJFriendRequest(GJFriendRequest* p0);
public:
    
private:
    [[deprecated("FriendRequestPopup::onAccept not implemented")]]
    /**
     * @note[short] Android
     */
    void onAccept(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendRequestPopup::onBlock not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendRequestPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendRequestPopup::onRemove not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x243134
     * @note[short] MacOS (Intel): 0x2a1410
     * @note[short] Windows: 0x284dd0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x243210
     * @note[short] MacOS (Intel): 0x2a1500
     * @note[short] Windows: 0x284de0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x243404
     * @note[short] MacOS (Intel): 0x2a16d0
     * @note[short] Windows: 0x284f90
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x24356c
     * @note[short] MacOS (Intel): 0x2a1820
     * @note[short] Windows: 0x285050
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x2436e8
     * @note[short] MacOS (Intel): 0x2a1990
     * @note[short] Windows: 0x2850b0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
