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

class GJMessageCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessageCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessageCell, TableViewCell)

    /**
     * @note[short] Windows: 0xbab70
     * @note[short] Android
     */
    void loadFromMessage(GJUserMessage* p0);
    
private:
    [[deprecated("GJMessageCell::markAsRead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markAsRead();
public:
    
private:
    [[deprecated("GJMessageCell::onDeleteMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteMessage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::onToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::onViewMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewMessage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessageCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:
    
private:
    [[deprecated("GJMessageCell::updateToggle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateToggle();
public:

    /**
     * @note[short] MacOS (ARM): 0x1fd228
     * @note[short] MacOS (Intel): 0x254100
     * @note[short] Windows: 0xb99b0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("GJMessageCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fd510
     * @note[short] MacOS (Intel): 0x254410
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] MacOS (ARM): 0x1fd5bc
     * @note[short] MacOS (Intel): 0x2544e0
     * @note[short] Windows: 0xbb7d0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1fd720
     * @note[short] MacOS (Intel): 0x254670
     * @note[short] Windows: 0xbb970
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1fd904
     * @note[short] MacOS (Intel): 0x254850
     * @note[short] Windows: 0xbbaf0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);
    
private:
    [[deprecated("GJMessageCell::onClosePopup not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fda6c
     * @note[short] MacOS (Intel): 0x2549c0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
public:
};
