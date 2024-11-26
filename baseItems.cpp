#include <iostream>
#include "item.h"
#include "baseItems.h"

/* WEAPONS */

// should pass dex, swords require a lot of dexterity to use
bool Sword::useItem(Player& player) {
    if (player.getDex() > 5) {
        std::cout << "you swing your sword";
        // return player.getDex() + (rand() % 7);
        return true;
    } else {
        std::cout << "you are too clumsy to use a sword effectively" << std::endl;
        return false;
    }
};
// should pass str, bows require a lot of strength to use
bool Bow::useItem(Player& player) {
    if (player.getStr() > 8) {
        std::cout << "you fire your bow";
        // return player.getStr() + (rand() % 7);
        return true;
    } else {
        std::cout << "you are too weak to pull the bowstring" << std::endl;
        return false;
    }
};

/* SPELLS */
//should pass int, casting spells requires certain education
bool Fireball::useItem (Player& player) {
    int chance = (rand() % 7);  // Generates a random number from 0 to 6
    int successThreshold = 4;    // Default threshold for success

    // Boost the chance if the player has higher intelligence
    if (player.intelligience > 15) {
        successThreshold = 2;  // If intelligence is high, lower the threshold
    } else if (player.intelligience > 13) {
        successThreshold = 3;  // Moderate boost if intelligence is medium
    }
    // so at its base state with no intellgience its 2 out of 6 chance to do a spell, while at max 4 out of 6
    if (chance > successThreshold) {
        std::cout << "A portal opens and out spews flames" << std::endl;
        return true;
    } else {
        std::cout << "The spell fails for mysterious reasons" << std::endl;
        return false;
    }
}

//should pass int, casting spells requires certain education
bool FireBolt::useItem (Player& player) {
    int chance = (rand() % 7);  // Generates a random number from 0 to 6
    int successThreshold = 4;    // Default threshold for success

    // Boost the chance if the player has higher intelligence
    if (player.intelligience > 15) {
        successThreshold = 2;  // If intelligence is high, lower the threshold
    } else if (player.intelligience > 13) {
        successThreshold = 3;  // Moderate boost if intelligence is medium
    }
    // so at its base state with no intellgience its 2 out of 6 chance to do a spell, while at max 4 out of 6
    if (chance > successThreshold) {
        std::cout << "A portal opens and out spews flames" << std::endl;
        return true;
    } else {
        std::cout << "The spell fails for mysterious reasons" << std::endl;
        return false;
    }
}
// returns an int
int HealthPotion::useItem () {
    return 4 + (rand() % 5);
};
// returns an int
int PotentHealthPotion::useItem () {
    return 8 + (rand() % 9);
};

