#if !defined(ITEM_H)
#define ITEM_H 

#include <iostream>
using namespace std;

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
void displayInfo();
void useItem();

};

#endif // item