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
#include "ListUploadDelegate.hpp"

class UploadListPopup : public FLAlertLayer, public ListUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadListPopup, FLAlertLayer)
    
private:
    [[deprecated("UploadListPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UploadListPopup* create(GJLevelList* p0);
public:

    /**
     * @note[short] Windows: 0x2eaca0
     * @note[short] Android
     */
    bool init(GJLevelList* p0);
    
private:
    [[deprecated("UploadListPopup::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadListPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadListPopup::onReturnToList not implemented")]]
    /**
     * @note[short] Android
     */
    void onReturnToList(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("UploadListPopup::show not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2f274c
     * @note[short] MacOS (Intel): 0x365890
     * @note[short] Android
     */
    virtual void show();
public:

    /**
     * @note[short] MacOS (ARM): 0x2f21f8
     * @note[short] MacOS (Intel): 0x365330
     * @note[short] Windows: 0x2eb1e0
     * @note[short] Android
     */
    virtual void listUploadFinished(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x2f23fc
     * @note[short] MacOS (Intel): 0x365550
     * @note[short] Windows: 0x2eb3b0
     * @note[short] Android
     */
    virtual void listUploadFailed(GJLevelList* p0, int p1);
};
