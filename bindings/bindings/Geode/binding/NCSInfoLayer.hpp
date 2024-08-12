#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class NCSInfoLayer {
public:
    static constexpr auto CLASS_NAME = "NCSInfoLayer";
    
private:
    [[deprecated("NCSInfoLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static NCSInfoLayer* create(CustomSongLayer* p0);
public:
    
private:
    [[deprecated("NCSInfoLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CustomSongLayer* p0);
public:
    
private:
    [[deprecated("NCSInfoLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NCSInfoLayer::onLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    void onLibrary(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NCSInfoLayer::onNCS not implemented")]]
    /**
     * @note[short] Android
     */
    void onNCS(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NCSInfoLayer::onNCSIO not implemented")]]
    /**
     * @note[short] Android
     */
    void onNCSIO(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NCSInfoLayer::onNCSUsage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNCSUsage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("NCSInfoLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1c42a0
     * @note[short] MacOS (Intel): 0x213260
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
