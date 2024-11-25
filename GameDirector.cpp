#include <iostream>
#include <random>
#include "Player.h"
#include "Scenario1.h"
#include "Player.h"
#include "Scenario1.h"

int main()
{
    Player player("Name", "unknown", 10, 10, 0, 5, 10, 10, 30, true);

    Scenario1 scenario1(player);
    scenario1.playScenario1(player);

    // wowow it works now i need to question whether this is a good implementation or not;;;
}