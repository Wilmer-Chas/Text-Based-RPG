#ifndef SCENARIO3_H
#define SCENARIO3_H

// Forward declaration of Player class
class Player;

#include <iostream>
#include <random>

class Scenario3
{
public:
    Player &player;  // Reference to a Player object

    // Constructor: Takes a reference to a Player object
    Scenario3(Player &p);

    void playScenario3(Player &player);
};

#endif