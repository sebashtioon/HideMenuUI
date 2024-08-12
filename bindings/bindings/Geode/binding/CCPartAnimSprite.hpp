#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCPartAnimSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCPartAnimSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCPartAnimSprite, cocos2d::CCSprite)
    
private:
    [[deprecated("CCPartAnimSprite::changeTextureOfID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn changeTextureOfID(char const* p0, char const* p1);
public:
    
private:
    [[deprecated("CCPartAnimSprite::countParts not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countParts();
public:
    
private:
    [[deprecated("CCPartAnimSprite::createWithAnimDesc not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithAnimDesc(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
public:
    
private:
    [[deprecated("CCPartAnimSprite::dirtify not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dirtify();
public:
    
private:
    [[deprecated("CCPartAnimSprite::getSpriteForKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpriteForKey(char const* p0);
public:
    
private:
    [[deprecated("CCPartAnimSprite::initWithAnimDesc not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn initWithAnimDesc(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x45940
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("CCPartAnimSprite::setFlipX not implemented")]]
    /**
     * @note[short] Android
     */
    void setFlipX(bool p0);
public:
    
private:
    [[deprecated("CCPartAnimSprite::setFlipY not implemented")]]
    /**
     * @note[short] Android
     */
    void setFlipY(bool p0);
public:
    
private:
    [[deprecated("CCPartAnimSprite::transformSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transformSprite(SpriteDescription* p0);
public:
    
private:
    [[deprecated("CCPartAnimSprite::tweenSpriteTo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tweenSpriteTo(SpriteDescription* p0, float p1);
public:
    
private:
    [[deprecated("CCPartAnimSprite::tweenToFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tweenToFrame(cocos2d::CCSpriteFrame* p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x302588
     * @note[short] MacOS (Intel): 0x376d90
     * @note[short] Windows: 0x45830
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x3025b0
     * @note[short] MacOS (Intel): 0x376db0
     * @note[short] Windows: 0x45850
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x302560
     * @note[short] MacOS (Intel): 0x376d70
     * @note[short] Windows: 0x45810
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x302874
     * @note[short] MacOS (Intel): 0x377020
     * @note[short] Windows: 0x45a20
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x3025d8
     * @note[short] MacOS (Intel): 0x376dd0
     * @note[short] Windows: 0x45870
     * @note[short] Android
     */
    virtual void setBlendFunc(cocos2d::_ccBlendFunc p0);
    
private:
    [[deprecated("CCPartAnimSprite::setDisplayFrame not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x30212c
     * @note[short] MacOS (Intel): 0x376940
     * @note[short] Android
     */
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame* p0);
public:
    
private:
    [[deprecated("CCPartAnimSprite::isFrameDisplayed not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x30228c
     * @note[short] MacOS (Intel): 0x376ab0
     * @note[short] Android
     */
    virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame* p0);
public:
    
private:
    [[deprecated("CCPartAnimSprite::displayFrame not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x3022a4
     * @note[short] MacOS (Intel): 0x376ad0
     * @note[short] Android
     */
    virtual cocos2d::CCSpriteFrame* displayFrame();
public:
};
