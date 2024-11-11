#include <iostream>
#include <string>
#include "Player.h"


    Player::Player(std::string name, std::string playerClass, int damage, int strength, int dexterity, int intelligience, int levels, int charisma, int defense) 
    : name(name), playerClass(playerClass), damage(damage), strength(strength), dexterity(dexterity), intelligience(intelligience), levels(levels), charisma(charisma), defense(defense) {}
    // Declares the usage of an item
    void useItem( /*Item */)
    {
        // unclear what should be in here or if it even should exist
    }
    // Display Info about Player
    void Player::displayInfoPlayer()
    {
        std::cout << "your damage is at" << Player::damage << std::endl;
        std::cout << "your strength is at" << strength << std::endl;
        std::cout << "your dexterity is at" << dexterity << std::endl;
        std::cout << "your intelligience is at" << intelligience << std::endl;
        std::cout << "your levels is at" << levels << std::endl;
        std::cout << "your charisma is at" << charisma << std::endl;
        std::cout << "your defense is at" << defense << std::endl;
    }
    // sets the name of the player
    std::string Player::setname()
    {
        std::cout << "what shall be your name adventurer";
        std::string newname;
        std::cin >> newname;
        name = newname;
        return name;
    }
    // contains the formula for how damage dealt is calculated
    int Player::calculateDoDamage(int weaponDamage)
    {
        int totDamage;
        totDamage = damage + weaponDamage;
        return totDamage;
    }
    // contains the formula for how damage taken is calculated
    int Player::calculateTakeDamage(int enemyDamage)
    {
        int hp = strength;
        hp = strength-enemyDamage;
        return hp;
    }
