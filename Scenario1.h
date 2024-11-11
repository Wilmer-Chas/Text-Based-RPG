#ifndef SCENARIO1_H
#define SCENARIO1_H
#include <iostream>
#include <random>
class Scenario1
{
    // this needs to be seperated in a cpp and a h file

    // this needs information about the player object so that it can call upon those values. So we have to pass the class in:
    void playScenario1(Player &player)
    {
        // may need some information from player regarding attributes 
        std::cout << "you have been attacked by goblins";
        std::cout << "how will you respond to this? 1. Scare the goblins away. 2. Fight. 3. Talk with the goblins. 4. run away";
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1: 
            break;
            if()
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            std::cout << "invalid input";
            std::cout << "Need to reeenter loop";
            break;
        }

    };

};


#endif