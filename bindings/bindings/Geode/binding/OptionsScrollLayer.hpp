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
#include "TableViewCellDelegate.hpp"

class OptionsScrollLayer : public FLAlertLayer, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "OptionsScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsScrollLayer, FLAlertLayer)
    
private:
    [[deprecated("OptionsScrollLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static OptionsScrollLayer* create(cocos2d::CCArray* p0, bool p1, int p2);
public:
    
private:
    [[deprecated("OptionsScrollLayer::getRelevantObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelevantObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("OptionsScrollLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, bool p1, int p2);
public:
    
private:
    [[deprecated("OptionsScrollLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("OptionsScrollLayer::setupList not implemented")]]
    /**
     * @note[short] Android
     */
    void setupList(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("OptionsScrollLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x53ee20
     * @note[short] MacOS (Intel): 0x61bc10
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] MacOS (ARM): 0x53ecfc
     * @note[short] MacOS (Intel): 0x61bae0
     * @note[short] Windows: 0x31a670
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("OptionsScrollLayer::cellPerformedAction not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x53ee58
     * @note[short] MacOS (Intel): 0x61bc50
     * @note[short] Android
     */
    virtual void cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
public:
};
