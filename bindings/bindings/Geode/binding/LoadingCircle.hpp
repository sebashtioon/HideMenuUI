#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingCircle : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "LoadingCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircle, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LoadingCircle();

    /**
     * @note[short] MacOS (ARM): 0x4280fc
     * @note[short] MacOS (Intel): 0x4c8dc0
     * @note[short] Windows: 0x6a3c0
     * @note[short] iOS: 0x3a32a8
     * @note[short] Android
     */
    static LoadingCircle* create();

    /**
     * @note[short] MacOS (ARM): 0x4283ac
     * @note[short] MacOS (Intel): 0x4c90f0
     * @note[short] Windows: 0x6a6a0
     * @note[short] iOS: 0x3a3544
     * @note[short] Android
     */
    void fadeAndRemove();

    /**
     * @note[short] MacOS (ARM): 0x4282b4
     * @note[short] MacOS (Intel): 0x4c9000
     * @note[short] Windows: 0x6a5a0
     * @note[short] iOS: 0x3a3450
     * @note[short] Android
     */
    void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setFade(bool fade);

    /**
     * @note[short] MacOS (ARM): 0x4281f8
     * @note[short] MacOS (Intel): 0x4c8f30
     * @note[short] Windows: 0x6a4c0
     * @note[short] iOS: 0x3a3394
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x42845c
     * @note[short] MacOS (Intel): 0x4c9180
     * @note[short] Windows: 0x6a740
     * @note[short] iOS: 0x3a35f8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x4286c8
     * @note[short] MacOS (Intel): 0x4c9400
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
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
     * @note[short] MacOS (ARM): 0x42846c
     * @note[short] MacOS (Intel): 0x4c91a0
     * @note[short] Windows: 0x6a760
     * @note[short] iOS: 0x3a3608
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
	inline void setParentLayer(cocos2d::CCLayer* layer) {
		m_parentLayer = layer;
	}
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCLayer* m_parentLayer;
    bool m_fade;
};
