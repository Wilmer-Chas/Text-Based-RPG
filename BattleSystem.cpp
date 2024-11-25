#include "Player.h"
#include "Enemy.h"
#include "BattleSystem.h"
#include "item.h"
#include "baseItems.h"
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>

int choice;

void BattleSystem::playerTurn(Player& player, Enemy& enemy, Item& item)
{
    int playerDamage = player.calculateDoDamage(item.getDamage()); // Currently using 0 for weapon damage; will replace with actual weapon damage when weapons are implemented.

    do
    {
        std::cout << "Player HP: " << player.hp << std::endl;
        std::cout << std::endl;
        enemy.displayEnemyInfo();
        std::cout << std::endl;

        std::cout << "Your turn to make a move.\n"
            "1. Attack(" << playerDamage << " damage)\n"
            "2. Use item\n"
            "\nYour choice: ";
        std::cin >> choice;
        if(choice < 1 || choice > 2) std::cout << "\nWrong input, pleace try again." << std::endl;
    } while (choice < 1 || choice > 2);

    //Generates random number betwen 0-9. If number is 0 player miss thir attack. 90% hit chance.
    srand(time(0));
    int hitOrMiss = rand() % 9;

    switch (choice)
    {
    case 1:
        if (hitOrMiss == 0)
        {
            std::cout << "You swing and you miss your target!" << std::endl;
            break;
        }
        else
        {
            std::cout << "You swing and you hit your enemy, dealing " << playerDamage << " damage." << std::endl;
            enemy.takeDamage(playerDamage);
            break;
        }
    case 2:
        std::cout << "Not implemented yet." << std::endl;
        break;
    default:
        break;
    }
    std::cout << std::endl;
}

void BattleSystem::enemyTurn(Player& player, Enemy& enemy)
{
    if(enemy.getHp() <= 0) return;
    int enemyDamage = enemy.dealDamage();
    //Generates random number betwen 0-2. If number is 0 enemy miss their attack. 66% hit chance.
    srand(time(0));
    int hitOrMiss = rand() % 3;
    if (hitOrMiss == 0)
    {
        std::cout << "Your enemy unleash their attack upon you but luckily they miss!" << std::endl;
    }
    else
    {
        std::cout << "Your enemy unleash their attack upon you, dealing " << enemyDamage << " damage." << std::endl;
        player.hp -= enemyDamage;
    }
    std::cout << std::endl;
}
void BattleSystem::healthCheck(Player& player, Enemy& enemy)
{
    if (player.hp < 0) player.hp = 0;
    if (enemy.getHp() < 0) enemy.setHp(0);
    if (player.hp == 0)
    {
        std::cout << "You fall to the ground. You feel your soul leaving your body as you draw your last breath.\nYOU ARE DEAD.\n" << std::endl;
        player.isAlive = false;
    }
    else if (enemy.getHp() == 0)
    {
        std::cout << "Your enemy falls to the ground. Congratulations, you won the battle.\nYou live to die another day.\n" << std::endl;
        enemy.isAlive = false;
    }
}
void BattleSystem::battleLoop(Player& player, Enemy& enemy, Item& item)
{
    do
    {
        playerTurn(player, enemy, item);
        enemyTurn(player, enemy);
        healthCheck(player, enemy);
        pressEnter();
    } while (player.isAlive && enemy. isAlive);
}

void BattleSystem::pressEnter()
{
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    system("CLS");
}

/*int main()
{
    Player player("Kalle", "Warrior", 18, 10, 2, 5, 13, 2, 100, true);
    Bat bat;

    Sword excalibur;

    BattleSystem battle;

    battle.battleLoop(player, bat, excalibur);
}*/
