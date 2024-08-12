#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJScaleControlDelegate {
public:
    static constexpr auto CLASS_NAME = "GJScaleControlDelegate";
    
private:
    [[deprecated("GJScaleControlDelegate::scaleXChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void scaleXChanged(float p0, bool p1);
public:
    
private:
    [[deprecated("GJScaleControlDelegate::scaleYChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void scaleYChanged(float p0, bool p1);
public:
    
private:
    [[deprecated("GJScaleControlDelegate::scaleXYChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void scaleXYChanged(float p0, float p1, bool p2);
public:
    
private:
    [[deprecated("GJScaleControlDelegate::scaleChangeBegin not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void scaleChangeBegin();
public:
    
private:
    [[deprecated("GJScaleControlDelegate::scaleChangeEnded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void scaleChangeEnded();
public:
    
private:
    [[deprecated("GJScaleControlDelegate::updateScaleControl not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void updateScaleControl();
public:
    
private:
    [[deprecated("GJScaleControlDelegate::anchorPointMoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void anchorPointMoved(cocos2d::CCPoint p0);
public:
};
