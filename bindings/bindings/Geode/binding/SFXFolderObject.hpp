#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SFXInfoObject.hpp"

class SFXFolderObject : public SFXInfoObject {
public:
    static constexpr auto CLASS_NAME = "SFXFolderObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXFolderObject, SFXInfoObject)
    
private:
    [[deprecated("SFXFolderObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SFXFolderObject* create(int p0, gd::string p1, int p2);
public:
    
private:
    [[deprecated("SFXFolderObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0, gd::string p1, int p2);
public:
};
