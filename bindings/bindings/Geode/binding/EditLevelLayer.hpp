#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditLevelLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditLevelLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x1a7544
     * @note[short] MacOS (Intel): 0x1f42c0
     * @note[short] Windows: 0xd1980
     * @note[short] Android
     */
    virtual  ~EditLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x1a7680
     * @note[short] MacOS (Intel): 0x1f45e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xea554
     * @note[short] Android
     */
    static EditLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1aa858
     * @note[short] MacOS (Intel): 0x1f7980
     * @note[short] Windows: 0xd3cd0
     * @note[short] Android
     */
    void closeTextInputs();

    /**
     * @note[short] MacOS (ARM): 0x1aa014
     * @note[short] MacOS (Intel): 0x1f7150
     * @note[short] Windows: 0xd5ad0
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a9e54
     * @note[short] MacOS (Intel): 0x1f6f90
     * @note[short] Windows: 0xd5330
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1aa0ec
     * @note[short] MacOS (Intel): 0x1f7220
     * @note[short] Windows: 0xd5bf0
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a7764
     * @note[short] MacOS (Intel): 0x1f4710
     * @note[short] Windows: 0xd1c80
     * @note[short] iOS: 0xea62c
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x1aa2b8
     * @note[short] MacOS (Intel): 0x1f73f0
     * @note[short] Windows: 0xd5e40
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onClone not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1ab8d8
     * @note[short] MacOS (Intel): 0x1f8a70
     * @note[short] Android
     */
    void onClone();
public:
    
private:
    [[deprecated("EditLevelLayer::onDelete not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1ab60c
     * @note[short] MacOS (Intel): 0x1f87c0
     * @note[short] Android
     */
    void onDelete();
public:

    /**
     * @note[short] MacOS (ARM): 0x1a8e3c
     * @note[short] MacOS (Intel): 0x1f5f30
     * @note[short] Windows: 0xd4af0
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa77c
     * @note[short] MacOS (Intel): 0x1f78a0
     * @note[short] Windows: 0xd3050
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a9f3c
     * @note[short] MacOS (Intel): 0x1f7080
     * @note[short] Windows: 0xd59b0
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa488
     * @note[short] MacOS (Intel): 0x1f75c0
     * @note[short] Windows: 0xd3270
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa274
     * @note[short] MacOS (Intel): 0x1f73a0
     * @note[short] Windows: 0xd31c0
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa838
     * @note[short] MacOS (Intel): 0x1f7960
     * @note[short] Windows: 0xd3240
     * @note[short] Android
     */
    void onLevelOptions(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onMoveToTop not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1ab9b8
     * @note[short] MacOS (Intel): 0x1f8b60
     * @note[short] Android
     */
    void onMoveToTop();
public:

    /**
     * @note[short] MacOS (ARM): 0x1a8f80
     * @note[short] MacOS (Intel): 0x1f6080
     * @note[short] Windows: 0xd4690
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa1cc
     * @note[short] MacOS (Intel): 0x1f7300
     * @note[short] Windows: 0xd5d20
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a90d4
     * @note[short] MacOS (Intel): 0x1f61c0
     * @note[short] Windows: 0xd4c80
     * @note[short] iOS: 0xebd04
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onTest not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1ab57c
     * @note[short] MacOS (Intel): 0x1f8720
     * @note[short] Android
     */
    void onTest(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x1a9d74
     * @note[short] MacOS (Intel): 0x1f6eb0
     * @note[short] Windows: 0xd49c0
     * @note[short] Android
     */
    void onUpdateDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ab46c
     * @note[short] MacOS (Intel): 0x1f8610
     * @note[short] Windows: 0xd4850
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x1ab52c
     * @note[short] MacOS (Intel): 0x1f86d0
     * @note[short] Windows: 0xd4930
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x1a757c
     * @note[short] MacOS (Intel): 0x1f4480
     * @note[short] Windows: 0xd1af0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a9554
     * @note[short] MacOS (Intel): 0x1f66e0
     * @note[short] Windows: 0xd3490
     * @note[short] Android
     */
    void setupLevelInfo();
    
private:
    [[deprecated("EditLevelLayer::updateDescText not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1a8e38
     * @note[short] MacOS (Intel): 0x1f5f20
     * @note[short] Android
     */
    void updateDescText(char const* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1aaf90
     * @note[short] MacOS (Intel): 0x1f80c0
     * @note[short] Windows: 0xd5ff0
     * @note[short] Android
     */
    void verifyLevelName();

    /**
     * @note[short] MacOS (ARM): 0x1abb90
     * @note[short] MacOS (Intel): 0x1f8d50
     * @note[short] Windows: 0xd62d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1abb9c
     * @note[short] MacOS (Intel): 0x1f8d80
     * @note[short] Windows: 0xd62e0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x1aba88
     * @note[short] MacOS (Intel): 0x1f8c50
     * @note[short] Windows: 0xd5db0
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1ab64c
     * @note[short] MacOS (Intel): 0x1f8800
     * @note[short] Windows: 0xd5470
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1aacdc
     * @note[short] MacOS (Intel): 0x1f7e60
     * @note[short] Windows: 0xd4330
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1aa8b4
     * @note[short] MacOS (Intel): 0x1f79e0
     * @note[short] Windows: 0xd3d30
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1aadec
     * @note[short] MacOS (Intel): 0x1f7f40
     * @note[short] Windows: 0xd44a0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1abc20
     * @note[short] MacOS (Intel): 0x1f8e20
     * @note[short] Windows: 0xd6350
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1abdc8
     * @note[short] MacOS (Intel): 0x1f8fc0
     * @note[short] Windows: 0xd6490
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1abbd0
     * @note[short] MacOS (Intel): 0x1f8dd0
     * @note[short] Windows: 0xd6310
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
    cocos2d::CCMenu* m_buttonMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_textInputs;
    cocos2d::CCLabelBMFont* m_folderLabel;
    bool m_exiting;
    GJLevelType m_levelType;
    gd::string m_levelName;
    UploadActionPopup* m_descriptionPopup;
};
