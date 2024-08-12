#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class GJRequestCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJRequestCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRequestCell, TableViewCell)

    /**
     * @note[short] Windows: 0xb99d0
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJRequestCell::markAsRead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markAsRead();
public:
    
private:
    [[deprecated("GJRequestCell::onDeleteRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::onToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::onViewFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJRequestCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("GJRequestCell::updateToggle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateToggle();
public:
    
private:
    [[deprecated("GJRequestCell::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fc704
     * @note[short] MacOS (Intel): 0x253360
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJRequestCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fc9e0
     * @note[short] MacOS (Intel): 0x253670
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] MacOS (ARM): 0x1fca8c
     * @note[short] MacOS (Intel): 0x253740
     * @note[short] Windows: 0xba580
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1fcc18
     * @note[short] MacOS (Intel): 0x253910
     * @note[short] Windows: 0xba730
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1fce18
     * @note[short] MacOS (Intel): 0x253b10
     * @note[short] Windows: 0xba910
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);
    
private:
    [[deprecated("GJRequestCell::onClosePopup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fcef0
     * @note[short] MacOS (Intel): 0x253c20
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
public:
};
