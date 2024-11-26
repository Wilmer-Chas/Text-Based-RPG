#include <iostream>
#include "Player.h"
#include "Levels.h"

void LevelManager::improveStat(Player &player)
{
        int playerChoice;
        std::cout << "You have leveled up which stat do you want to improve?" << std::endl;
        std::cout << "1. Strength\n2. Dexterity\n3. Intelligence\n4. Charisma" << std::endl;
        std::cin >> playerChoice;
        switch(playerChoice)
        {
        case1:
            player.strength += 1;
            break;
        case2:
            player.dexterity += 1;
            break;
        case3:
            player.intelligience += 1;
            break;
        case4: 
            player.charisma += 1;
            break;
        default:
            std::cout << "invalid choice!" << std::endl;
            break;
        }
}

void LevelManager::Leveling(Player &player)
{
    bool levelIsTaken[5] = {false, false, false, false, false };
    if(player.levels > 10 && levelIsTaken[1] == 0)
    {
        levelIsTaken[1] = 1;
        improveStat(player);
    }
    if(player.levels > 25 && levelIsTaken[2] == 0)
    {
        levelIsTaken[2] = 1;
        improveStat(player);
    }
    if(player.levels > 50 && levelIsTaken[3] == 0)
    {
        levelIsTaken[3] = 1;
        improveStat(player);
    }
}