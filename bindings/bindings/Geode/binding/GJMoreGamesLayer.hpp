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

class GJMoreGamesLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "GJMoreGamesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMoreGamesLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x26dd80
     * @note[short] Android
     */
    static GJMoreGamesLayer* create();
    
private:
    [[deprecated("GJMoreGamesLayer::getMoreGamesList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMoreGamesList();
public:
    
private:
    [[deprecated("GJMoreGamesLayer::customSetup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6a9344
     * @note[short] MacOS (Intel): 0x7a1510
     * @note[short] iOS: 0x6bedc
     * @note[short] Android
     */
    virtual void customSetup();
public:
};
