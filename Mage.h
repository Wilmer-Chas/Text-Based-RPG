#ifndef MAGE_H
#define MAGE_H
#include <iostream>
#include <string>
#include "Player.h"

class Mage : protected Player
{
public: 
    Mage(std::string name, std::string playerClass, int damage, int strength, int dexterity, int intelligience, int levels, int charisma, int defense);
};

#endif