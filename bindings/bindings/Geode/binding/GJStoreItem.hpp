#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJStoreItem : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJStoreItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJStoreItem, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJStoreItem();

    /**
     * @note[short] MacOS (ARM): 0x5a628
     * @note[short] MacOS (Intel): 0x653b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJStoreItem* create(int index, int typeID, int unlockType, int price, ShopType shopType);

    /**
     * @note[short] MacOS (ARM): 0x5a9f4
     * @note[short] MacOS (Intel): 0x65770
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    gd::string getCurrencyKey();

    /**
     * @note[short] MacOS (ARM): 0x7fc10
     * @note[short] MacOS (Intel): 0x8ed20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int index, int typeID, int unlockType, int price, ShopType shopType);
    geode::SeedValueRSV m_index;
    geode::SeedValueRSV m_typeID;
    geode::SeedValueRSV m_unlockType;
    geode::SeedValueRSV m_price;
    ShopType m_shopType;
};
