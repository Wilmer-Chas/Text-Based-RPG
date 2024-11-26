#include "item.h"

void Item::displayInfo()
{
    cout << "\nName: " << name << "\n"
            << description;
}

int Item::getDamage() const
{
    return damage;
}

bool Item::useItem(Player& player) {
    return true;
}

void Item::setDamage(int input) {damage=input;}