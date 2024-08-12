#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartPrefab : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartPrefab";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartPrefab, cocos2d::CCObject)
    
private:
    [[deprecated("GJSmartPrefab::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJSmartPrefab* create();
public:
    
private:
    [[deprecated("GJSmartPrefab::createWithCoder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJSmartPrefab::dataLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJSmartPrefab::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init();
public:

    /**
     * @note[short] MacOS (ARM): 0x3a4d64
     * @note[short] MacOS (Intel): 0x432260
     * @note[short] Windows: 0x2a3380
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("GJSmartPrefab::canEncode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3a4c04
     * @note[short] MacOS (Intel): 0x432110
     * @note[short] Android
     */
    virtual bool canEncode();
public:
};
