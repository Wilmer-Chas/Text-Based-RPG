#ifndef ENEMY_H
#define ENEMY_H
#include "Enemy.h"
#include <iostream>
#include <string>

class Enemy
{
private:
    std::string name;
    int hp;
    int damage;
    bool isFlying;
    int xp;
public:
    Enemy(std::string name, int hp, int damage, bool isFlying, int xp)
        : name(name), hp(hp), damage(damage), xp(xp) {}

// Subtracts the given damage from enemys health.
void takeDamage(int damage);
// Returns the damage that the enemy deals.
int dealDamage();
// prints information about the current enemy.
void displayEnemyInfo();
};

class Bat : public Enemy
{
public:
    Bat() : Enemy("Bat", 10, 3, true, 1) {} // Standard stats for Bat enemy.
};

class Goblin : public Enemy
{
public:
    Goblin() : Enemy("Goblin", 18, 5, false, 2) {} // Standard stats for Goblin enemy.
};

class Bandit : public Enemy
{
public:
    Bandit() : Enemy("Goblin", 23, 5, false, 3) {}  // Standard stats for Bandit enemy.
};

#endif