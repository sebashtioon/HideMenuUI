#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

#include <Geode/binding/ButtonSprite.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>

using namespace geode::prelude;

bool UI_Hidden = false;

class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init())
			return false;
		

		/*
		Set the variable to false, to prevent needing to press it twice to hide UI
		Due to exiting the layer while it is set to true.
		*/
		UI_Hidden = false;

		auto winSize = CCDirector::get()->getWinSize(); // Get the window size and store it in a variable. Basically useless here.

		auto topRightMenu = this->getChildByID("top-right-menu"); // Get the menu that the button will be a child of

		// Create sprite for the Hide button
		auto hideBtn_Sprite = ButtonSprite::create("Hide", 1.0); 
		hideBtn_Sprite->setScale(0.550); // Set the scale

		// Ensure cascade opacity is enabled
		hideBtn_Sprite->setCascadeOpacityEnabled(true);

		// Create the button with the sprite
		auto hideButton = CCMenuItemSpriteExtra::create(
			hideBtn_Sprite,
			this,
			menu_selector(MyMenuLayer::onHideButton) // Assign callback function
		);

		hideButton->setID("hide-button-sprite"); // Set the ID of the button, so we can access it elsewhere in the code.
		hideButton->setPosition({177.0, 39.0}); // Set the position of the button

		// Set the button (CCMenuItemSpriteExtra) to 50% opacity
		hideButton->setCascadeOpacityEnabled(true);
		hideButton->setOpacity(90); // 127 is 50% of 255, the maximum opacity

		topRightMenu->addChild(hideButton); // Add the button to the top right menu

		return true; // Indicates that the layer is fully initialized.
	}

	// Where the magic happens! This function is called when the Hide button is pressed.
	void onHideButton(CCObject* sender) {
		// Cast sender to CCMenuItemSpriteExtra to access the button
		auto hideButton = static_cast<CCMenuItemSpriteExtra*>(sender);

		// Ensure hideButton is valid
		if (hideButton) {
			// Get the ButtonSprite and then its label
			auto hideButtonSprite = static_cast<ButtonSprite*>(hideButton->getNormalImage());

			// Run checks
			if (UI_Hidden == false) { // Check if UI_Hidden is false
				UI_Hidden = true;
				hideButtonSprite->setString("Show"); // Set string to "Show"


				// Get all the menu's and store them in variables
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

				// Set all menu's to a position off the screen
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




			} else if (UI_Hidden == true) { // Check if UI_Hidden is true
				UI_Hidden = false;

				// Get all the menu's and store them in variables
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

				// Set all menu's to original position.
				playerUserName->setPosition({47.000, 141.000});
				centerMenu->setPosition({284.500, 170.000});
				bottomMenu->setPosition({284.500, 45.000});
				rightMenu->setPosition({529.000, 180.000});
				profileMenu->setPosition({91.000, 105.000});
				socialMediaMenu->setPosition({13.000, 13.000});
				mainTitle->setPosition({284.500, 270.000});
				sideMenu->setPosition({25.000, 215.000});
				moreGamesMenu->setPosition({513.125, 45.000});//
				closeMenu->setPosition({1.897, 318.103});

				hideButtonSprite->setString("Hide"); // Set string to "Hide"
			}
		}
	}
};
