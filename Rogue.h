#ifndef ROGUE_H
#define ROGUE_H
#include <iostream>
#include <string>
#include "Player.h"

class Rogue : protected Player
{
public: 
    Rogue(std::string name, std::string playerClass, int damage, int strength, int dexterity, int intelligience, int levels, int charisma, int defense);
};

#endif