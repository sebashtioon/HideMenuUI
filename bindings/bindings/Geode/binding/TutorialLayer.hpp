#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class TutorialLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialLayer, FLAlertLayer)
    
private:
    [[deprecated("TutorialLayer::create not implemented")]]
    /**
     * @note[short] iOS: 0x1c7cfc
     * @note[short] Android
     */
    static TutorialLayer* create();
public:
    
private:
    [[deprecated("TutorialLayer::loadPage not implemented")]]
    /**
     * @note[short] iOS: 0x1c82a8
     * @note[short] Android
     */
    void loadPage(int p0);
public:
    
private:
    [[deprecated("TutorialLayer::onClose not implemented")]]
    /**
     * @note[short] iOS: 0x1c8238
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TutorialLayer::onNext not implemented")]]
    /**
     * @note[short] iOS: 0x1c8290
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TutorialLayer::removeTutorialTexture not implemented")]]
    /**
     * @note[short] iOS: 0x1c8648
     * @note[short] Android
     */
    void removeTutorialTexture();
public:
    
private:
    [[deprecated("TutorialLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x441ce8
     * @note[short] MacOS (Intel): 0x4e64f0
     * @note[short] iOS: 0x1c7db8
     * @note[short] Android
     */
    virtual bool init();
public:

    /**
     * @note[short] MacOS (ARM): 0x442764
     * @note[short] MacOS (Intel): 0x4e6f30
     * @note[short] Windows: 0x49fd20
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
