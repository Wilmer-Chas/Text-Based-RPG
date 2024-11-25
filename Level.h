#ifndef LEVEL_MANAGER_H
#define LEVEL_MANAGER_H

#include "Player.h"
#include <unordered_map>

class LevelManager {
private:
    std::unordered_map<const Player*, int> playerLevels; // Maps Players to their levels
public:
    int getLevel(const Player& player) const;
    int getExpToNextLevel(const Player& player) const;
    void levelUp(Player& player);
    void initializePlayer(const Player& player);
};

#endif // LEVEL_MANAGER_H
