#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpriteWithHue : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteWithHue";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteWithHue, cocos2d::CCSprite)
    
private:
    [[deprecated("CCSpriteWithHue::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCSpriteWithHue* create(gd::string const& p0, cocos2d::CCRect const& p1);
public:
    
private:
    [[deprecated("CCSpriteWithHue::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCSpriteWithHue* create(gd::string const& p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::createWithSpriteFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
public:

    /**
     * @note[short] Windows: 0x47610
     * @note[short] Android
     */
    TodoReturn createWithSpriteFrameName(gd::string const& p0);
    
private:
    [[deprecated("CCSpriteWithHue::createWithTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
public:
    
private:
    [[deprecated("CCSpriteWithHue::createWithTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::getAlpha not implemented")]]
    /**
     * @note[short] Android
     */
    float getAlpha();
public:
    
private:
    [[deprecated("CCSpriteWithHue::getHue not implemented")]]
    /**
     * @note[short] Android
     */
    float getHue();
public:
    
private:
    [[deprecated("CCSpriteWithHue::getUniformLocations not implemented")]]
    /**
     * @note[short] Android
     */
    void getUniformLocations();
public:
    
private:
    [[deprecated("CCSpriteWithHue::initShader not implemented")]]
    /**
     * @note[short] Android
     */
    void initShader();
public:
    
private:
    [[deprecated("CCSpriteWithHue::setCustomLuminance not implemented")]]
    /**
     * @note[short] Android
     */
    void setCustomLuminance(float p0, float p1, float p2);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setEvenLuminance not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5229c0
     * @note[short] MacOS (Intel): 0x5fb1b0
     * @note[short] Android
     */
    void setEvenLuminance(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setHue not implemented")]]
    /**
     * @note[short] Android
     */
    void setHue(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setHueDegrees not implemented")]]
    /**
     * @note[short] Android
     */
    void setHueDegrees(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setLuminance not implemented")]]
    /**
     * @note[short] Android
     */
    void setLuminance(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setupDefaultSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupDefaultSettings();
public:
    
private:
    [[deprecated("CCSpriteWithHue::updateColorMatrix not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorMatrix();
public:
    
private:
    [[deprecated("CCSpriteWithHue::updateHue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHue(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5229f0
     * @note[short] MacOS (Intel): 0x5fb200
     * @note[short] iOS: 0x1af588
     * @note[short] Android
     */
    virtual void draw();
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithTexture not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x52245c
     * @note[short] MacOS (Intel): 0x5faad0
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithTexture not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5223e0
     * @note[short] MacOS (Intel): 0x5fab40
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1);
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithTexture not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x52216c
     * @note[short] MacOS (Intel): 0x5fa890
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x52246c
     * @note[short] MacOS (Intel): 0x5fab60
     * @note[short] Windows: 0x477e0
     * @note[short] iOS: 0x1af228
     * @note[short] Android
     */
    virtual bool initWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
    
private:
    [[deprecated("CCSpriteWithHue::getShaderName not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x521c58
     * @note[short] MacOS (Intel): 0x5fa3e0
     * @note[short] iOS: 0x1aee70
     * @note[short] Android
     */
    virtual TodoReturn getShaderName();
public:
    
private:
    [[deprecated("CCSpriteWithHue::shaderBody not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5225b0
     * @note[short] MacOS (Intel): 0x5faca0
     * @note[short] iOS: 0x1af334
     * @note[short] Android
     */
    virtual char* shaderBody();
public:

    /**
     * @note[short] MacOS (ARM): 0x5225c8
     * @note[short] MacOS (Intel): 0x5facc0
     * @note[short] Windows: 0x47a90
     * @note[short] Android
     */
    virtual void updateColor();
    float m_hue;
    float m_luminance[3];
    std::array<std::array<float, 3>, 3> m_colorMatrix;
    float m_uHueLoc;
    float m_uAlphaLoc;
    float m_uLumLoc;
};
