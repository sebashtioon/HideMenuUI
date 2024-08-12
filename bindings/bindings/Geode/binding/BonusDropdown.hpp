#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BonusDropdown : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "BonusDropdown";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BonusDropdown, cocos2d::CCNode)
    
private:
    [[deprecated("BonusDropdown::create not implemented")]]
    /**
     * @note[short] Android
     */
    static BonusDropdown* create(gd::string p0, int p1);
public:
    
private:
    [[deprecated("BonusDropdown::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(gd::string p0, int p1);
public:
    
private:
    [[deprecated("BonusDropdown::show not implemented")]]
    /**
     * @note[short] Android
     */
    void show();
public:
};
