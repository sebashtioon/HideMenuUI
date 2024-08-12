#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJMPDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "TextInputDelegate.hpp"

class MPLobbyLayer : public cocos2d::CCLayer, public GJMPDelegate, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MPLobbyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MPLobbyLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("MPLobbyLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static MPLobbyLayer* create(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBtn1 not implemented")]]
    /**
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBtn2 not implemented")]]
    /**
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onBtn3 not implemented")]]
    /**
     * @note[short] Android
     */
    void onBtn3(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onComment not implemented")]]
    /**
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MPLobbyLayer::onUpdateLobby not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onUpdateLobby();
public:
    
private:
    [[deprecated("MPLobbyLayer::postComment not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn postComment();
public:
    
private:
    [[deprecated("MPLobbyLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::tryExitLobby not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryExitLobby();
public:
    
private:
    [[deprecated("MPLobbyLayer::updateLobby not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLobby(float p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401764
     * @note[short] MacOS (Intel): 0x49d3e0
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("MPLobbyLayer::keyDown not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401eec
     * @note[short] MacOS (Intel): 0x49dc10
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::joinLobbyFinished not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4018c4
     * @note[short] MacOS (Intel): 0x49d560
     * @note[short] Android
     */
    virtual TodoReturn joinLobbyFinished(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::joinLobbyFailed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401d30
     * @note[short] MacOS (Intel): 0x49da40
     * @note[short] Android
     */
    virtual TodoReturn joinLobbyFailed(int p0, GJMPErrorCode p1);
public:
    
private:
    [[deprecated("MPLobbyLayer::updateComments not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401c28
     * @note[short] MacOS (Intel): 0x49d910
     * @note[short] Android
     */
    virtual TodoReturn updateComments();
public:
    
private:
    [[deprecated("MPLobbyLayer::didUploadMPComment not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401d18
     * @note[short] MacOS (Intel): 0x49da20
     * @note[short] Android
     */
    virtual TodoReturn didUploadMPComment(int p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::textInputOpened not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401e44
     * @note[short] MacOS (Intel): 0x49db40
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::textInputClosed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401e4c
     * @note[short] MacOS (Intel): 0x49db60
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::textChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401e54
     * @note[short] MacOS (Intel): 0x49db80
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::keyUp not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401f10
     * @note[short] MacOS (Intel): 0x49dc50
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("MPLobbyLayer::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401e5c
     * @note[short] MacOS (Intel): 0x49dba0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("MPLobbyLayer::uploadActionFinished not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x401f18
     * @note[short] MacOS (Intel): 0x49dc70
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("MPLobbyLayer::uploadActionFailed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x402134
     * @note[short] MacOS (Intel): 0x49de90
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("MPLobbyLayer::onClosePopup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4022e8
     * @note[short] MacOS (Intel): 0x49e030
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
public:
};
