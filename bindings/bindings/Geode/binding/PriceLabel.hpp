#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PriceLabel : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PriceLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PriceLabel, cocos2d::CCNode)
    
private:
    [[deprecated("PriceLabel::create not implemented")]]
    /**
     * @note[short] Android
     */
    static PriceLabel* create(int p0);
public:
    
private:
    [[deprecated("PriceLabel::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("PriceLabel::setColor not implemented")]]
    /**
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("PriceLabel::setOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setOpacity(float p0);
public:
    
private:
    [[deprecated("PriceLabel::setPrice not implemented")]]
    /**
     * @note[short] Android
     */
    void setPrice(int p0);
public:
};
