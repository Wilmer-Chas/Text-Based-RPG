#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player
{
public:
    std::string name;
    std::string playerClass;
    int strength;
    int dexterity;
    int intelligience;
    int levels;
    int charisma;
    int defense;
public: 
    Player(std::string name, std::string playerClass, int strength, int dexterity, int intelligience, int levels, int charisma, int defense);
    // Declares the usage of an item
    void useItem( /*Item */);
    // Display Info about Player
    void displayInfoPlayer();
    // sets the name of the player
    std::string setname();
    // contains the formula for how damage dealt is calculated
    int calculateDoDamage(int weaponDamage);
    // contains the formula for how damage taken is calculated
    int calculateTakeDamage(int enemyDamage);
    // sets the initial attributes depending on player class
    void setClassAttributes();
};

#endif