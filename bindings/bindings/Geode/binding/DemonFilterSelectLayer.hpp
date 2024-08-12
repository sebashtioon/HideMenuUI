#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class DemonFilterSelectLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonFilterSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonFilterSelectLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DemonFilterSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x5584ec
     * @note[short] MacOS (Intel): 0x638730
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static DemonFilterSelectLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x55c2f4
     * @note[short] MacOS (Intel): 0x63ca00
     * @note[short] Windows: 0x2f79c0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55c22c
     * @note[short] MacOS (Intel): 0x63c940
     * @note[short] Windows: 0x2f7900
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55bd74
     * @note[short] MacOS (Intel): 0x63c460
     * @note[short] Windows: 0x2f72c0
     * @note[short] iOS: 0x5d628
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x55c354
     * @note[short] MacOS (Intel): 0x63ca50
     * @note[short] Windows: 0x2f7a10
     * @note[short] Android
     */
    virtual void keyBackClicked();
    cocos2d::CCArray* m_demons;
    void* m_unkPtr;
    int m_currentDemon;
    DemonFilterDelegate* m_delegate;
};
