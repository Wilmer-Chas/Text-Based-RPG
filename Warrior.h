#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#include "Player.h"

class Warrior : protected Player
{
public: 
    Warrior(std::string name, std::string playerClass, int damage, int strength, int dexterity, int intelligience, int levels, int charisma, int defense);
};

#endif