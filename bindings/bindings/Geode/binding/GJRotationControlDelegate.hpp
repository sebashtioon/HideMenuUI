#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRotationControlDelegate {
public:
    static constexpr auto CLASS_NAME = "GJRotationControlDelegate";
    
private:
    [[deprecated("GJRotationControlDelegate::angleChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void angleChanged(float p0);
public:
    
private:
    [[deprecated("GJRotationControlDelegate::angleChangeBegin not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void angleChangeBegin();
public:
    
private:
    [[deprecated("GJRotationControlDelegate::angleChangeEnded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void angleChangeEnded();
public:
};
