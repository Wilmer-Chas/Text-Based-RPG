#if !defined(ITEM_H)
#define ITEM_H 

#include <iostream>
using namespace std;

// forward declaration
class Player;

// needs name, description, damage, qty
class Item
{
public:
    string name;
    string description;
    int damage;
    int qty;

    Item(string name, string desc, int dmg, int qty)
        : name(name), description(desc), damage(dmg), qty(qty) {};

int getDamage() const;
virtual void displayInfo();
virtual bool useItem(Player& player);
void setDamage(int input);

};

#endif // item