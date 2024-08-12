#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExtendedLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ExtendedLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExtendedLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ExtendedLayer();

    /**
     * @note[short] MacOS (ARM): 0x32e4e0
     * @note[short] MacOS (Intel): 0x3a81a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ExtendedLayer* create();

    /**
     * @note[short] MacOS (Intel): 0x3aa760
     * @note[short] Windows: 0x3de10
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3307bc
     * @note[short] MacOS (Intel): 0x3aa770
     * @note[short] Windows: 0x3de30
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
    BoomScrollLayerDelegate* m_delegate;
};
