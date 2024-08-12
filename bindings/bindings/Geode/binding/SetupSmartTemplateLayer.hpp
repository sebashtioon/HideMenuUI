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
#include "FLAlertLayerProtocol.hpp"

class SetupSmartTemplateLayer : public FLAlertLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SetupSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x42cf00
     * @note[short] Android
     */
    static SetupSmartTemplateLayer* create(GJSmartTemplate* p0);

    /**
     * @note[short] Windows: 0x42d010
     * @note[short] Android
     */
    bool init(GJSmartTemplate* p0);
    
private:
    [[deprecated("SetupSmartTemplateLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartTemplateLayer::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSmartTemplateLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x44cc9c
     * @note[short] MacOS (Intel): 0x4f31d0
     * @note[short] Windows: 0x42e160
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x44c8f4
     * @note[short] MacOS (Intel): 0x4f2e70
     * @note[short] Windows: 0x42dbc0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x44cb90
     * @note[short] MacOS (Intel): 0x4f30f0
     * @note[short] Windows: 0x42df00
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x44c9d8
     * @note[short] MacOS (Intel): 0x4f2f50
     * @note[short] Windows: 0x42dca0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
    
private:
    [[deprecated("SetupSmartTemplateLayer::textChanged not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x44cc7c
     * @note[short] MacOS (Intel): 0x4f31b0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
public:
};
