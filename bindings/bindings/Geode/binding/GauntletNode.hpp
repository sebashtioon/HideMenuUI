#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GauntletNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletNode();

    /**
     * @note[short] MacOS (ARM): 0x4c64d0
     * @note[short] MacOS (Intel): 0x57a2f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ca380
     * @note[short] Android
     */
    static GauntletNode* create(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x4c8adc
     * @note[short] MacOS (Intel): 0x57c810
     * @note[short] Windows: 0x1ef420
     * @note[short] Android
     */
    static gd::string frameForType(GauntletType p0);

    /**
     * @note[short] MacOS (ARM): 0x4c6d84
     * @note[short] MacOS (Intel): 0x57abf0
     * @note[short] Windows: 0x1edf90
     * @note[short] iOS: 0x1caa9c
     * @note[short] Android
     */
    bool init(GJMapPack* p0);

    /**
     * @note[short] MacOS (ARM): 0x4c84a0
     * @note[short] MacOS (Intel): 0x57c320
     * @note[short] Windows: 0x1f0590
     * @note[short] Android
     */
    static gd::string nameForType(GauntletType p0);

    /**
     * @note[short] MacOS (ARM): 0x4c6cd8
     * @note[short] MacOS (Intel): 0x57ab20
     * @note[short] Windows: 0x1ef3e0
     * @note[short] iOS: 0x1ca9f4
     * @note[short] Android
     */
    void onClaimReward();
    cocos2d::CCNode* m_gauntletInfoNode;
    cocos2d::CCNode* m_rewardNode;
};
