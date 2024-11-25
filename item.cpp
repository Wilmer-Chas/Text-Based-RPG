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

void useItem() {

}
