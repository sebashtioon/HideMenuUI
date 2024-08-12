#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAnimatedSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCAnimatedSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimatedSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x2e0478
     * @note[short] MacOS (Intel): 0x351390
     * @note[short] Windows: 0x3f030
     * @note[short] Android
     */
     CCAnimatedSprite();
    
private:
    [[deprecated("CCAnimatedSprite::cleanupSprite not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2dfaf8
     * @note[short] MacOS (Intel): 0x3509d0
     * @note[short] Android
     */
    void cleanupSprite();
public:
    
private:
    [[deprecated("CCAnimatedSprite::createWithType not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2df14c
     * @note[short] MacOS (Intel): 0x34ffe0
     * @note[short] Android
     */
    static CCAnimatedSprite* createWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x2df220
     * @note[short] MacOS (Intel): 0x3500c0
     * @note[short] Windows: 0x3f140
     * @note[short] Android
     */
    bool initWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x2df40c
     * @note[short] MacOS (Intel): 0x3502a0
     * @note[short] Windows: 0x3f360
     * @note[short] Android
     */
    void loadType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x2dfc94
     * @note[short] MacOS (Intel): 0x350b90
     * @note[short] Windows: 0x3fe00
     * @note[short] Android
     */
    void runAnimation(gd::string p0);
    
private:
    [[deprecated("CCAnimatedSprite::runAnimationForced not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2dfd7c
     * @note[short] MacOS (Intel): 0x350c60
     * @note[short] Android
     */
    void runAnimationForced(gd::string p0);
public:
    
private:
    [[deprecated("CCAnimatedSprite::stopTween not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2e0290
     * @note[short] MacOS (Intel): 0x351190
     * @note[short] Android
     */
    void stopTween();
public:

    /**
     * @note[short] MacOS (ARM): 0x2dfb88
     * @note[short] MacOS (Intel): 0x350a70
     * @note[short] Windows: 0x3fe70
     * @note[short] Android
     */
    void switchToMode(spriteMode p0);

    /**
     * @note[short] MacOS (ARM): 0x2dfea4
     * @note[short] MacOS (Intel): 0x350d70
     * @note[short] Windows: 0x3fe70
     * @note[short] Android
     */
    void tweenToAnimation(gd::string p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x2e01a0
     * @note[short] MacOS (Intel): 0x3510a0
     * @note[short] Windows: 0x40140
     * @note[short] Android
     */
    void tweenToAnimationFinished();
    
private:
    [[deprecated("CCAnimatedSprite::willPlayAnimation not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2dfe74
     * @note[short] MacOS (Intel): 0x350d40
     * @note[short] Android
     */
    void willPlayAnimation();
public:

    /**
     * @note[short] MacOS (ARM): 0x2e0318
     * @note[short] MacOS (Intel): 0x351220
     * @note[short] Windows: 0x401f0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x2e03c8
     * @note[short] MacOS (Intel): 0x3512d0
     * @note[short] Windows: 0x40250
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x2e0300
     * @note[short] MacOS (Intel): 0x351200
     * @note[short] Windows: 0x401d0
     * @note[short] Android
     */
    virtual void animationFinished(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x2e02cc
     * @note[short] MacOS (Intel): 0x3511d0
     * @note[short] Windows: 0x40190
     * @note[short] Android
     */
    virtual void animationFinishedO(cocos2d::CCObject* p0);
    gd::string m_unkString1;
    gd::string m_unkString2;
    SpriteAnimationManager* m_animationManager;
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCSprite* m_fbfSprite;
    CCPartAnimSprite* m_paSprite;
    spriteMode m_spriteMode;
    gd::string m_currentAnim;
    AnimatedSpriteDelegate* m_delegate;
};
