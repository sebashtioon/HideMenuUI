#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextAlertPopup : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "TextAlertPopup";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextAlertPopup, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x24c288
     * @note[short] MacOS (Intel): 0x2ab0c0
     * @note[short] Windows: 0x28b920
     * @note[short] Android
     */
    static TextAlertPopup* create(gd::string text, float delay, float scale, int opacity, gd::string font);

    /**
     * @note[short] MacOS (ARM): 0x24c4d0
     * @note[short] MacOS (Intel): 0x2ab2e0
     * @note[short] Windows: 0x28ba50
     * @note[short] Android
     */
    bool init(gd::string text, float delay, float scale, int opacity, gd::string font);

    /**
     * @note[short] MacOS (ARM): 0x24c810
     * @note[short] MacOS (Intel): 0x2ab630
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setAlertPosition(cocos2d::CCPoint windowOffset, cocos2d::CCPoint pointOffset);

    /**
     * @note[short] MacOS (ARM): 0x24c7d4
     * @note[short] MacOS (Intel): 0x2ab5f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setLabelColor(cocos2d::ccColor3B color);
    float m_width;
    float m_height;
    cocos2d::CCLabelBMFont* m_label;
};
