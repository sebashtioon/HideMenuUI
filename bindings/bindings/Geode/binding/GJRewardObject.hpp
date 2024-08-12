#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRewardObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardObject, cocos2d::CCObject)
    
private:
    [[deprecated("GJRewardObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJRewardObject* create();
public:
    
private:
    [[deprecated("GJRewardObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJRewardObject* create(SpecialRewardItem p0, int p1, int p2);
public:
    
private:
    [[deprecated("GJRewardObject::createItemUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createItemUnlock(UnlockType p0, int p1);
public:
    
private:
    [[deprecated("GJRewardObject::createWithCoder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJRewardObject::dataLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJRewardObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(SpecialRewardItem p0, int p1, int p2);
public:
    
private:
    [[deprecated("GJRewardObject::isSpecialType not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpecialType();
public:

    /**
     * @note[short] MacOS (ARM): 0x7ef00
     * @note[short] MacOS (Intel): 0x8e000
     * @note[short] Windows: 0x1e71d0
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("GJRewardObject::canEncode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x7ef80
     * @note[short] MacOS (Intel): 0x8e080
     * @note[short] Android
     */
    virtual bool canEncode();
public:
    SpecialRewardItem m_specialRewardItem;
    UnlockType m_unlockType;
    int m_itemID;
    int m_total;
};
