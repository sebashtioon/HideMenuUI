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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"

class ShareCommentLayer : public FLAlertLayer, public TextInputDelegate, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareCommentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareCommentLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x460fe0
     * @note[short] iOS: 0x1ddefc
     * @note[short] Android
     */
    static ShareCommentLayer* create(gd::string title, int charLimit, CommentType type, int ID, gd::string desc);

    /**
     * @note[short] Windows: 0x4611f0
     * @note[short] iOS: 0x1de04c
     * @note[short] Android
     */
    bool init(gd::string title, int charLimit, CommentType type, int ID, gd::string desc);
    
private:
    [[deprecated("ShareCommentLayer::onClear not implemented")]]
    /**
     * @note[short] iOS: 0x1deebc
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareCommentLayer::onClose not implemented")]]
    /**
     * @note[short] iOS: 0x1def78
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareCommentLayer::onPercent not implemented")]]
    /**
     * @note[short] iOS: 0x1dedf0
     * @note[short] Android
     */
    void onPercent(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x462440
     * @note[short] iOS: 0x1defcc
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ShareCommentLayer::updateCharCountLabel not implemented")]]
    /**
     * @note[short] iOS: 0x1df5d8
     * @note[short] Android
     */
    void updateCharCountLabel();
public:
    
private:
    [[deprecated("ShareCommentLayer::updateDescText not implemented")]]
    /**
     * @note[short] Android
     */
    void updateDescText(gd::string desc);
public:
    
private:
    [[deprecated("ShareCommentLayer::updatePercentLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updatePercentLabel();
public:
    
private:
    [[deprecated("ShareCommentLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x513870
     * @note[short] MacOS (Intel): 0x5eaab0
     * @note[short] iOS: 0x1df408
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x5137c8
     * @note[short] MacOS (Intel): 0x5eaa00
     * @note[short] Windows: 0x462820
     * @note[short] iOS: 0x1df360
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1df514
     * @note[short] Android: Out of line
     */
    virtual void textInputOpened(CCTextInputNode* textInput);

    /**
     * @note[short] MacOS (ARM): 0x5138a8
     * @note[short] MacOS (Intel): 0x5eaaf0
     * @note[short] Windows: 0x462870
     * @note[short] iOS: 0x1df440
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* textInput);

    /**
     * @note[short] MacOS (ARM): 0x513a2c
     * @note[short] MacOS (Intel): 0x5eac70
     * @note[short] Windows: 0x4629b0
     * @note[short] iOS: 0x1df51c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* textInput);

    /**
     * @note[short] MacOS (ARM): 0x513cac
     * @note[short] MacOS (Intel): 0x5eaed0
     * @note[short] Windows: 0x462c00
     * @note[short] iOS: 0x1df6dc
     * @note[short] Android
     */
    virtual void uploadActionFinished(int ID, int unk);

    /**
     * @note[short] MacOS (ARM): 0x513de4
     * @note[short] MacOS (Intel): 0x5eafd0
     * @note[short] Windows: 0x462c90
     * @note[short] iOS: 0x1df76c
     * @note[short] Android
     */
    virtual void uploadActionFailed(int ID, int unk);

    /**
     * @note[short] MacOS (ARM): 0x513f44
     * @note[short] MacOS (Intel): 0x5eb0f0
     * @note[short] Windows: 0x462d40
     * @note[short] iOS: 0x1df7f0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
};
