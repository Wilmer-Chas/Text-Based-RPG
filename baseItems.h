#if !defined(BASEITEMS_H)
#define BASEITEMS_H

#include <iostream>
#include "item.h"
#include "Player.h"

/* WEAPONS */

class Sword : public Item
{
private:
public:
    Sword()
        : Item("Sword", "My sword", 3, 1) {}

    // should pass dex, swords require a lot of dexterity to use
    bool useItem(Player& player) override;
};

class Bow : public Item
{
public:
    Bow()
        : Item("Bow", "My bow", 3, 1) {}

    // should pass str, bows require a lot of strength to use
    bool useItem(Player& player) override;
};

/* SPELLS */

class Fireball : public Item {
    public:
        Fireball()
            : Item ("Fire ball", "Opens a portal under satans ass", 5, 1) {}
    //should pass int, casting spells requires certain education
    bool useItem (Player& player) override;
};

class FireBolt : public Item {
    public:
        FireBolt()
            : Item ("Fire bolt", "Opens a portal next to an angry fire imp at a bar fight", 8, 1) {}
    //should pass int, casting spells requires certain education
    bool useItem (Player& player) override;
};

/* POTIONS */
class HealthPotion : public Item
{
public:
    HealthPotion()
        :Item ("Health potion", "A brown slurry of herbs, reminds you of bog water", 0 ,1) {}

    // returns an int
    int useItem ();
};

class PotentHealthPotion : public Item
{
public:
    PotentHealthPotion()
        : Item ("Potent health potion", "A black slurry of herbs, reminds you of rotting kelp", 0, 1) {}

    // returns an int
    int useItem ();
};

#endif // BASEITEMS_H