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
#include "HSVWidgetDelegate.hpp"

class HSVLiveOverlay : public FLAlertLayer, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "HSVLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVLiveOverlay, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     HSVLiveOverlay();

    /**
     * @note[short] MacOS (ARM): 0x20d8cc
     * @note[short] MacOS (Intel): 0x2668a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static HSVLiveOverlay* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x20ddf0
     * @note[short] MacOS (Intel): 0x266e20
     * @note[short] Windows: 0x2a7a60
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20df7c
     * @note[short] MacOS (Intel): 0x266fa0
     * @note[short] Windows: 0x2a7ae0
     * @note[short] Android
     */
    void createHSVWidget(int p0);

    /**
     * @note[short] MacOS (ARM): 0x20de50
     * @note[short] MacOS (Intel): 0x266e70
     * @note[short] Windows: 0x2a7860
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x20da00
     * @note[short] MacOS (Intel): 0x266a20
     * @note[short] Windows: 0x2a73c0
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x20df30
     * @note[short] MacOS (Intel): 0x266f60
     * @note[short] Windows: 0x2a7ab0
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);
    
private:
    [[deprecated("HSVLiveOverlay::toggleControls not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x20e1e0
     * @note[short] MacOS (Intel): 0x267230
     * @note[short] Android
     */
    void toggleControls(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x20e0dc
     * @note[short] MacOS (Intel): 0x267120
     * @note[short] Windows: 0x2a7c80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x20e194
     * @note[short] MacOS (Intel): 0x2671d0
     * @note[short] Windows: 0x8a220
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x20e248
     * @note[short] MacOS (Intel): 0x2672a0
     * @note[short] Windows: 0x2a7cd0
     * @note[short] Android
     */
    virtual void hsvChanged(ConfigureHSVWidget* p0);
    GameObject* m_object;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_controls;
    cocos2d::CCArray* m_unkArray;
    ColorSelectDelegate* m_delegate;
    int m_activeTab;
    ConfigureHSVWidget* m_widget;
    bool m_unkBool1;
    bool m_unkBool2;
    bool m_unkBool3;
};
