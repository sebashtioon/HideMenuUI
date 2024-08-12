#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJScaleControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJScaleControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJScaleControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJScaleControl();

    /**
     * @note[short] MacOS (ARM): 0xde2c
     * @note[short] MacOS (Intel): 0xbe50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cfb18
     * @note[short] Android
     */
    static GJScaleControl* create();
    
private:
    [[deprecated("GJScaleControl::finishTouch not implemented")]]
    /**
     * @note[short] Android
     */
    void finishTouch();
public:

    /**
     * @note[short] MacOS (ARM): 0x3abb0
     * @note[short] MacOS (Intel): 0x3f770
     * @note[short] Windows: 0x125d20
     * @note[short] Android
     */
    void loadValues(GameObject* p0, cocos2d::CCArray* p1, gd::unordered_map<int, GameObjectEditorState>& p2);

    /**
     * @note[short] MacOS (ARM): 0x4a7c4
     * @note[short] MacOS (Intel): 0x52a60
     * @note[short] Windows: 0x125c90
     * @note[short] Android
     */
    void onToggleLockScale(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJScaleControl::scaleFromValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4a99c
     * @note[short] MacOS (Intel): 0x52c30
     * @note[short] Android
     */
    float scaleFromValue(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::skewFromValue not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4a9d8
     * @note[short] MacOS (Intel): 0x52c70
     * @note[short] Android
     */
    float skewFromValue(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4a834
     * @note[short] MacOS (Intel): 0x52ac0
     * @note[short] Windows: 0x126330
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4a864
     * @note[short] MacOS (Intel): 0x52b10
     * @note[short] Windows: 0x126ab0
     * @note[short] Android
     */
    void updateLabelX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4a934
     * @note[short] MacOS (Intel): 0x52bd0
     * @note[short] Windows: 0x126bb0
     * @note[short] Android
     */
    void updateLabelXY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4a8cc
     * @note[short] MacOS (Intel): 0x52b70
     * @note[short] Windows: 0x126b30
     * @note[short] Android
     */
    void updateLabelY(float p0);
    
private:
    [[deprecated("GJScaleControl::valueFromScale not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4a83c
     * @note[short] MacOS (Intel): 0x52ad0
     * @note[short] Android
     */
    float valueFromScale(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::valueFromSkew not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x4a9f0
     * @note[short] MacOS (Intel): 0x52cc0
     * @note[short] Android
     */
    float valueFromSkew(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4a3e0
     * @note[short] MacOS (Intel): 0x52650
     * @note[short] Windows: 0x125850
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4aa18
     * @note[short] MacOS (Intel): 0x52d00
     * @note[short] Windows: 0x126340
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4abb4
     * @note[short] MacOS (Intel): 0x52ef0
     * @note[short] Windows: 0x126550
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4affc
     * @note[short] MacOS (Intel): 0x533c0
     * @note[short] Windows: 0x126970
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x4b124
     * @note[short] MacOS (Intel): 0x53520
     * @note[short] Windows: 0x6fd20
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    Slider* m_sliderX;
    Slider* m_sliderY;
    Slider* m_sliderXY;
    int m_touchID;
    float m_valueX;
    float m_valueY;
    int m_unkSize4;
    float m_changedValueX;
    float m_changedValueY;
    bool m_scale1Lock;
    short m_scaleButtonType;
    cocos2d::CCLabelBMFont* m_scaleXLabel;
    cocos2d::CCLabelBMFont* m_scaleYLabel;
    cocos2d::CCLabelBMFont* m_scaleLabel;
    GJScaleControlDelegate* m_delegate;
    float m_upperBound;
    float m_lowerBound;
    int m_senderTag;
    CCMenuItemSpriteExtra* m_scaleLockButton;
    bool m_scaleLocked;
};
