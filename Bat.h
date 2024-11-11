#ifndef BAT_H
#define BAT_H
#include "Enemy.h"
#include <string>
#include <iostream>

class Bat : public Enemy
{
public:
    Bat(std::string name, int hp, int damage, bool isFlying, int xp)
        : Enemy("Bat", 10, 3, true, 1) {}
};

#endif