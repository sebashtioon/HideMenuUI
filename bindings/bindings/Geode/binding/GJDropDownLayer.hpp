#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDropDownLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJDropDownLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDropDownLayer, cocos2d::CCLayerColor)
	inline GJDropDownLayer() {
		m_endPosition = cocos2d::CCPointMake(0.f, 0.f);
		m_startPosition = cocos2d::CCPointMake(0.f, 0.f);
		m_buttonMenu = nullptr;
		m_listLayer = nullptr;
		m_mainLayer = nullptr;
		m_closeOnHide = false;
		m_delegate = nullptr;
		m_fastMenu = false;
	}

    /**
     * @note[short] MacOS (ARM): 0x519eac
     * @note[short] MacOS (Intel): 0x5f18a0
     * @note[short] Windows: 0x2454f0
     * @note[short] iOS: 0x3baf08
     * @note[short] Android
     */
    bool init(char const* p0, float p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x51a2bc
     * @note[short] MacOS (Intel): 0x5f1cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bb304
     * @note[short] Android
     */
    bool init(char const* title);

    /**
     * @note[short] MacOS (ARM): 0x519d90
     * @note[short] MacOS (Intel): 0x5f1770
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJDropDownLayer* create(const char* title, float height, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x51a2ac
     * @note[short] MacOS (Intel): 0x5f1cb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJDropDownLayer* create(const char* title);

    /**
     * @note[short] MacOS (ARM): 0x51a640
     * @note[short] MacOS (Intel): 0x5f20b0
     * @note[short] Windows: 0x41870
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x51a67c
     * @note[short] MacOS (Intel): 0x5f20e0
     * @note[short] Windows: 0x3b850
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
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x51a330
     * @note[short] MacOS (Intel): 0x5f1d70
     * @note[short] Windows: 0x41750
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x51a368
     * @note[short] MacOS (Intel): 0x5f1db0
     * @note[short] Windows: 0x245970
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x51a2f8
     * @note[short] MacOS (Intel): 0x5f1d40
     * @note[short] Windows: 0x41720
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x51a38c
     * @note[short] MacOS (Intel): 0x5f1df0
     * @note[short] Windows: 0x245990
     * @note[short] iOS: 0x3bb3d4
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x51a3d8
     * @note[short] MacOS (Intel): 0x5f1e30
     * @note[short] Windows: 0x2459d0
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x51a4dc
     * @note[short] MacOS (Intel): 0x5f1f40
     * @note[short] Windows: 0x245b20
     * @note[short] Android
     */
    virtual void hideLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x51a5e0
     * @note[short] MacOS (Intel): 0x5f2050
     * @note[short] Windows: 0x41820
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x51a5f0
     * @note[short] MacOS (Intel): 0x5f2070
     * @note[short] Windows: 0x245c70
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x51a2d0
     * @note[short] MacOS (Intel): 0x5f1d00
     * @note[short] Windows: 0x245930
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x51a2e4
     * @note[short] MacOS (Intel): 0x5f1d20
     * @note[short] Windows: 0x245950
     * @note[short] Android
     */
    virtual void enableUI();
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    cocos2d::CCLayer* m_mainLayer;
    bool m_closeOnHide;
    GJDropDownLayerDelegate* m_delegate;
    bool m_fastMenu;
};
