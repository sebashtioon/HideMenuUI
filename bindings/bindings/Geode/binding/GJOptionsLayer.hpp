#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class GJOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJOptionsLayer, SetupTriggerPopup)
    
private:
    [[deprecated("GJOptionsLayer::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x23a7ec
     * @note[short] MacOS (Intel): 0x297d60
     * @note[short] Android
     */
    static GJOptionsLayer* create(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x23b080
     * @note[short] MacOS (Intel): 0x298780
     * @note[short] Windows: 0x27d8f0
     * @note[short] Android
     */
    void addGVToggle(char const* p0, char const* p1, char const* p2);
    
private:
    [[deprecated("GJOptionsLayer::addToggle not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x23b644
     * @note[short] MacOS (Intel): 0x298d70
     * @note[short] Android
     */
    void addToggle(char const* p0, int p1, bool p2, char const* p3);
public:

    /**
     * @note[short] MacOS (ARM): 0x23b1bc
     * @note[short] MacOS (Intel): 0x2988a0
     * @note[short] Windows: 0x27da30
     * @note[short] Android
     */
    void addToggleInternal(char const* p0, int p1, bool p2, char const* p3);

    /**
     * @note[short] MacOS (ARM): 0x23bf6c
     * @note[short] MacOS (Intel): 0x299660
     * @note[short] Windows: 0x27df30
     * @note[short] Android
     */
    int countForPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x23ac6c
     * @note[short] MacOS (Intel): 0x298310
     * @note[short] Windows: 0x27e450
     * @note[short] Android
     */
    void goToPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x23ba8c
     * @note[short] MacOS (Intel): 0x2991a0
     * @note[short] Windows: 0x27e000
     * @note[short] Android
     */
    void incrementCountForPage(int p0);
    
private:
    [[deprecated("GJOptionsLayer::infoKey not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x23bd70
     * @note[short] MacOS (Intel): 0x299480
     * @note[short] Android
     */
    const char* infoKey(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x23a984
     * @note[short] MacOS (Intel): 0x297fb0
     * @note[short] Windows: 0x27d5b0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x23b740
     * @note[short] MacOS (Intel): 0x298e80
     * @note[short] Windows: 0x27e290
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int p0);
    
private:
    [[deprecated("GJOptionsLayer::layerKey not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x23c0b4
     * @note[short] MacOS (Intel): 0x299790
     * @note[short] Android
     */
    const char* layerKey(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::nextPosition not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x23b648
     * @note[short] MacOS (Intel): 0x298d80
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int p0);
public:
    
private:
    [[deprecated("GJOptionsLayer::objectKey not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x23c08c
     * @note[short] MacOS (Intel): 0x299770
     * @note[short] Android
     */
    const char* objectKey(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x23bbb8
     * @note[short] MacOS (Intel): 0x2992b0
     * @note[short] Windows: 0x27e100
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int p0);
    
private:
    [[deprecated("GJOptionsLayer::offsetToNextPage not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x23b058
     * @note[short] MacOS (Intel): 0x298740
     * @note[short] Android
     */
    void offsetToNextPage();
public:

    /**
     * @note[short] MacOS (ARM): 0x23bd98
     * @note[short] MacOS (Intel): 0x2994a0
     * @note[short] Windows: 0x27e970
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23ac54
     * @note[short] MacOS (Intel): 0x2982d0
     * @note[short] Windows: 0x27e430
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23ac60
     * @note[short] MacOS (Intel): 0x2982f0
     * @note[short] Windows: 0x27e440
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23b90c
     * @note[short] MacOS (Intel): 0x299060
     * @note[short] Windows: 0x27e860
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJOptionsLayer::pageKey not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x23c064
     * @note[short] MacOS (Intel): 0x299750
     * @note[short] Android
     */
    const char* pageKey(int p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x21472c
     * @note[short] MacOS (Intel): 0x26e1d0
     * @note[short] Windows: 0x1e8fa0
     * @note[short] Android
     */
    virtual void didToggleGV(gd::string p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didToggle(int p0);
    float m_gap;
    int m_page;
    int m_togglesPerPage;
    int m_toggleCount;
    int m_maxPage;
    float m_maxLabelScale;
    float m_maxLabelWidth;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    float m_offset;
};
