#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "baseItems.h"
#include "item.h"
#include <memory>

class Player
{
public:
    std::string name;
    std::string playerClass;
    int strength;
    int dexterity;
    int intelligience;
    int charisma;
    int defense;
    int levels;
    int hp;
    bool isAlive;
    std::unique_ptr<Item> weapon;
public: 
    Player(std::string name, std::string playerClass, int strength, int dexterity, int intelligience, int levels, int charisma, int defense, int hp, bool isAlive);
    // Display Info about Player
    void displayInfoPlayer();
    // sets the name of the player //redundant
    std::string setname();
    // contains the formula for how damage dealt is calculated //redundant
    int calculateDoDamage(int weaponDamage);
    // contains the formula for how damage taken is calculated //redundant
    int calculateTakeDamage(int enemyDamage);
    // sets the initial attributes depending on player class //redundant
    void setClassAttributes();
    // sets what weapon the character wants to originally use
    void chooseWeapon(int choice);

    //getters
    std::string getName() { return name; }
    std::string getClass() { return playerClass; }
    int getStr () { return strength; }
    int getDex () { return dexterity; }
    int getInt () { return intelligience; }
    int getCha () { return charisma; }
    int getDef () { return defense; }
    int getLvl () { return levels; }
    int getHp  () { return hp; }

    //setters
    std::string setName(std::string input) { name = input; return name; }
    std::string setClass(std::string input) { playerClass = input; return playerClass; }
    void setStr (int input) {strength = input;}
    void setDex (int input) {dexterity = input;}
    void setInt (int input) {intelligience = input;}
    void setCha (int input) {charisma = input;}
    void setDef (int input) {defense = input;}
    void setLvl (int input) {levels = input;}
};

#endif