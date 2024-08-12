#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChallengeItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJChallengeItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChallengeItem, cocos2d::CCObject)
    
private:
    [[deprecated("GJChallengeItem::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJChallengeItem* create();
public:
    
private:
    [[deprecated("GJChallengeItem::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJChallengeItem* create(GJChallengeType challengeType, int goal, int reward, int timeLeft, gd::string questName);
public:
    
private:
    [[deprecated("GJChallengeItem::createFromString not implemented")]]
    /**
     * @note[short] Android
     */
    static GJChallengeItem* createFromString(gd::string string);
public:
    
private:
    [[deprecated("GJChallengeItem::createWithCoder not implemented")]]
    /**
     * @note[short] Android
     */
    static GJChallengeItem* createWithCoder(DS_Dictionary* dsdict);
public:
    
private:
    [[deprecated("GJChallengeItem::dataLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dsdict);
public:
    
private:
    [[deprecated("GJChallengeItem::incrementCount not implemented")]]
    /**
     * @note[short] Android
     */
    void incrementCount(int add);
public:
    
private:
    [[deprecated("GJChallengeItem::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJChallengeType challengeType, int goal, int reward, int timeLeft, gd::string questName);
public:
    
private:
    [[deprecated("GJChallengeItem::setCount not implemented")]]
    /**
     * @note[short] Android
     */
    void setCount(int value);
public:

    /**
     * @note[short] MacOS (ARM): 0x7fb2c
     * @note[short] MacOS (Intel): 0x8ec40
     * @note[short] Windows: 0x1e7f50
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dsdict);
    
private:
    [[deprecated("GJChallengeItem::canEncode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x7fc08
     * @note[short] MacOS (Intel): 0x8ed10
     * @note[short] Android
     */
    virtual bool canEncode();
public:
    GJChallengeType m_challengeType;
    geode::SeedValueSRV m_count;
    geode::SeedValueSRV m_reward;
    geode::SeedValueSRV m_goal;
    int m_timeLeft;
    bool m_canClaim;
    int m_position;
    gd::string m_name;
};
