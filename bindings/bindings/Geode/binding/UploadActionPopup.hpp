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

class UploadActionPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "UploadActionPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadActionPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x240e30
     * @note[short] MacOS (Intel): 0x29ee10
     * @note[short] Windows: 0x282fa0
     * @note[short] Android
     */
    static UploadActionPopup* create(UploadPopupDelegate* delegate, gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x2416f0
     * @note[short] MacOS (Intel): 0x29f760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e9614
     * @note[short] Android
     */
    void closePopup();

    /**
     * @note[short] MacOS (ARM): 0x240fe8
     * @note[short] MacOS (Intel): 0x29f010
     * @note[short] Windows: 0x2830e0
     * @note[short] Android
     */
    bool init(UploadPopupDelegate* delegate, gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x2413f4
     * @note[short] MacOS (Intel): 0x29f460
     * @note[short] Windows: 0x283750
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2415ac
     * @note[short] MacOS (Intel): 0x29f610
     * @note[short] Windows: 0x283650
     * @note[short] iOS: 0x2e9538
     * @note[short] Android
     */
    void showFailMessage(gd::string message);

    /**
     * @note[short] MacOS (ARM): 0x241454
     * @note[short] MacOS (Intel): 0x29f4b0
     * @note[short] Windows: 0x283540
     * @note[short] iOS: 0x2e9448
     * @note[short] Android
     */
    void showSuccessMessage(gd::string message);

    /**
     * @note[short] MacOS (ARM): 0x24172c
     * @note[short] MacOS (Intel): 0x29f790
     * @note[short] Windows: 0x2837a0
     * @note[short] Android
     */
    virtual void keyBackClicked();
    UploadPopupDelegate* m_delegate;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
    bool m_succeeded;
};
