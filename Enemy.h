#ifndef ENEMY_H
#define ENEMY_H

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

#endif