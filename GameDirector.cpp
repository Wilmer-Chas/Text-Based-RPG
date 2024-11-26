#include <iostream>
#include <random>
#include <cstdlib> // for random usage
#include "Player.h"
#include "Scenario1.h"
#include "Player.h"
#include "Scenario1.h"
#include "Scenario3.h"
#include "item.h"
#include "baseItems.h"

int main()
{
    Player player("Name", "unknown", 10, 10, 0, 5, 10, 10, 30, true);
    int playerChoiceClass;
    std::cout << "Choose a class 1=mage, 2 = Rogue, 3=Warrior" << std::endl;
    std::cin >> playerChoiceClass;
    if (playerChoiceClass == 1)
    {
        player.playerClass = "Mage";
        player.setClassAttributes();
    }
    else if (playerChoiceClass == 2)
    {
        player.playerClass = "Rogue";
        player.setClassAttributes();
    }
    else if (playerChoiceClass == 3)
    {
        player.playerClass = "Warrior";
        player.setClassAttributes();
    }
    else 
    {
        std::cout << "something went wrong when selecting class" << std::endl;
    }
    player.displayInfoPlayer();

    int playerChoiceWeapon;
    std::cout << "Adventurer you must choose a weapon" << std::endl;
    std::cout << "Choose a weapon 1= sword, 2=bow, 3 = fireball" << std::endl;
    std::cin >> playerChoiceWeapon;
    player.chooseWeapon(playerChoiceWeapon); 

    std::cout << "Adventurer what is your name?" << std::endl;
    std::string playerName;
    std::cin >> playerName;
    player.setName(playerName);

    Scenario1 scenario1(player);
    Scenario3 scenario3(player);
    do {
        srand(static_cast<unsigned int> (time(0))); // seeds random
        int random_number = rand() % (101-50) + 50;
        if(random_number <= 50) { scenario1.playScenario1(player);}
        else if(random_number >= 50) {scenario3.playScenario3(player);}
    } while (player.hp >= 0);
    // wowow it works now i need to question whether this is a good implementation or not;;;
}