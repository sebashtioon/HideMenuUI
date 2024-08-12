#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextAreaDelegate.hpp"

class DialogLayer : public cocos2d::CCLayerColor, public TextAreaDelegate {
public:
    static constexpr auto CLASS_NAME = "DialogLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x34d8a4
     * @note[short] MacOS (Intel): 0x3cac60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a280
     * @note[short] Android
     */
    static DialogLayer* create(DialogObject* object, int background);

    /**
     * @note[short] MacOS (ARM): 0x34e734
     * @note[short] MacOS (Intel): 0x3cbbb0
     * @note[short] Windows: 0xd07e0
     * @note[short] Android
     */
    void addToMainScene();
    
private:
    [[deprecated("DialogLayer::animateIn not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x34eb38
     * @note[short] MacOS (Intel): 0x3cbfd0
     * @note[short] iOS: 0x8aff8
     * @note[short] Android
     */
    void animateIn(DialogAnimationType p0);
public:
    
private:
    [[deprecated("DialogLayer::animateInDialog not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x34ed54
     * @note[short] MacOS (Intel): 0x3cc210
     * @note[short] Android
     */
    void animateInDialog();
public:

    /**
     * @note[short] MacOS (ARM): 0x34ead8
     * @note[short] MacOS (Intel): 0x3cbf80
     * @note[short] Windows: 0xd09b0
     * @note[short] Android
     */
    void animateInRandomSide();

    /**
     * @note[short] MacOS (ARM): 0x34d8b0
     * @note[short] MacOS (Intel): 0x3cac70
     * @note[short] Windows: 0xcfcd0
     * @note[short] iOS: 0x8a28c
     * @note[short] Android
     */
    static DialogLayer* createDialogLayer(DialogObject* object, cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x34d9c0
     * @note[short] MacOS (Intel): 0x3cadb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8a318
     * @note[short] Android
     */
    static DialogLayer* createWithObjects(cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x34df40
     * @note[short] MacOS (Intel): 0x3cb360
     * @note[short] Windows: 0xd02e0
     * @note[short] Android
     */
    void displayDialogObject(DialogObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x34dea0
     * @note[short] MacOS (Intel): 0x3cb2b0
     * @note[short] Windows: 0xd0280
     * @note[short] Android
     */
    void displayNextObject();
    
private:
    [[deprecated("DialogLayer::finishCurrentAnimation not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x34e60c
     * @note[short] MacOS (Intel): 0x3cba60
     * @note[short] Android
     */
    void finishCurrentAnimation();
public:

    /**
     * @note[short] MacOS (ARM): 0x34e4b0
     * @note[short] MacOS (Intel): 0x3cb920
     * @note[short] Windows: 0xd06b0
     * @note[short] Android
     */
    void handleDialogTap();

    /**
     * @note[short] MacOS (ARM): 0x34d9d0
     * @note[short] MacOS (Intel): 0x3cadd0
     * @note[short] Windows: 0xcfe20
     * @note[short] Android
     */
    bool init(DialogObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x34e6a4
     * @note[short] MacOS (Intel): 0x3cbb20
     * @note[short] Windows: 0xd0850
     * @note[short] Android
     */
    void onClose();
    
private:
    [[deprecated("DialogLayer::updateChatPlacement not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x34e3f4
     * @note[short] MacOS (Intel): 0x3cb850
     * @note[short] iOS: 0x8ab34
     * @note[short] Android
     */
    void updateChatPlacement(DialogChatPlacement p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x34e394
     * @note[short] MacOS (Intel): 0x3cb7e0
     * @note[short] Windows: 0xd0630
     * @note[short] Android
     */
    void updateNavButtonFrame();
    
private:
    [[deprecated("DialogLayer::onEnter not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x3cbe80
     * @note[short] Android
     */
    virtual void onEnter();
public:

    /**
     * @note[short] MacOS (ARM): 0x34e8b0
     * @note[short] MacOS (Intel): 0x3cbd30
     * @note[short] Windows: 0xd08d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x34e928
     * @note[short] MacOS (Intel): 0x3cbd90
     * @note[short] Windows: 0xd0900
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x34e968
     * @note[short] MacOS (Intel): 0x3cbdf0
     * @note[short] Windows: 0xd0920
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x34e9ac
     * @note[short] MacOS (Intel): 0x3cbe40
     * @note[short] Windows: 0x51ee0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x34e78c
     * @note[short] MacOS (Intel): 0x3cbc00
     * @note[short] Windows: 0xd0840
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x34ed5c
     * @note[short] MacOS (Intel): 0x3cc220
     * @note[short] Windows: 0xd0bf0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x34e9e8
     * @note[short] MacOS (Intel): 0x3cbe90
     * @note[short] Windows: 0xd0940
     * @note[short] Android
     */
    virtual TodoReturn fadeInTextFinished(TextArea* p0);
    float m_animateTime;
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCLabelBMFont* m_characterLabel;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_characterSprite;
    cocos2d::CCArray* m_dialogObjects;
    int m_touchID;
    cocos2d::CCSprite* m_navButtonSprite;
    bool m_animating;
    bool m_skippable;
    DialogDelegate* m_delegate;
    bool m_handleTap;
    DialogAnimationType m_animationType;
    bool m_noRemove;
};
