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

class SongsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "SongsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongsLayer, GJDropDownLayer)
    
private:
    [[deprecated("SongsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SongsLayer* create();
public:

    /**
     * @note[short] MacOS (ARM): 0x46f5f8
     * @note[short] MacOS (Intel): 0x519f70
     * @note[short] Windows: 0x468670
     * @note[short] Android
     */
    virtual void customSetup();
};
