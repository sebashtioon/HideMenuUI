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

class LikeItemLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LikeItemLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LikeItemLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x52a0d0
     * @note[short] MacOS (Intel): 0x603930
     * @note[short] Windows: 0x30d400
     * @note[short] Android
     */
    static LikeItemLayer* create(LikeItemType p0, int p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x52a1f4
     * @note[short] MacOS (Intel): 0x603aa0
     * @note[short] Windows: 0x30d500
     * @note[short] Android
     */
    bool init(LikeItemType p0, int p1, int p2);
    
private:
    [[deprecated("LikeItemLayer::onClose not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x52a5a8
     * @note[short] MacOS (Intel): 0x603e70
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x52a65c
     * @note[short] MacOS (Intel): 0x603f20
     * @note[short] Windows: 0x30d8e0
     * @note[short] Android
     */
    void onDislike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x52a5e4
     * @note[short] MacOS (Intel): 0x603ea0
     * @note[short] Windows: 0x30d8d0
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x30d8f0
     * @note[short] Android
     */
    void triggerLike(bool isLiked);
    
private:
    [[deprecated("LikeItemLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x52a750
     * @note[short] MacOS (Intel): 0x604020
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    LikeItemType m_itemType;
    int m_itemID;
    int m_commentSourceID;
    LikeItemDelegate* m_likeDelegate;
};
