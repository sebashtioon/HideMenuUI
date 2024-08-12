#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJBigSpriteNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJBigSpriteNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBigSpriteNode, cocos2d::CCNode)
    
private:
    [[deprecated("GJBigSpriteNode::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJBigSpriteNode* create();
public:
    
private:
    [[deprecated("GJBigSpriteNode::init not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x265f10
     * @note[short] Android
     */
    virtual bool init();
public:
};
