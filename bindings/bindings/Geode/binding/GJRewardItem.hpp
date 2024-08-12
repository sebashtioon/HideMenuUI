#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRewardItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardItem, cocos2d::CCObject)
    
private:
    [[deprecated("GJRewardItem::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJRewardItem* create();
public:
    
private:
    [[deprecated("GJRewardItem::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJRewardItem* create(int p0, int p1, gd::string p2);
public:
    
private:
    [[deprecated("GJRewardItem::createSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSpecial(GJRewardType p0, int p1, int p2, SpecialRewardItem p3, int p4, SpecialRewardItem p5, int p6, int p7, int p8);
public:
    
private:
    [[deprecated("GJRewardItem::createWithCoder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJRewardItem::createWithObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithObject(GJRewardType p0, GJRewardObject* p1);
public:
    
private:
    [[deprecated("GJRewardItem::createWithObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithObjects(GJRewardType p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("GJRewardItem::dataLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJRewardItem::getNextShardType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextShardType(SpecialRewardItem p0);
public:
    
private:
    [[deprecated("GJRewardItem::getRandomNonMaxShardType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRandomNonMaxShardType();
public:
    
private:
    [[deprecated("GJRewardItem::getRandomShardType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRandomShardType();
public:
    
private:
    [[deprecated("GJRewardItem::getRewardCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardCount(SpecialRewardItem p0);
public:
    
private:
    [[deprecated("GJRewardItem::getRewardObjectForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardObjectForType(SpecialRewardItem p0);
public:
    
private:
    [[deprecated("GJRewardItem::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0, int p1, gd::string p2);
public:
    
private:
    [[deprecated("GJRewardItem::isShardType not implemented")]]
    /**
     * @note[short] Android
     */
    bool isShardType(SpecialRewardItem p0);
public:
    
private:
    [[deprecated("GJRewardItem::rewardItemToStat not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rewardItemToStat(SpecialRewardItem p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x7f450
     * @note[short] MacOS (Intel): 0x8e580
     * @note[short] Windows: 0x1e7b00
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("GJRewardItem::canEncode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x7f4bc
     * @note[short] MacOS (Intel): 0x8e5e0
     * @note[short] Android
     */
    virtual bool canEncode();
public:
    int m_chestID;
    int m_timeRemaining;
    GJRewardType m_rewardType;
    cocos2d::CCArray* m_rewardObjects;
    bool m_unk;
};
