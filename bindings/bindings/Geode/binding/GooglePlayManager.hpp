#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GooglePlayManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GooglePlayManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GooglePlayManager, cocos2d::CCNode)
    
private:
    [[deprecated("GooglePlayManager::sharedState not implemented")]]
    /**
     * @note[short] iOS: 0x4819c
     * @note[short] Android
     */
    static GooglePlayManager* sharedState();
public:
    
private:
    [[deprecated("GooglePlayManager::googlePlaySignedIn not implemented")]]
    /**
     * @note[short] Android
     */
    void googlePlaySignedIn();
public:
    
private:
    [[deprecated("GooglePlayManager::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3e8524
     * @note[short] MacOS (Intel): 0x481fd0
     * @note[short] Android
     */
    virtual bool init();
public:
};
