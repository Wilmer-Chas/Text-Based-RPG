#include <iostream>
#include <string>
#include "Mage.h"

Mage::Mage(std::string name, std::string playerClass, int damage, int strength, int dexterity, int intelligience, int levels, int charisma, int defense) 
    : Player(name, playerClass, strength, dexterity, intelligience, levels, charisma, defense) {} // calls the constructor of player

    Mage::Mage(std::string name, std::string playerClass, int damage, int strength, int dexterity, int intelligience, int levels, int charisma, int defense) 
    : Player(name, playerClass, strength, dexterity, intelligience, levels, charisma, defense) {} // calls the constructor of player