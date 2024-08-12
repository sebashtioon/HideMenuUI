#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCContentLayer.hpp"

class CCScrollLayerExt : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CCScrollLayerExt";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCScrollLayerExt, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3aa6c8
     * @note[short] MacOS (Intel): 0x437b20
     * @note[short] Windows: 0x45bd0
     * @note[short] iOS: 0x3113dc
     * @note[short] Android
     */
     CCScrollLayerExt(cocos2d::CCRect p0);
    
private:
    [[deprecated("CCScrollLayerExt::constraintContent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn constraintContent();
public:
    
private:
    [[deprecated("CCScrollLayerExt::doConstraintContent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doConstraintContent(bool p0);
public:
	inline float getMaxY() {
		return m_scrollLimitBottom;
	}
	inline float getMinY() {
		return this->getContentSize().height - m_contentLayer->getContentSize().height - m_scrollLimitTop;
	}

    /**
     * @note[short] MacOS (ARM): 0x3aacbc
     * @note[short] MacOS (Intel): 0x438240
     * @note[short] Windows: 0x46180
     * @note[short] iOS: 0x311a20
     * @note[short] Android
     */
    void moveToTop();

    /**
     * @note[short] MacOS (ARM): 0x3aad64
     * @note[short] MacOS (Intel): 0x4381a0
     * @note[short] Windows: 0x460e0
     * @note[short] iOS: 0x311978
     * @note[short] Android
     */
    void moveToTopWithOffset(float p0);
    
private:
    [[deprecated("CCScrollLayerExt::scrollingEnd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scrollingEnd();
public:

    /**
     * @note[short] MacOS (ARM): 0x3ab7bc
     * @note[short] MacOS (Intel): 0x438e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3122f0
     * @note[short] Android
     */
    void scrollLayer(float offset);
    
private:
    [[deprecated("CCScrollLayerExt::setContentLayerSize not implemented")]]
    /**
     * @note[short] Android
     */
    void setContentLayerSize(cocos2d::CCSize p0);
public:
    
private:
    [[deprecated("CCScrollLayerExt::setContentOffset not implemented")]]
    /**
     * @note[short] Android
     */
    void setContentOffset(cocos2d::CCPoint p0, bool p1);
public:
    
private:
    [[deprecated("CCScrollLayerExt::updateIndicators not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateIndicators(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3ab884
     * @note[short] MacOS (Intel): 0x438ec0
     * @note[short] Windows: 0x46c50
     * @note[short] iOS: 0x3123b8
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x3ab28c
     * @note[short] MacOS (Intel): 0x438850
     * @note[short] Windows: 0x46700
     * @note[short] iOS: 0x311df4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ab648
     * @note[short] MacOS (Intel): 0x438c80
     * @note[short] Windows: 0x46ad0
     * @note[short] iOS: 0x312190
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ab3a8
     * @note[short] MacOS (Intel): 0x438980
     * @note[short] Windows: 0x46820
     * @note[short] iOS: 0x311f00
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ab5e4
     * @note[short] MacOS (Intel): 0x438c20
     * @note[short] Windows: 0x46aa0
     * @note[short] iOS: 0x31212c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x3ab254
     * @note[short] MacOS (Intel): 0x438810
     * @note[short] Windows: 0x466b0
     * @note[short] iOS: 0x311dbc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3ab978
     * @note[short] MacOS (Intel): 0x438fc0
     * @note[short] Windows: 0x46d80
     * @note[short] iOS: 0x3124ac
     * @note[short] Android
     */
    virtual void preVisitWithClippingRect(cocos2d::CCRect p0);

    /**
     * @note[short] MacOS (ARM): 0x3aba0c
     * @note[short] MacOS (Intel): 0x439040
     * @note[short] Windows: 0x46e20
     * @note[short] iOS: 0x312540
     * @note[short] Android
     */
    virtual void postVisit();
    cocos2d::CCTouch* m_touch;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::cc_timeval m_timeValue;
    bool m_touchDown;
    bool m_notAtEndOfScroll;
    cocos2d::CCLayerColor* m_verticalScrollbar;
    cocos2d::CCLayerColor* m_horizontalScrollbar;
    CCScrollLayerExtDelegate* m_delegate;
    CCContentLayer* m_contentLayer;
    bool m_cutContent;
    bool m_vScrollbarVisible;
    bool m_hScrollbarVisible;
    bool m_disableHorizontal;
    bool m_disableVertical;
    bool m_disableMovement;
    float m_scrollLimitTop;
    float m_scrollLimitBottom;
    float m_peekLimitTop;
    float m_peekLimitBottom;
};
