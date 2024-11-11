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

int takeDamage(int damage);
int dealDamage();
void displayEnemyInfo();
};

#endif