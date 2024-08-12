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

class PurchaseItemPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PurchaseItemPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PurchaseItemPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2b4444
     * @note[short] MacOS (Intel): 0x323e80
     * @note[short] Windows: 0x29c5d0
     * @note[short] Android
     */
    static PurchaseItemPopup* create(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x2b6508
     * @note[short] MacOS (Intel): 0x326540
     * @note[short] Windows: 0x29c6c0
     * @note[short] Android
     */
    bool init(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x2b7040
     * @note[short] MacOS (Intel): 0x3271d0
     * @note[short] Windows: 0x82fc0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b707c
     * @note[short] MacOS (Intel): 0x327200
     * @note[short] Windows: 0x29d570
     * @note[short] Android
     */
    void onPurchase(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b70f0
     * @note[short] MacOS (Intel): 0x327270
     * @note[short] Windows: 0x82ff0
     * @note[short] Android
     */
    virtual void keyBackClicked();
    GJStoreItem* m_storeItem;
    GJPurchaseDelegate* m_delegate;
};
