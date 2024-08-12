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
#include "FLAlertLayerProtocol.hpp"

class CreateGuidelinesLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CreateGuidelinesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateGuidelinesLayer, FLAlertLayer)
    
private:
    [[deprecated("CreateGuidelinesLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CreateGuidelinesLayer* create(CustomSongDelegate* p0, AudioGuidelinesType p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::doClearGuidelines not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doClearGuidelines();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::getMergedRecordString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMergedRecordString(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CustomSongDelegate* p0, AudioGuidelinesType p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onClearGuidelines not implemented")]]
    /**
     * @note[short] Android
     */
    void onClearGuidelines(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onStop not implemented")]]
    /**
     * @note[short] Android
     */
    void onStop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::toggleItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleItems(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x46b4d8
     * @note[short] MacOS (Intel): 0x5151d0
     * @note[short] Windows: 0x995e0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x46b730
     * @note[short] MacOS (Intel): 0x515440
     * @note[short] Windows: 0x998b0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x46b860
     * @note[short] MacOS (Intel): 0x515550
     * @note[short] Windows: 0x99930
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("CreateGuidelinesLayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x46b930
     * @note[short] MacOS (Intel): 0x5155f0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x46b94c
     * @note[short] MacOS (Intel): 0x515630
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x46b6ac
     * @note[short] MacOS (Intel): 0x5153a0
     * @note[short] Windows: 0x99830
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x46b984
     * @note[short] MacOS (Intel): 0x515670
     * @note[short] Windows: 0x999e0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x46b5a0
     * @note[short] MacOS (Intel): 0x5152a0
     * @note[short] Windows: 0x99750
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x46b670
     * @note[short] MacOS (Intel): 0x515370
     * @note[short] Windows: 0x82fc0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x46a9bc
     * @note[short] MacOS (Intel): 0x514600
     * @note[short] Windows: 0x98e90
     * @note[short] Android
     */
    virtual TodoReturn playMusic();

    /**
     * @note[short] MacOS (ARM): 0x46b6e8
     * @note[short] MacOS (Intel): 0x5153f0
     * @note[short] Windows: 0x99850
     * @note[short] Android
     */
    virtual TodoReturn registerTouch();

    /**
     * @note[short] MacOS (ARM): 0x46b4e8
     * @note[short] MacOS (Intel): 0x5151f0
     * @note[short] Windows: 0x99600
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46a8a8
     * @note[short] MacOS (Intel): 0x5144f0
     * @note[short] Windows: 0x98d00
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46aa5c
     * @note[short] MacOS (Intel): 0x514690
     * @note[short] Windows: 0x98ff0
     * @note[short] Android
     */
    virtual TodoReturn recordingDidStop();
};
