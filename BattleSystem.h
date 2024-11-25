#include "Player.h"
#include "Enemy.h"
#include <string>
#include <iostream>
#include <limits>

class BattleSystem
{
public:

void playerTurn(Player& player, Enemy& enemy);
void enemyTurn(Player& player, Enemy& enemy);
void healthCheck(Player& player, Enemy& enemy);
void battleLoop(Player& player, Enemy& enemy);
void combatantInfo(Player& player, Enemy& enemy);
void pressEnter();
};
