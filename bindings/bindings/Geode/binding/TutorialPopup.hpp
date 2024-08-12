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

class TutorialPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialPopup, FLAlertLayer)
    
private:
    [[deprecated("TutorialPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static TutorialPopup* create(gd::string p0);
public:
    
private:
    [[deprecated("TutorialPopup::animateMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animateMenu();
public:
    
private:
    [[deprecated("TutorialPopup::closeTutorial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeTutorial(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("TutorialPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(gd::string p0);
public:
    
private:
    [[deprecated("TutorialPopup::registerForCallback not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerForCallback(cocos2d::SEL_MenuHandler p0, cocos2d::CCNode* p1);
public:
    
private:
    [[deprecated("TutorialPopup::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5074ec
     * @note[short] MacOS (Intel): 0x5dce50
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("TutorialPopup::show not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5075c0
     * @note[short] MacOS (Intel): 0x5dcf20
     * @note[short] Android
     */
    virtual void show();
public:
};
