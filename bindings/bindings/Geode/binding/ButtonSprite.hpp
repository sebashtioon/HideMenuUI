#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ButtonSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ButtonSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ButtonSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x3dea0
     * @note[short] iOS: 0x665ac
     * @note[short] Android
     */
     ButtonSprite();

    /**
Create a ButtonSprite with a top sprite and a texture.

 @param topSprite The top sprite to add on top of the sprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of top spri     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, bool absolute, float height, const char* texture, float scale);

    /**
Create a ButtonSprite with text, a font and a texture.

 @param caption The text of the ButtonSprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param font The name of the BM font file to use

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of text

 @returns Pointer to the created ButtonSprite, or nullptr on err     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(const char* caption, int width, bool absolute, const char* font, const char* texture, float height, float scale);

    /**
     * @note[short] MacOS (ARM): 0x828f8
     * @note[short] MacOS (Intel): 0x920c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x65cf0
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture, float scale);

    /**
     * @note[short] MacOS (ARM): 0x82938
     * @note[short] MacOS (Intel): 0x92110
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, float scale);

    /**
     * @note[short] MacOS (ARM): 0x8295c
     * @note[short] MacOS (Intel): 0x92140
     * @note[short] Windows: 0x3e2d0
     * @note[short] iOS: 0x65d30
     * @note[short] Android
     */
    static ButtonSprite* create(char const* caption, int width, int p2, float scale, bool absolute, char const* font, char const* bg, float height);

    /**
     * @note[short] MacOS (ARM): 0x82a88
     * @note[short] MacOS (Intel): 0x92280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, int width, int p2, float scale, bool absolute, char const* font, char const* bg);

    /**
     * @note[short] MacOS (ARM): 0x82920
     * @note[short] MacOS (Intel): 0x920f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, int width, int p2, float scale, bool absolute);

    /**
     * @note[short] MacOS (ARM): 0x82188
     * @note[short] MacOS (Intel): 0x918c0
     * @note[short] Windows: 0x3dfc0
     * @note[short] iOS: 0x655fc
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int unused, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG);

    /**
     * @note[short] MacOS (ARM): 0x82178
     * @note[short] MacOS (Intel): 0x918a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int unused, float height, float scale, bool absolute);

    /**
     * @note[short] MacOS (ARM): 0x82154
     * @note[short] MacOS (Intel): 0x91870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite);

    /**
     * @note[short] MacOS (ARM): 0x82a90
     * @note[short] MacOS (Intel): 0x92290
     * @note[short] Windows: 0x3e3a0
     * @note[short] iOS: 0x65e04
     * @note[short] Android
     */
    bool init(char const* p0, int p1, int p2, float p3, bool p4, char const* p5, char const* p6, float p7);

    /**
     * @note[short] MacOS (ARM): 0x822b4
     * @note[short] MacOS (Intel): 0x91a00
     * @note[short] Windows: 0x3e070
     * @note[short] iOS: 0x656c8
     * @note[short] Android
     */
    bool init(cocos2d::CCSprite* topSprite, int width, int unused, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG);

    /**
     * @note[short] MacOS (ARM): 0x831f0
     * @note[short] MacOS (Intel): 0x92a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x6652c
     * @note[short] Android
     */
    void setColor(cocos2d::_ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x82d08
     * @note[short] MacOS (Intel): 0x92530
     * @note[short] Windows: 0x3ec60
     * @note[short] iOS: 0x66050
     * @note[short] Android
     */
    void setString(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x830ac
     * @note[short] MacOS (Intel): 0x92920
     * @note[short] Windows: 0x3e6a0
     * @note[short] iOS: 0x663f4
     * @note[short] Android
     */
    void updateBGImage(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x82508
     * @note[short] MacOS (Intel): 0x91c90
     * @note[short] Windows: 0x3e7e0
     * @note[short] Android
     */
    void updateSpriteBGSize();

    /**
     * @note[short] MacOS (ARM): 0x831c8
     * @note[short] MacOS (Intel): 0x92a40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSpriteOffset(cocos2d::CCPoint offset);
    int m_mode;
    float m_width;
    float m_unkFloat;
    float m_scale;
    float m_height;
    bool m_absolute;
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_subSprite;
    cocos2d::CCSprite* m_subBGSprite;
    cocos2d::extension::CCScale9Sprite* m_BGSprite;
    cocos2d::CCPoint m_textOffset;
    cocos2d::CCPoint m_spritePosition;
    gd::string m_caption;
};
