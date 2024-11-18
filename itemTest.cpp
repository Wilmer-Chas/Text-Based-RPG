#include <iostream>
#include "item.h"
#include "baseItems.h"
#include <ctime>

int main () {
    srand(time(0));
    sword mySword;

    std::cout << mySword.useItem(1);
}