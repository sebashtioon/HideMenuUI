#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"

class SupportLayer : public GJDropDownLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SupportLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SupportLayer, GJDropDownLayer)
    
private:
    [[deprecated("SupportLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SupportLayer* create();
public:
    
private:
    [[deprecated("SupportLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCArray* p5);
public:
    
private:
    [[deprecated("SupportLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLayer();
public:
    
private:
    [[deprecated("SupportLayer::onCocos2d not implemented")]]
    /**
     * @note[short] Android
     */
    void onCocos2d(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onEmail not implemented")]]
    /**
     * @note[short] Android
     */
    void onEmail(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onGetReward not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetReward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onLinks not implemented")]]
    /**
     * @note[short] Android
     */
    void onLinks(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x49d0c0
     * @note[short] Android
     */
    void onLowDetail(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SupportLayer::onPrivacy not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrivacy(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x49cca0
     * @note[short] Android
     */
    void onRequestAccess(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SupportLayer::onRobTop not implemented")]]
    /**
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onSFX not implemented")]]
    /**
     * @note[short] Android
     */
    void onSFX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::onTOS not implemented")]]
    /**
     * @note[short] Android
     */
    void onTOS(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SupportLayer::sendSupportMail not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sendSupportMail();
public:
    
private:
    [[deprecated("SupportLayer::customSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x322e1c
     * @note[short] MacOS (Intel): 0x39b820
     * @note[short] Android
     */
    virtual void customSetup();
public:

    /**
     * @note[short] MacOS (ARM): 0x324bc8
     * @note[short] MacOS (Intel): 0x39d6e0
     * @note[short] Windows: 0x49cef0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x324d14
     * @note[short] MacOS (Intel): 0x39d820
     * @note[short] Windows: 0x49d030
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x324b78
     * @note[short] MacOS (Intel): 0x39d690
     * @note[short] Windows: 0x49ceb0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x3250f8
     * @note[short] MacOS (Intel): 0x39dbe0
     * @note[short] Windows: 0x49dcb0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
