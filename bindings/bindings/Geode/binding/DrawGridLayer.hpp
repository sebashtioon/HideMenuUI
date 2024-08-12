#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DrawGridLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "DrawGridLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DrawGridLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x2cfe50
     * @note[short] Android
     */
    static DrawGridLayer* create(cocos2d::CCNode* p0, LevelEditorLayer* p1);
    
private:
    [[deprecated("DrawGridLayer::addAudioLineObject not implemented")]]
    /**
     * @note[short] Android
     */
    void addAudioLineObject(AudioLineGuideGameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::addToEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToEffects(EffectGameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::addToGuides not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToGuides(GameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::addToSpeedObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToSpeedObjects(EffectGameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::getPortalMinMax not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPortalMinMax(GameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, LevelEditorLayer* p1);
public:

    /**
     * @note[short] Windows: 0x2d0030
     * @note[short] Android
     */
    void loadTimeMarkers(gd::string p0);
    
private:
    [[deprecated("DrawGridLayer::posForTime not implemented")]]
    /**
     * @note[short] Android
     */
    float posForTime(float p0);
public:
    
private:
    [[deprecated("DrawGridLayer::postUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void postUpdate();
public:
    
private:
    [[deprecated("DrawGridLayer::removeAudioLineObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeAudioLineObject(AudioLineGuideGameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::removeFromEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeFromEffects(EffectGameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::removeFromGuides not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeFromGuides(GameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::removeFromSpeedObjects not implemented")]]
    /**
     * @note[short] iOS: 0x36ce70
     * @note[short] Android
     */
    TodoReturn removeFromSpeedObjects(EffectGameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::sortSpeedObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sortSpeedObjects();
public:
    
private:
    [[deprecated("DrawGridLayer::timeForPos not implemented")]]
    /**
     * @note[short] Android
     */
    float timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, bool p4, bool p5, int p6);
public:
    
private:
    [[deprecated("DrawGridLayer::updateMusicGuideTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMusicGuideTime(float p0);
public:
    
private:
    [[deprecated("DrawGridLayer::updateTimeMarkers not implemented")]]
    /**
     * @note[short] Android
     */
    void updateTimeMarkers();
public:

    /**
     * @note[short] MacOS (ARM): 0xdbf54
     * @note[short] MacOS (Intel): 0xf9a00
     * @note[short] Windows: 0x2d0350
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0xdc064
     * @note[short] MacOS (Intel): 0xf9b90
     * @note[short] Windows: 0x2d0550
     * @note[short] Android
     */
    virtual void draw();
    GEODE_PAD(112);
    
private:
    [[deprecated("DrawGridLayer::onHideLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void onHideLayer(cocos2d::CCObject* sender);
public:
    LevelEditorLayer* m_editorLayer;
    GEODE_PAD(108);
    float m_gridSize;
};
