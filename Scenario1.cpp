#include <iostream>
#include "Scenario1.h"
#include "Player.h" 

// Constructor definition
Scenario1::Scenario1(Player &p) : player(p) 
{
    std::cout << "Scenario1 created for player: " << player.name << std::endl;
}

// Function definition for handling the scenario
void Scenario1::playScenario1(Player &player)
{
    std::cout << "You have been attacked by goblins!" << std::endl;
    std::cout << "How will you respond to this? 1. Scare the goblins away. 2. Fight. 3. Talk with the goblins. 4. Run away" << std::endl;

    int choice;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "You try to scare them away!" << std::endl;
        break;
    case 2:
        std::cout << "You fight the goblins!" << std::endl;
        break;
    case 3:
        std::cout << "You try to talk with the goblins." << std::endl;
        break;
    case 4:
        std::cout << "You run away!" << std::endl;
        break;
    default:
        std::cout << "Invalid input. Please reenter." << std::endl;
        break;
    }

    // You can use the class member `this->player` if needed
    std::cout << "Your player's strength: " << this->player.strength << std::endl; 
}