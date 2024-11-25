#include "Level.h"
#include <cmath>
#include <iostream>

// Initialize a player's level in the manager
void LevelManager::initializePlayer(const Player& player) {
    playerLevels[&player] = 1; // Default starting level
}

// Get the current level of a player
int LevelManager::getLevel(const Player& player) const {
    auto it = playerLevels.find(&player);
    if (it != playerLevels.end()) {
        return it->second;
    }
    return 1; // Default if player not initialized
}

// Calculate the EXP required to reach the next level
int LevelManager::getExpToNextLevel(const Player& player) const {
    int level = getLevel(player);
    return static_cast<int>(std::pow(level, 2) * 10);
}

// Increase a player's level
void LevelManager::levelUp(Player& player) {
    int& level = playerLevels[&player]; // Get a reference to the player's level
    level++;
    std::cout << "Congratulations, " << player.name 
              << "! You've leveled up to Level " << level << "!\n";
}
