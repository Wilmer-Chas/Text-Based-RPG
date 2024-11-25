#include <iostream>
#include "item.h"
#include "baseItems.h"
#include <ctime>

int main () {
    srand(time(0));
    Sword mySword;

    std::cout << mySword.useItem(1);
}