#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextArea : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "TextArea";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextArea, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x2b0bf8
     * @note[short] MacOS (Intel): 0x320310
     * @note[short] Windows: 0x75960
     * @note[short] iOS: 0xf7ed8
     * @note[short] Android
     */
    static TextArea* create(gd::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor);

    /**
     * @note[short] MacOS (ARM): 0x2b1814
     * @note[short] MacOS (Intel): 0x320fb0
     * @note[short] Windows: 0x76110
     * @note[short] Android
     */
    void colorAllCharactersTo(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("TextArea::colorAllLabels not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b18d8
     * @note[short] MacOS (Intel): 0x321060
     * @note[short] Android
     */
    void colorAllLabels(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("TextArea::fadeIn not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b14c8
     * @note[short] MacOS (Intel): 0x320c80
     * @note[short] Android
     */
    void fadeIn(float p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x2b1aac
     * @note[short] MacOS (Intel): 0x3212a0
     * @note[short] Windows: 0x763a0
     * @note[short] Android
     */
    void fadeInCharacters(float p0, float p1);
    
private:
    [[deprecated("TextArea::fadeOut not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b16a0
     * @note[short] MacOS (Intel): 0x320e40
     * @note[short] Android
     */
    void fadeOut(float p0);
public:
    
private:
    [[deprecated("TextArea::fadeOutAndRemove not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b1630
     * @note[short] MacOS (Intel): 0x320de0
     * @note[short] Android
     */
    void fadeOutAndRemove();
public:

    /**
     * @note[short] MacOS (ARM): 0x2b160c
     * @note[short] MacOS (Intel): 0x320db0
     * @note[short] Windows: 0x760b0
     * @note[short] Android
     */
    void finishFade();
    
private:
    [[deprecated("TextArea::hideAll not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b1244
     * @note[short] MacOS (Intel): 0x320a10
     * @note[short] iOS: 0xf8380
     * @note[short] Android
     */
    void hideAll();
public:
    
private:
    [[deprecated("TextArea::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b0df0
     * @note[short] MacOS (Intel): 0x320530
     * @note[short] iOS: 0xf8004
     * @note[short] Android
     */
    bool init(gd::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor);
public:
    
private:
    [[deprecated("TextArea::setIgnoreColorCode not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b1230
     * @note[short] MacOS (Intel): 0x3209f0
     * @note[short] Android
     */
    void setIgnoreColorCode(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2b0f30
     * @note[short] MacOS (Intel): 0x320680
     * @note[short] Windows: 0x75ba0
     * @note[short] iOS: 0xf80fc
     * @note[short] Android
     */
    void setString(gd::string p0);
    
private:
    [[deprecated("TextArea::showAll not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b13e4
     * @note[short] MacOS (Intel): 0x320ba0
     * @note[short] Android
     */
    void showAll();
public:

    /**
     * @note[short] MacOS (ARM): 0x2b131c
     * @note[short] MacOS (Intel): 0x320ae0
     * @note[short] Windows: 0x75ff0
     * @note[short] Android
     */
    void stopAllCharacterActions();

    /**
     * @note[short] MacOS (ARM): 0x2b1950
     * @note[short] MacOS (Intel): 0x3210f0
     * @note[short] Windows: 0x761c0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x2b17a8
     * @note[short] MacOS (Intel): 0x320f40
     * @note[short] Windows: 0x760d0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
    bool m_disableColor;
    MultilineBitmapFont* m_label;
    float m_width;
    int m_unknown;
    gd::string m_fontFile;
    float m_height;
    bool m_unkBool;
    cocos2d::CCPoint m_anchorPoint;
    bool m_allShown;
    float m_scale;
    int m_rectHeight;
    int m_rectWidth;
    float m_maxWidth;
    cocos2d::CCPoint m_unkPoint;
    TextAreaDelegate* m_delegate;
    cocos2d::CCDictionary* m_shakeCharacters;
    float m_shakeElapsed;
};
