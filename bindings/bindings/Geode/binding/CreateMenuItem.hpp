#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCMenuItemSpriteExtra.hpp"

class CreateMenuItem : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "CreateMenuItem";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateMenuItem, CCMenuItemSpriteExtra)
    
private:
    [[deprecated("CreateMenuItem::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CreateMenuItem* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
public:
    
private:
    [[deprecated("CreateMenuItem::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
public:
    gd::string m_spriteFileName;
    int m_objectID;
};
