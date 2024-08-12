#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomScrollLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomScrollLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x32e06c
     * @note[short] MacOS (Intel): 0x3a7d30
     * @note[short] Windows: 0x3c1e0
     * @note[short] iOS: 0x1316d8
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int unk1, bool unk2, cocos2d::CCArray* unk3, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x32e43c
     * @note[short] MacOS (Intel): 0x3a8120
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int unk1, bool unk2);
    
private:
    [[deprecated("BoomScrollLayer::addPage not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x32fc38
     * @note[short] MacOS (Intel): 0x3a9b10
     * @note[short] Android
     */
    void addPage(cocos2d::CCLayer* p0, int p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::addPage not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x32fcac
     * @note[short] MacOS (Intel): 0x3a9b90
     * @note[short] Android
     */
    void addPage(cocos2d::CCLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::cancelAndStoleTouch not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x32ff10
     * @note[short] MacOS (Intel): 0x3a9e00
     * @note[short] iOS: 0x132b48
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::claimTouch not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x32feac
     * @note[short] MacOS (Intel): 0x3a9d90
     * @note[short] iOS: 0x132ae4
     * @note[short] Android
     */
    void claimTouch(cocos2d::CCTouch* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x32f280
     * @note[short] MacOS (Intel): 0x3a9040
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCLayer* getPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x32f5d4
     * @note[short] MacOS (Intel): 0x3a9490
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getRelativePageForNum(int page);

    /**
     * @note[short] MacOS (ARM): 0x32f230
     * @note[short] MacOS (Intel): 0x3a8ff0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativePosForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x32ef28
     * @note[short] MacOS (Intel): 0x3a8ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x132154
     * @note[short] Android
     */
    int getTotalPages();

    /**
     * @note[short] MacOS (ARM): 0x32e124
     * @note[short] MacOS (Intel): 0x3a7dc0
     * @note[short] Windows: 0x3c3b0
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);

    /**
     * @note[short] MacOS (ARM): 0x32f894
     * @note[short] MacOS (Intel): 0x3a9760
     * @note[short] Windows: 0x3cf40
     * @note[short] iOS: 0x132724
     * @note[short] Android
     */
    void instantMoveToPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x32f96c
     * @note[short] MacOS (Intel): 0x3a9840
     * @note[short] Windows: 0x3d020
     * @note[short] iOS: 0x1327fc
     * @note[short] Android
     */
    void moveToPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x32f700
     * @note[short] MacOS (Intel): 0x3a95d0
     * @note[short] Windows: 0x3cdb0
     * @note[short] Android
     */
    void moveToPageEnded();

    /**
     * @note[short] MacOS (ARM): 0x32f4e4
     * @note[short] MacOS (Intel): 0x3a93b0
     * @note[short] Windows: 0x3ce40
     * @note[short] Android
     */
    int pageNumberForPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x32f840
     * @note[short] MacOS (Intel): 0x3a9710
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint positionForPageWithNumber(int page);

    /**
     * @note[short] MacOS (ARM): 0x32fbe0
     * @note[short] MacOS (Intel): 0x3a9ab0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void quickUpdate();
    
private:
    [[deprecated("BoomScrollLayer::removePage not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x32fd18
     * @note[short] MacOS (Intel): 0x3a9c00
     * @note[short] Android
     */
    void removePage(cocos2d::CCLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::removePageWithNumber not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x32fdac
     * @note[short] MacOS (Intel): 0x3a9c90
     * @note[short] Android
     */
    void removePageWithNumber(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x32e6d0
     * @note[short] MacOS (Intel): 0x3a83b0
     * @note[short] Windows: 0x3d1e0
     * @note[short] Android
     */
    void repositionPagesLooped();
    
private:
    [[deprecated("BoomScrollLayer::selectPage not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x32fb28
     * @note[short] MacOS (Intel): 0x3a9a00
     * @note[short] Android
     */
    void selectPage(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x32f1c8
     * @note[short] MacOS (Intel): 0x3a8f80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setDotScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x32e588
     * @note[short] MacOS (Intel): 0x3a8260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x131abc
     * @note[short] Android
     */
    void setPagesIndicatorPosition(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x32ece0
     * @note[short] MacOS (Intel): 0x3a8a50
     * @note[short] Windows: 0x3c720
     * @note[short] Android
     */
    void setupDynamicScrolling(cocos2d::CCArray* p0, DynamicScrollDelegate* p1);

    /**
     * @note[short] MacOS (ARM): 0x32f63c
     * @note[short] MacOS (Intel): 0x3a9500
     * @note[short] Windows: 0x3cce0
     * @note[short] Android
     */
    void togglePageIndicators(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x32ef44
     * @note[short] MacOS (Intel): 0x3a8cd0
     * @note[short] Windows: 0x3cae0
     * @note[short] iOS: 0x132170
     * @note[short] Android
     */
    void updateDots(float p0);

    /**
     * @note[short] MacOS (ARM): 0x32e5b0
     * @note[short] MacOS (Intel): 0x3a8290
     * @note[short] Windows: 0x3c9c0
     * @note[short] Android
     */
    void updatePages();

    /**
     * @note[short] MacOS (ARM): 0x32f6a8
     * @note[short] MacOS (Intel): 0x3a9570
     * @note[short] Windows: 0x3cd50
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x3301bc
     * @note[short] MacOS (Intel): 0x3aa0a0
     * @note[short] Windows: 0x3d890
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x330288
     * @note[short] MacOS (Intel): 0x3aa190
     * @note[short] Windows: 0x3d940
     * @note[short] iOS: 0x132cf0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x330548
     * @note[short] MacOS (Intel): 0x3aa4b0
     * @note[short] Windows: 0x3dc70
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x32ffec
     * @note[short] MacOS (Intel): 0x3a9ee0
     * @note[short] Windows: 0x3d7b0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x32fe74
     * @note[short] MacOS (Intel): 0x3a9d50
     * @note[short] Windows: 0x3d720
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
    cocos2d::CCArray* m_dots;
    int m_slowPage;
    float m_touchX;
    float m_touchQuotient;
    bool m_looped;
    DynamicScrollDelegate* m_dynamicDelegate;
    cocos2d::CCArray* m_dynamicObjects;
    bool m_dynamic;
    int m_touchType;
    bool m_ignoreTouchCancel;
    cocos2d::CCTouch* m_touch;
    cocos2d::CCArray* m_pages;
    double m_touchTime;
    cocos2d::CCPoint m_position;
    ExtendedLayer* m_extendedLayer;
    cocos2d::CCRect m_rect;
    float m_unkFloat1;
    float m_maxSpeed;
    float m_minSpeed;
    float m_unkFloat2;
    BoomScrollLayerDelegate* m_delegate;
    bool m_pageMoving;
    bool m_pagesInvisible;
    float m_unkFloat3;
    float m_unkFloat4;
    float m_width;
    bool m_cancelAndStealTouch;
    bool m_dotsVisible;
    cocos2d::CCPoint m_dotPosition;
    cocos2d::ccColor4B m_unkColor1;
    cocos2d::ccColor4B m_unkColor2;
    int m_page;
    float m_pageOffset;
    void* m_unkPtr;
    bool m_doVisit;
    cocos2d::CCRect m_clippingRect;
};
