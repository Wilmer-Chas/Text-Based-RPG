#if !defined(BASEITEMS_H)
#define BASEITEMS_H

#include <iostream>
#include "item.h"
using namespace std;

class sword : public item
{
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

class healthPotion : public item
{
public:
    healthPotion()
        : item ("Health potion", "A slurry of herbs, reminds you of bog water", 1) {}

    // returns an int
    int useItem () {
        return 4 + (rand() % 5);
    };
};
#endif // BASEITEMS_H