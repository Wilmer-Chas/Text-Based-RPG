#include <iostream>
#include <string>
#include "Player.h"


    Player::Player(std::string name, std::string playerClass, int strength, int dexterity, int intelligience, int levels, int charisma, int defense, int hp, bool isAlive) 
    : name(name), playerClass(playerClass), strength(strength), dexterity(dexterity), intelligience(intelligience), levels(levels), charisma(charisma), defense(defense), hp(hp), isAlive(isAlive) 
    {
       // setClassAttributes();
    }
    // Declares the usage of an item
    void useItem( /*Item */)
    {
        // unclear what should be in here or if it even should exist
    }
    // Display Info about Player
    void Player::displayInfoPlayer()
    {
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
    // contains the formula for how damage taken is calculated
    int Player::calculateTakeDamage(int enemyDamage)
    {
        int hp = strength;
        hp = strength-enemyDamage;
        return hp;
    }

    int Player::calculateDoDamage(int weaponDamage)
    {
        return (strength / 3) + weaponDamage;
    }

   void Player::setClassAttributes()
   {
        if (playerClass == "Mage")
        {
        strength = 5;
        dexterity = 12;
        intelligience = 20;
        charisma = 10;
        }
        else if (playerClass == "Rogue")
        {
        strength = 8;
        dexterity = 18;
        intelligience = 12;
        charisma = 13;
        }
        else if (playerClass == "Warrior")
        {
        strength = 18;
        dexterity = 14;
        intelligience = 8;
        charisma = 8;
        }
   }
