#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class NodePoint : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "NodePoint";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(NodePoint, cocos2d::CCObject)
    
private:
    [[deprecated("NodePoint::create not implemented")]]
    /**
     * @note[short] Android
     */
    static NodePoint* create(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("NodePoint::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint p0);
public:
};
