#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCNodeContainer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCNodeContainer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCNodeContainer, cocos2d::CCNode)
    
private:
    [[deprecated("CCNodeContainer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCNodeContainer* create();
public:
    
private:
    [[deprecated("CCNodeContainer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1293ec
     * @note[short] MacOS (Intel): 0x159cb0
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("CCNodeContainer::visit not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1293f0
     * @note[short] MacOS (Intel): 0x159cc0
     * @note[short] Android
     */
    virtual void visit();
public:
};
