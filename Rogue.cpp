#include <iostream>
#include <string>
#include "Rogue.h"

Rogue::Rogue(std::string name, std::string playerClass, int damage, int strength, int dexterity, int intelligience, int levels, int charisma, int defense) 
    : Player(name, playerClass, damage, strength, dexterity, intelligience, levels, charisma, defense) {} // calls the constructor of player