#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "FLAlertLayerProtocol.hpp"

class GJScoreCell : public TableViewCell, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJScoreCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1ef8c0
     * @note[short] MacOS (Intel): 0x245130
     * @note[short] Windows: 0xb6010
     * @note[short] iOS: 0x109108
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJScoreCell::onBan not implemented")]]
    /**
     * @note[short] Android
     */
    void onBan(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJScoreCell::onCheck not implemented")]]
    /**
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJScoreCell::onMoreLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void onMoreLevels(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x1facac
     * @note[short] MacOS (Intel): 0x2513b0
     * @note[short] Windows: 0xb70f0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJScoreCell::updateBGColor not implemented")]]
    /**
     * @note[short] iOS: 0x109088
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1faca0
     * @note[short] MacOS (Intel): 0x251390
     * @note[short] Windows: 0xb2210
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("GJScoreCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1faf40
     * @note[short] MacOS (Intel): 0x251650
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] MacOS (ARM): 0x1fae78
     * @note[short] MacOS (Intel): 0x251590
     * @note[short] Windows: 0xb7270
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    GJUserScore* m_score;
};
