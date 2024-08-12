#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementBar : public cocos2d::CCNodeRGBA {
public:
    static constexpr auto CLASS_NAME = "AchievementBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementBar, cocos2d::CCNodeRGBA)

    /**
     * @note[short] Windows: 0x7eff0
     * @note[short] Android
     */
     AchievementBar(unsigned int idk);
    
private:
    [[deprecated("AchievementBar::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AchievementBar* create(char const* title, char const* desc, char const* icon, bool quest);
public:

    /**
     * @note[short] Windows: 0x7f040
     * @note[short] iOS: 0x27a350
     * @note[short] Android
     */
    bool init(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] Windows: 0x805f0
     * @note[short] Android
     */
    void show();

    /**
     * @note[short] MacOS (ARM): 0x5474bc
     * @note[short] MacOS (Intel): 0x6258a0
     * @note[short] Windows: 0x80870
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
    cocos2d::CCLayerColor* m_layerColor;
    int m_unkUnused;
    cocos2d::CCScene* m_nextScene;
    cocos2d::extension::CCScale9Sprite* m_bg;
    cocos2d::extension::CCScale9Sprite* m_bg2;
    cocos2d::CCSprite* m_achievementGlowSprite;
    cocos2d::CCSprite* m_achievementSprite;
    cocos2d::CCLabelBMFont* m_titleLabel;
    TextArea* m_achievementDescription;
};
