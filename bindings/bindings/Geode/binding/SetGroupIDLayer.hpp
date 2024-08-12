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

class SetGroupIDLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetGroupIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetGroupIDLayer, FLAlertLayer)
    
private:
    [[deprecated("SetGroupIDLayer::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2a305c
     * @note[short] MacOS (Intel): 0x3115c0
     * @note[short] iOS: 0x4191c
     * @note[short] Android
     */
    static SetGroupIDLayer* create(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetGroupIDLayer::addGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addGroupID(int p0);
public:
    
private:
    [[deprecated("SetGroupIDLayer::callRemoveFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void callRemoveFromGroup(float p0);
public:
    
private:
    [[deprecated("SetGroupIDLayer::createTextInput not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, int p1, int p2, gd::string p3, float p4, int p5);
public:
    
private:
    [[deprecated("SetGroupIDLayer::determineStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();
public:

    /**
     * @note[short] MacOS (ARM): 0x2a31bc
     * @note[short] MacOS (Intel): 0x311790
     * @note[short] Windows: 0x3cde60
     * @note[short] iOS: 0x419a0
     * @note[short] Android
     */
    bool init(GameObject* obj, cocos2d::CCArray* objs);
    
private:
    [[deprecated("SetGroupIDLayer::onAddGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void onAddGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onAddGroupParent not implemented")]]
    /**
     * @note[short] Android
     */
    void onAddGroupParent(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onAnim not implemented")]]
    /**
     * @note[short] Android
     */
    void onAnim(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x3d05e0
     * @note[short] Android
     */
    void onArrow(int tag, int increment);

    /**
     * @note[short] Windows: 0x3d0580
     * @note[short] Android
     */
    void onArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d05b0
     * @note[short] Android
     */
    void onArrowRight(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetGroupIDLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onCopy not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onExtra not implemented")]]
    /**
     * @note[short] Android
     */
    void onExtra(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onExtra2 not implemented")]]
    /**
     * @note[short] Android
     */
    void onExtra2(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x3d23b0
     * @note[short] Android
     */
    void onNextFreeEditorLayer1(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d2420
     * @note[short] Android
     */
    void onNextFreeEditorLayer2(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d28c0
     * @note[short] Android
     */
    void onNextFreeOrderChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d14d0
     * @note[short] Android
     */
    void onNextGroupID1(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetGroupIDLayer::onPaste not implemented")]]
    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onRemoveFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onSmoothEase not implemented")]]
    /**
     * @note[short] Android
     */
    void onSmoothEase(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onToggleGuide not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleGuide(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onToggleSelectedOrder not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleSelectedOrder(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::onZLayerShift not implemented")]]
    /**
     * @note[short] Android
     */
    void onZLayerShift(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetGroupIDLayer::removeGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeGroupID(int p0);
public:

    /**
     * @note[short] Windows: 0x3d2520
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] Windows: 0x3d25b0
     * @note[short] Android
     */
    void updateEditorLabel2();

    /**
     * @note[short] Windows: 0x3d22b0
     * @note[short] Android
     */
    void updateEditorLayerID();

    /**
     * @note[short] Windows: 0x3d2330
     * @note[short] Android
     */
    void updateEditorLayerID2();

    /**
     * @note[short] Windows: 0x3d2a90
     * @note[short] Android
     */
    void updateEditorOrder();

    /**
     * @note[short] Windows: 0x3d2760
     * @note[short] Android
     */
    void updateEditorOrderLabel();
    
private:
    [[deprecated("SetGroupIDLayer::updateGroupIDButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroupIDButtons();
public:

    /**
     * @note[short] Windows: 0x3d26d0
     * @note[short] Android
     */
    void updateGroupIDLabel();

    /**
     * @note[short] Windows: 0x3d29c0
     * @note[short] Android
     */
    void updateOrderChannel();

    /**
     * @note[short] Windows: 0x3d2810
     * @note[short] Android
     */
    void updateOrderChannelLabel();
    
private:
    [[deprecated("SetGroupIDLayer::updateZLayerButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateZLayerButtons();
public:

    /**
     * @note[short] Windows: 0x3d2490
     * @note[short] Android
     */
    void updateZOrder();

    /**
     * @note[short] Windows: 0x3d2640
     * @note[short] Android
     */
    void updateZOrderLabel();

    /**
     * @note[short] MacOS (ARM): 0x2a7bb0
     * @note[short] MacOS (Intel): 0x316750
     * @note[short] Windows: 0x3d2ee0
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("SetGroupIDLayer::textInputClosed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2a7494
     * @note[short] MacOS (Intel): 0x315fd0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2a74b0
     * @note[short] MacOS (Intel): 0x316010
     * @note[short] Windows: 0x3d1000
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_array0;
    cocos2d::CCArray* m_groupIDObjects;
    CCTextInputNode* m_editorLayerInput;
    CCTextInputNode* m_editorLayer2Input;
    CCTextInputNode* m_zOrderInput;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    bool m_showChannelOrder;
    int m_channelValue;
    bool m_channelUpdated;
    int m_groupIDValue;
    int m_editorLayerValue;
    int m_editorLayer2Value;
    int m_zOrderValue;
    ZLayer m_zLayerValue;
    int m_orderValue;
    bool m_channelOrderEdited;
    bool m_editorLayerEdited;
    bool m_removeGroupsLock;
    int m_groupToRemove;
    bool m_addedGroup;
    bool m_unkBool0;
    bool m_hasTargetObjects;
};
