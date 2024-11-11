#ifndef GOBLIN_H
#define GOBLIN_H
#include "Enemy.h"
#include <string>
#include <iostream>

class Goblin : public Enemy
{
public:
    Goblin(std::string name, int hp, int damage, bool isFlying, int xp)
        : Enemy("Goblin", 18, 5, false, 2) {} // Standard stats for Goblin enemy.
};
#endif