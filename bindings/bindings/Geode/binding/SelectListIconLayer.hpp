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

class SelectListIconLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectListIconLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectListIconLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectListIconLayer();

    /**
     * @note[short] MacOS (ARM): 0x2eeb54
     * @note[short] MacOS (Intel): 0x35ee60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SelectListIconLayer* create(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x2ef9e4
     * @note[short] MacOS (Intel): 0x362770
     * @note[short] Windows: 0x2e8cb0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2f0034
     * @note[short] MacOS (Intel): 0x362d60
     * @note[short] Windows: 0x2e9560
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eff3c
     * @note[short] MacOS (Intel): 0x362ca0
     * @note[short] Windows: 0x2e94a0
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f008c
     * @note[short] MacOS (Intel): 0x362db0
     * @note[short] Windows: 0x2e95a0
     * @note[short] Android
     */
    virtual void keyBackClicked();
    cocos2d::CCArray* m_difficulties;
    int m_currentDifficulty;
    SelectListIconDelegate* m_delegate;
};
