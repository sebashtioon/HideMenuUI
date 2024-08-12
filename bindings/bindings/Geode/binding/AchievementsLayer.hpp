#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class AchievementsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "AchievementsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementsLayer, GJDropDownLayer)
    
private:
    [[deprecated("AchievementsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AchievementsLayer* create();
public:

    /**
     * @note[short] Windows: 0x80cd0
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] Windows: 0x80eb0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x80ec0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AchievementsLayer::setupLevelBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLevelBrowser(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("AchievementsLayer::setupPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void setupPageInfo(int p0, int p1, int p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x3009d0
     * @note[short] MacOS (Intel): 0x375020
     * @note[short] Windows: 0x80c30
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x300570
     * @note[short] MacOS (Intel): 0x374b60
     * @note[short] Windows: 0x80980
     * @note[short] Android
     */
    virtual void customSetup();
    int m_currentPage;
};
