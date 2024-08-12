#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUserMessage : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUserMessage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUserMessage, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4b57ac
     * @note[short] MacOS (Intel): 0x567830
     * @note[short] Windows: 0x16b5f0
     * @note[short] Android
     */
    static GJUserMessage* create();
    
private:
    [[deprecated("GJUserMessage::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJUserMessage* create(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GJUserMessage::init not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x5678d0
     * @note[short] Android
     */
    virtual bool init();
public:
    int m_messageID;
};
