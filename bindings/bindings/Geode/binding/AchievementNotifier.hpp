#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementNotifier : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementNotifier";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementNotifier, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x6d44fc
     * @note[short] MacOS (Intel): 0x7cf810
     * @note[short] Windows: 0x39cd0
     * @note[short] iOS: 0x226bb8
     * @note[short] Android
     */
    static AchievementNotifier* sharedState();
    
private:
    [[deprecated("AchievementNotifier::achievementDisplayFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void achievementDisplayFinished();
public:

    /**
     * @note[short] Windows: 0x39db0
     * @note[short] Android
     */
    void notifyAchievement(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] Windows: 0x39e90
     * @note[short] Android
     */
    void showNextAchievement();

    /**
     * @note[short] MacOS (ARM): 0x6d4754
     * @note[short] MacOS (Intel): 0x7cfa80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x226dec
     * @note[short] Android
     */
    void willSwitchToScene(cocos2d::CCScene* scene);
    
private:
    [[deprecated("AchievementNotifier::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6d4578
     * @note[short] MacOS (Intel): 0x7cf8a0
     * @note[short] Android
     */
    virtual bool init();
public:
    cocos2d::CCScene* m_nextScene;
    cocos2d::CCArray* m_achievementBarArray;
    AchievementBar* m_activeAchievementBar;
};
