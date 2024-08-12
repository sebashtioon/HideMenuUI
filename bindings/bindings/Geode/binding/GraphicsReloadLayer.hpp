#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GraphicsReloadLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GraphicsReloadLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GraphicsReloadLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GraphicsReloadLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GraphicsReloadLayer* create(cocos2d::TextureQuality p0, cocos2d::CCSize p1, bool p2, bool p3, bool p4);
public:
    
private:
    [[deprecated("GraphicsReloadLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::TextureQuality p0, cocos2d::CCSize p1, bool p2, bool p3, bool p4);
public:
    
private:
    [[deprecated("GraphicsReloadLayer::performReload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performReload();
public:
    
private:
    [[deprecated("GraphicsReloadLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(cocos2d::TextureQuality p0, cocos2d::CCSize p1, bool p2, bool p3, bool p4);
public:
};
