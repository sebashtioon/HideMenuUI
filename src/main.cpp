#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

#include <Geode/binding/ButtonSprite.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>

using namespace geode::prelude;

bool UI_Hidden = false;

class $modify(MyMenuLayer, MenuLayer) {
public:
    struct Fields {
        // Member variables to store the original positions of the menus
        CCPoint playerUserName_Pos;
        CCPoint centerMenu_Pos;
        CCPoint bottomMenu_Pos;
        CCPoint rightMenu_Pos;
        CCPoint profileMenu_Pos;
        CCPoint moreGamesMenu_Pos;
        CCPoint socialMediaMenu_Pos;
        CCPoint mainTitle_Pos;
        CCPoint sideMenu_Pos;
        CCPoint closeMenu_Pos;
    };

    bool init() {
        if (!MenuLayer::init())
            return false;

        UI_Hidden = false;

        auto topRightMenu = this->getChildByID("top-right-menu");

        // Create sprite for the Hide button
        auto hideBtn_Sprite = ButtonSprite::create("Hide", 1.0);
        hideBtn_Sprite->setScale(0.550);
        hideBtn_Sprite->setCascadeOpacityEnabled(true);

        // Create the button with the sprite
        auto hideButton = CCMenuItemSpriteExtra::create(
            hideBtn_Sprite,
            this,
            menu_selector(MyMenuLayer::onHideButton)
        );

        hideButton->setID("hide-button-sprite");
        hideButton->setPosition({177.0, 39.0});
        hideButton->setCascadeOpacityEnabled(true);
        hideButton->setOpacity(90);

        topRightMenu->addChild(hideButton);

        // Initialize the original positions after the menus are set up
        this->m_fields->playerUserName_Pos = this->getChildByID("player-username")->getPosition();
        this->m_fields->centerMenu_Pos = this->getChildByID("main-menu")->getPosition();
        this->m_fields->bottomMenu_Pos = this->getChildByID("bottom-menu")->getPosition();
        this->m_fields->rightMenu_Pos = this->getChildByID("right-side-menu")->getPosition();
        this->m_fields->profileMenu_Pos = this->getChildByID("profile-menu")->getPosition();
        this->m_fields->moreGamesMenu_Pos = this->getChildByID("more-games-menu")->getPosition();
        this->m_fields->socialMediaMenu_Pos = this->getChildByID("social-media-menu")->getPosition();
        this->m_fields->mainTitle_Pos = this->getChildByID("main-title")->getPosition();
        this->m_fields->sideMenu_Pos = this->getChildByID("side-menu")->getPosition();
        this->m_fields->closeMenu_Pos = this->getChildByID("close-menu")->getPosition();

        return true;
    }

    void onHideButton(CCObject* sender) {
        auto hideButton = static_cast<CCMenuItemSpriteExtra*>(sender);

        auto playerUserName = this->getChildByID("player-username");
        auto centerMenu = this->getChildByID("main-menu");
        auto bottomMenu = this->getChildByID("bottom-menu");
        auto rightMenu = this->getChildByID("right-side-menu");
        auto profileMenu = this->getChildByID("profile-menu");
        auto moreGamesMenu = this->getChildByID("more-games-menu");
        auto socialMediaMenu = this->getChildByID("social-media-menu");
        auto mainTitle = this->getChildByID("main-title");
        auto sideMenu = this->getChildByID("side-menu");
        auto closeMenu = this->getChildByID("close-menu");

        if (hideButton) {
            auto hideButtonSprite = static_cast<ButtonSprite*>(hideButton->getNormalImage());

            if (!UI_Hidden) {
                UI_Hidden = true;
                hideButtonSprite->setString("Show");

                // Move menus off-screen
                playerUserName->setPosition({2000.0, 2000.0});
                centerMenu->setPosition({2000.0, 2000.0});
                bottomMenu->setPosition({2000.0, 2000.0});
                rightMenu->setPosition({2000.0, 2000.0});
                profileMenu->setPosition({2000.0, 2000.0});
                socialMediaMenu->setPosition({2000.0, 2000.0});
                mainTitle->setPosition({2000.0, 2000.0});
                sideMenu->setPosition({2000.0, 2000.0});
                moreGamesMenu->setPosition({2000.0, 2000.0});
                closeMenu->setPosition({2000.0, 2000.0});
            } else {
                UI_Hidden = false;
                hideButtonSprite->setString("Hide");

                // Restore original positions
                playerUserName->setPosition(this->m_fields->playerUserName_Pos);
                centerMenu->setPosition(this->m_fields->centerMenu_Pos);
                bottomMenu->setPosition(this->m_fields->bottomMenu_Pos);
                rightMenu->setPosition(this->m_fields->rightMenu_Pos);
                profileMenu->setPosition(this->m_fields->profileMenu_Pos);
                moreGamesMenu->setPosition(this->m_fields->moreGamesMenu_Pos);
                socialMediaMenu->setPosition(this->m_fields->socialMediaMenu_Pos);
                mainTitle->setPosition(this->m_fields->mainTitle_Pos);
                sideMenu->setPosition(this->m_fields->sideMenu_Pos);
                closeMenu->setPosition(this->m_fields->closeMenu_Pos);
            }
        }
    }
};
