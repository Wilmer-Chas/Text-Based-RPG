#include <iostream>
#include "Scenario3.h"
#include "Player.h" 
#include "Enemy.h"
#include "BattleSystem.h"

// Constructor definition
Scenario3::Scenario3(Player &p) : player(p) 
{
    // std::cout << "Scenario3 created for player: " << player.name << std::endl;
}

// Function definition for handling the scenario
void Scenario3::playScenario3(Player &player)
{
    std::cout << "You have been attacked by Bandit!" << std::endl;
    std::cout << "How will you respond to this? 1. YOU threating the bandits. 2. Fight the bandits. 3. Talk with the Bandits. 4. Run away from the Bandits" << std::endl;
    BattleSystem battlesystem;
    Bandit Bandit1;
    int choice;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "The Bandits have taken your money" << std::endl;
        break;
    case 2:
        std::cout << "The Bandits have robbed you, you are less economist" << std::endl;
        battlesystem.battleLoop(player,Bandit1);
        break;
    case 3:
        std::cout << "You try to talk with the goblins." << std::endl;
        break;
    case 4:
        if(player.dexterity > 15)
        {
            std::cout << "The Bandits have robbed you, you are less economist" << std::endl;
        } 
        else
        {
            std::cout <<"You sucssed to run away" << std::endl;
            battlesystem.battleLoop(player, Bandit1);
        }
        break;
    default:
        std::cout << "Invalid input. Please reenter." << std::endl;
        break;
    }

    // You can use the class member `this->player` if needed
    std::cout << "Your player's strength: " << this->player.strength << std::endl; 
}