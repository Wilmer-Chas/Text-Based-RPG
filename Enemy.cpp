#include "Enemy.h"
#include <string>
#include <iostream>

void Enemy::takeDamage(int damage)
{
    hp -= damage;
}
int Enemy::dealDamage()
{
    return damage;
}
void Enemy::displayEnemyInfo()
{
    std::cout << "-===-Enemy Information-===-" << std::endl;
    std::cout << "Type: " << name << std::endl;
    std::cout << "Health: " << hp << std::endl;
    std::cout << "Damage: " << damage << std::endl;
    if(isFlying) std::cout << "Enemy is flying" << std::endl;
}