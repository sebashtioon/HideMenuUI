#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCExtenderNode {
public:
    static constexpr auto CLASS_NAME = "CCExtenderNode";
    
private:
    [[deprecated("CCExtenderNode::setOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setOpacity(unsigned int p0);
public:
};
