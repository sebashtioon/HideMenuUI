#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MultilineBitmapFont : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "MultilineBitmapFont";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultilineBitmapFont, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MultilineBitmapFont();

    /**
     * @note[short] MacOS (ARM): 0x3f5744
     * @note[short] MacOS (Intel): 0x490240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x244948
     * @note[short] Android
     */
    static MultilineBitmapFont* createWithFont(char const* p0, gd::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);

    /**
     * @note[short] MacOS (ARM): 0x3f5910
     * @note[short] MacOS (Intel): 0x490410
     * @note[short] Windows: 0x6a9b0
     * @note[short] iOS: 0x244a6c
     * @note[short] Android
     */
    bool initWithFont(char const* p0, gd::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);

    /**
     * @note[short] MacOS (ARM): 0x3f7494
     * @note[short] MacOS (Intel): 0x4921d0
     * @note[short] Windows: 0x6bbb0
     * @note[short] Android
     */
    unsigned int moveSpecialDescriptors(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3f6170
     * @note[short] MacOS (Intel): 0x490de0
     * @note[short] Windows: 0x6b2e0
     * @note[short] Android
     */
    gd::string readColorInfo(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x3f6dd8
     * @note[short] MacOS (Intel): 0x491aa0
     * @note[short] Windows: 0x6bc40
     * @note[short] Android
     */
    gd::string stringWithMaxWidth(gd::string p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x3f73b4
     * @note[short] MacOS (Intel): 0x4920d0
     * @note[short] Windows: 0x6b260
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
    std::array<int, 300> m_hugeIntArray;
    cocos2d::CCArray* m_specialDescriptors;
    cocos2d::CCArray* m_characters;
    cocos2d::CCArray* m_lines;
    int m_unkInt;
    bool m_unkBool;
    void* m_unkPtr;
    int m_height;
    int m_width;
    cocos2d::CCPoint m_position;
    float m_maxWidth;
    bool m_disableColor;
};
