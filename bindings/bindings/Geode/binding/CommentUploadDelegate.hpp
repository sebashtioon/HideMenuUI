#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CommentUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "CommentUploadDelegate";
    
private:
    [[deprecated("CommentUploadDelegate::commentUploadFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void commentUploadFinished(int p0);
public:
    
private:
    [[deprecated("CommentUploadDelegate::commentUploadFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void commentUploadFailed(int p0, CommentError p1);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void commentDeleteFailed(int p0, int p1);
};
