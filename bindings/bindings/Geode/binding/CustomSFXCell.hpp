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
#include "CustomSFXDelegate.hpp"

class CustomSFXCell : public TableViewCell, public CustomSFXDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSFXCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSFXCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1ea61c
     * @note[short] MacOS (Intel): 0x23fca0
     * @note[short] Windows: 0xb2740
     * @note[short] Android
     */
    void loadFromObject(SFXInfoObject* p0);
    
private:
    [[deprecated("CustomSFXCell::shouldReload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldReload();
public:

    /**
     * @note[short] Windows: 0xb2870
     * @note[short] Android
     */
    void updateBGColor(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1f9ad0
     * @note[short] MacOS (Intel): 0x24fd10
     * @note[short] Windows: 0xb2720
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("CustomSFXCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1f9b74
     * @note[short] MacOS (Intel): 0x24fe10
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] MacOS (ARM): 0x1f9ae0
     * @note[short] MacOS (Intel): 0x24fd30
     * @note[short] Windows: 0xb2830
     * @note[short] Android
     */
    virtual void sfxObjectSelected(SFXInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1f9b3c
     * @note[short] MacOS (Intel): 0x24fdb0
     * @note[short] Windows: 0xb2420
     * @note[short] Android
     */
    virtual TodoReturn getActiveSFXID();
};
