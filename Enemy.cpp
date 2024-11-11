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
    std::cout << "Type: " << name << std::endl;  // Enemy class.
    std::cout << "Health: " << hp << std::endl;  // Enemy health.
    std::cout << "Damage: " << damage << std::endl; // Enemy damage output.
    if(isFlying) std::cout << "Enemy is flying" << std::endl;  // Tells if the enmy is flying or not.
}