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
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CommentCell : public TableViewCell, public LikeItemDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CommentCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommentCell, TableViewCell)
    
private:
    [[deprecated("CommentCell::incrementDislikes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementDislikes();
public:
    
private:
    [[deprecated("CommentCell::incrementLikes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementLikes();
public:

    /**
     * @note[short] MacOS (ARM): 0x1edab0
     * @note[short] MacOS (Intel): 0x242fa0
     * @note[short] Windows: 0xb3790
     * @note[short] iOS: 0x1075b0
     * @note[short] Android
     */
    void loadFromComment(GJComment* p0);

    /**
     * @note[short] MacOS (ARM): 0x1fa59c
     * @note[short] MacOS (Intel): 0x250bc0
     * @note[short] Windows: 0xb5be0
     * @note[short] Android
     */
    void onConfirmDelete(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CommentCell::onDelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onDelete();
public:
    
private:
    [[deprecated("CommentCell::onGoToLevel not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fa408
     * @note[short] MacOS (Intel): 0x2509f0
     * @note[short] Android
     */
    void onGoToLevel(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x1fa4bc
     * @note[short] MacOS (Intel): 0x250ac0
     * @note[short] Windows: 0xb5980
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CommentCell::onUndelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onUndelete();
public:
    
private:
    [[deprecated("CommentCell::onUnhide not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fa4b0
     * @note[short] MacOS (Intel): 0x250aa0
     * @note[short] Android
     */
    void onUnhide(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CommentCell::onViewProfile not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fa3d4
     * @note[short] MacOS (Intel): 0x2509c0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CommentCell::updateBGColor not implemented")]]
    /**
     * @note[short] iOS: 0x108fdc
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:
    
private:
    [[deprecated("CommentCell::updateLabelValues not implemented")]]
    /**
     * @note[short] Android
     */
    void updateLabelValues();
public:

    /**
     * @note[short] MacOS (ARM): 0x1fa3bc
     * @note[short] MacOS (Intel): 0x250990
     * @note[short] Windows: 0xb3770
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("CommentCell::draw not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1fa684
     * @note[short] MacOS (Intel): 0x250cb0
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] MacOS (ARM): 0x1fa730
     * @note[short] MacOS (Intel): 0x250d80
     * @note[short] Windows: 0xb5ae0
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x1faaac
     * @note[short] MacOS (Intel): 0x251120
     * @note[short] Windows: 0xb5d50
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCLabelBMFont* m_likeLabel;
    GJComment* m_comment;
    bool m_accountComment;
};
