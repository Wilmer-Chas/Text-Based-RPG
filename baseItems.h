#if !defined(BASEITEMS_H)
#define BASEITEMS_H

#include <iostream>
#include "item.h"
using namespace std;

/* WEAPONS */

class sword : public item
{
private:
    int damage = 4;
public:
    sword()
        : item("Sword", "My sword", 1) {}

    // should pass dex, swords require a lot of dexterity to use
    int useItem(int attr) {
        if (attr > 1) {
            cout << "you swing your sword";
            return attr + (rand() % 7);
        } else {
            cout << "you are too clumsy to use a sword effectively";
            return -1;
        }
    };
};

class bow : public item
{
public:
    bow()
        : item("Bow", "My bow", 1) {}

    // should pass str, bows require a lot of strength to use
    int useItem(int attr) {
        if (attr > 1) {
            cout << "you fire your bow";
            return attr + (rand() % 7);
        } else {
            cout << "you are too weak to pull the bowstring";
            return -1;
        }
    };
};

/* SPELLS */

class fireBall : public item {
    public:
        fireBall()
            : item ("Fire ball", "Opens a portal under satans ass", 1) {}
    //should pass int, casting spells requires certain education
    int useItem (int attr) {
        if (attr > 1 && (rand() % 7) > 4) {
            cout << "A portal opens and out spews flames";
            return 25;
        } else {
            cout << "The spell fails for mysterious reasons";
            return -1;
        }
    }
};

class fireBolt : public item {
    public:
        fireBolt()
            : item ("Fire bolt", "Opens a portal next to an angry fire imp at a bar fight", 1) {}
    //should pass int, casting spells requires certain education
    int useItem (int attr) {
        if (attr > 1 && (rand() % 7) > 2) {
            cout << "A portal opens and out spews flames";
            return 5;
        } else {
            cout << "The spell fails for mysterious reasons";
            return -1;
        }
    }
};



/* POTIONS */
class healthPotion : public item
{
public:
    healthPotion()
        : item ("Health potion", "A brown slurry of herbs, reminds you of bog water", 1) {}

    // returns an int
    int useItem () {
        return 4 + (rand() % 5);
    };
};

class potentHealthPotion : public item
{
public:
    potentHealthPotion()
        : item ("Potent health potion", "A black slurry of herbs, reminds you of rotting kelp", 1) {}

    // returns an int
    int useItem () {
        return 8 + (rand() % 9);
    };
};

#endif // BASEITEMS_H