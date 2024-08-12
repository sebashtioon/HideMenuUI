#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SFXInfoObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SFXInfoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SFXInfoObject, cocos2d::CCObject)
    
private:
    [[deprecated("SFXInfoObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SFXInfoObject* create(int p0, gd::string p1, int p2, int p3, int p4);
public:
    
private:
    [[deprecated("SFXInfoObject::getLowerCaseName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLowerCaseName();
public:
    
private:
    [[deprecated("SFXInfoObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0, gd::string p1, int p2, int p3, int p4);
public:
};
