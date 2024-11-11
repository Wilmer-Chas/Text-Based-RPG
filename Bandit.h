#ifndef GOBLIN_H
#define GOBLIN_H
#include "Enemy.h"
#include <string>
#include <iostream>

class Bandit : public Enemy
{
public:
    Bandit(std::string name, int hp, int damage, bool isFlying, int xp)
        : Enemy("Goblin", 23, 5, false, 3) {}  // Standard stats for Bandit enemy.
};
#endif