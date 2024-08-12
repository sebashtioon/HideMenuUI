#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChallengesPage.hpp"
#include "GJChallengeItem.hpp"

class ChallengeNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ChallengeNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ChallengeNode, cocos2d::CCNode)
	inline ChallengeNode() {}

    /**
     * @note[short] MacOS (ARM): 0x328294
     * @note[short] MacOS (Intel): 0x3a1490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x394e4
     * @note[short] Android
     */
    static ChallengeNode* create(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x328808
     * @note[short] MacOS (Intel): 0x3a1a50
     * @note[short] Windows: 0x85490
     * @note[short] iOS: 0x398e4
     * @note[short] Android
     */
    bool init(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);
    
private:
    [[deprecated("ChallengeNode::onClaimReward not implemented")]]
    /**
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ChallengeNode::updateTimeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateTimeLabel(gd::string p0);
public:
    ChallengesPage* m_challengesPage;
    GJChallengeItem* m_challengeItem;
    cocos2d::CCPoint m_unkPoint;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    bool m_unloaded;
};
