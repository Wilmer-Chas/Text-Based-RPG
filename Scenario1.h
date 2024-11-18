#ifndef SCENARIO1_H
#define SCENARIO1_H

// Forward declaration of Player class
class Player;

#include <iostream>
#include <random>

class Scenario1
{
public:
    Player &player;  // Reference to a Player object

    // Constructor: Takes a reference to a Player object
    Scenario1(Player &p);

    void playScenario1(Player &player);
};

#endif