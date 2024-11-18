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
    int charisma;
    int defense;
    int levels;
public: 
    Player(std::string name, std::string playerClass, int strength, int dexterity, int intelligience, int levels, int charisma, int defense);
    // Declares the usage of an item //probably redundant
    void useItem( /*Item */);
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

    //getters
    std::string getName() { return name; }
    std::string getClass() { return playerClass; }
    int getStr () { return strength; }
    int getDex () { return dexterity; }
    int getInt () { return intelligience; }
    int getCha () { return charisma; }
    int getDef () { return defense; }
    int getLvl () { return levels; }

    //setters
    std::string setName(std::string input) { name = input; }
    std::string setClass(std::string input) { playerClass = input; }
    void setStr (int input) {strength = input;}
    void setDex (int input) {dexterity = input;}
    void setInt (int input) {intelligience = input;}
    void setCha (int input) {charisma = input;}
    void setDef (int input) {defense = input;}
    void setLvl (int input) {levels = input;}
};

#endif