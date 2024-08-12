#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectManager, cocos2d::CCNode)
    
private:
    [[deprecated("ObjectManager::animLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animLoaded(char const* p0);
public:
    
private:
    [[deprecated("ObjectManager::getDefinition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDefinition(char const* p0);
public:
    
private:
    [[deprecated("ObjectManager::getGlobalAnimCopy not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGlobalAnimCopy(char const* p0);
public:

    /**
     * @note[short] Windows: 0x6cee0
     * @note[short] iOS: 0x25c9a8
     * @note[short] Android
     */
    static ObjectManager* instance();
    
private:
    [[deprecated("ObjectManager::loadCopiedAnimations not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadCopiedAnimations();
public:
    
private:
    [[deprecated("ObjectManager::loadCopiedSets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadCopiedSets();
public:
    
private:
    [[deprecated("ObjectManager::purgeObjectManager not implemented")]]
    /**
     * @note[short] iOS: 0x25ca10
     * @note[short] Android
     */
    TodoReturn purgeObjectManager();
public:
    
private:
    [[deprecated("ObjectManager::replaceAllOccurencesOfString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn replaceAllOccurencesOfString(cocos2d::CCString* p0, cocos2d::CCString* p1, cocos2d::CCDictionary* p2);
public:
    
private:
    [[deprecated("ObjectManager::setLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    void setLoaded(char const* p0);
public:

    /**
     * @note[short] Windows: 0x6cfd0
     * @note[short] iOS: 0x25cea8
     * @note[short] Android
     */
    void setup();
    
private:
    [[deprecated("ObjectManager::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6a957c
     * @note[short] MacOS (Intel): 0x7a1760
     * @note[short] Android
     */
    virtual bool init();
public:
};
