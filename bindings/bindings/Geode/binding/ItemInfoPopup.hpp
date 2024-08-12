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

class ItemInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ItemInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2fc484
     * @note[short] MacOS (Intel): 0x3705b0
     * @note[short] Windows: 0x269640
     * @note[short] Android
     */
    static ItemInfoPopup* create(int p0, UnlockType p1);

    /**
     * @note[short] MacOS (ARM): 0x2fed78
     * @note[short] MacOS (Intel): 0x3731a0
     * @note[short] Windows: 0x269730
     * @note[short] Android
     */
    bool init(int p0, UnlockType p1);
    
private:
    [[deprecated("ItemInfoPopup::isUnlockedByDefault not implemented")]]
    /**
     * @note[short] Android
     */
    bool isUnlockedByDefault(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x26b660
     * @note[short] Android
     */
    TodoReturn nameForUnlockType(int p0, UnlockType p1);
    
private:
    [[deprecated("ItemInfoPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ItemInfoPopup::onCredit not implemented")]]
    /**
     * @note[short] Android
     */
    void onCredit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ItemInfoPopup::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x300394
     * @note[short] MacOS (Intel): 0x374960
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    int m_itemID;
    UnlockType m_unlockType;
    int m_accountID;
};
