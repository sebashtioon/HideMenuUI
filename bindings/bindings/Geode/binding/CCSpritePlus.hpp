#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpritePlus : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpritePlus";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpritePlus, cocos2d::CCSprite)
    
private:
    [[deprecated("CCSpritePlus::addFollower not implemented")]]
    /**
Adds a follower to the sprite

 @param follower Something that will follow this spri     * @note[short] Android
     */
    void addFollower(cocos2d::CCNode* follower);
public:
    
private:
    [[deprecated("CCSpritePlus::createWithSpriteFrame not implemented")]]
    /**
Creates a sprite by a given sprite frame

 @param frame the frame to give to the specific sprite

 @return CCSpritePlus object and returns null if initialization fai     * @note[short] Android
     */
    static CCSpritePlus* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);
public:
    
private:
    [[deprecated("CCSpritePlus::createWithSpriteFrameName not implemented")]]
    /**
Creates a sprite by a given sprite's frame name

 @param frame the frame or filename to give to the specific sprite

 @return CCSpritePlus object and returns null if initialization fai     * @note[short] Android
     */
    static CCSpritePlus* createWithSpriteFrameName(char const* frame);
public:
    
private:
    [[deprecated("CCSpritePlus::followSprite not implemented")]]
    /**
Attaches a sprite to the sprite. and other way around

 you can think of this as attaching 2 lego blocks together and letting

 it drag along.

 @param sprite the sprite to attach to the main sprite and vice ver     * @note[short] Android
     */
    void followSprite(CCSpritePlus* sprite);
public:
    
private:
    [[deprecated("CCSpritePlus::getFollower not implemented")]]
    /**
Obtains the first following sprite if it has a follower on hand

 @return nullptr if there is no follower avalib     * @note[short] Android
     */
    CCSpritePlus* getFollower();
public:

    /**
Removes a specific following sprite from this sprite.

 @param sprite follower sprite that will be remove     * @note[short] Windows: 0x474f0
     * @note[short] Android
     */
    void removeFollower(cocos2d::CCNode* sprite);
    
private:
    [[deprecated("CCSpritePlus::stopFollow not implemented")]]
    /**
Stops this child sprite from following it's given pare     * @note[short] Android
     */
    void stopFollow();
public:

    /**
Sets X's scale on itself and it's followers

 @param fScaleX the scale of X to s     * @note[short] MacOS (ARM): 0x3f089c
     * @note[short] MacOS (Intel): 0x48ae40
     * @note[short] Windows: 0x47350
     * @note[short] Android
     */
    virtual void setScaleX(float fScaleX);

    /**
Sets Y's scale on itself and it's followers

 @param fScaleY the scale of Y to s     * @note[short] MacOS (ARM): 0x3f0918
     * @note[short] MacOS (Intel): 0x48aec0
     * @note[short] Windows: 0x473d0
     * @note[short] Android
     */
    virtual void setScaleY(float fScaleY);

    /**
Sets the Scale of itself and it's followers

 @param fScale the scale value to s     * @note[short] MacOS (ARM): 0x3f0994
     * @note[short] MacOS (Intel): 0x48af40
     * @note[short] Windows: 0x47460
     * @note[short] Android
     */
    virtual void setScale(float fScale);

    /**
Sets the position where the sprite will be at and it's followers

 @param pos the position to place to the sprite and it's followe     * @note[short] MacOS (ARM): 0x3f056c
     * @note[short] MacOS (Intel): 0x48aaa0
     * @note[short] Windows: 0x46f50
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& pos);

    /**
Sets the sprite's given rotation and it's followers

 @param fRotation the rotation value to s     * @note[short] MacOS (ARM): 0x3f05e0
     * @note[short] MacOS (Intel): 0x48ab20
     * @note[short] Windows: 0x46fe0
     * @note[short] Android
     */
    virtual void setRotation(float fRotation);

    /**
Sets the sprite's given rotation of X and it's followers

 @param fRotationX the rotation of X to se     * @note[short] MacOS (ARM): 0x3f0654
     * @note[short] MacOS (Intel): 0x48aba0
     * @note[short] Windows: 0x47070
     * @note[short] Android
     */
    virtual void setRotationX(float fRotationX);

    /**
Sets the sprite's given rotation of Y and it's followers

 @param fRotationY the roation of Y to s     * @note[short] MacOS (ARM): 0x3f06c8
     * @note[short] MacOS (Intel): 0x48ac20
     * @note[short] Windows: 0x47100
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
Initalizes the sprite using a texture

 @param texture the texture to initalize the sprite with

 @return true if initalization succeede     * @note[short] MacOS (ARM): 0x3f0558
     * @note[short] MacOS (Intel): 0x48aa80
     * @note[short] Windows: 0x46f30
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /**
Initalizes the sprite with a frame name

 @param frame the frame to initalize the sprite with

 @return true if initalization succeed     * @note[short] MacOS (ARM): 0x3f054c
     * @note[short] MacOS (Intel): 0x48aa60
     * @note[short] Windows: 0x46f20
     * @note[short] Android
     */
    virtual bool initWithSpriteFrameName(char const* p0);

    /**
Sets flipX to itself and it's followers

 @param flipX the direction that the sprite should be flipped      * @note[short] MacOS (ARM): 0x3f073c
     * @note[short] MacOS (Intel): 0x48aca0
     * @note[short] Windows: 0x47190
     * @note[short] Android
     */
    virtual void setFlipX(bool flipX);

    /**
Sets flipY to itself and it's followers

 @param flipY the direction that the sprite should be flipped      * @note[short] MacOS (ARM): 0x3f07ec
     * @note[short] MacOS (Intel): 0x48ad70
     * @note[short] Windows: 0x47270
     * @note[short] Android
     */
    virtual void setFlipY(bool flipY);
    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
    GEODE_PAD(1);
};
