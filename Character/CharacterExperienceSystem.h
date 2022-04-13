//
// Created by ossen on 06/04/2022.
//

#ifndef TEXT_ADVENTURE_GAME_CHARACTEREXPERIENCESYSTEM_H
#define TEXT_ADVENTURE_GAME_CHARACTEREXPERIENCESYSTEM_H

#include <iostream>

class CharacterExperienceSystem {
private:
    uint currentExpLevel;
    uint currentExpPoints;
    uint expToNextLevel;

public:

    CharacterExperienceSystem() {
        currentExpPoints = 0;
        currentExpLevel = 1;
        expToNextLevel = 20;
    }

    uint getCurrentExpPoints() const {
        return currentExpPoints;
    }

    uint getCurrentExpLevel() const {
        return currentExpLevel;
    }

    bool isInitializedAtZero() {
        return currentExpLevel == 1 && currentExpPoints == 0;
    }

    void addExperience(uint increment) {
        currentExpPoints += increment;
        checkForLevelUp();
    }

    void checkForLevelUp() {
        if (currentExpPoints >= expToNextLevel)
            levelUp((-1) * (expToNextLevel - currentExpPoints));
    }

    void levelUp(uint remains) {
        currentExpLevel++;

        expToNextLevel = calcExpToNextLevel();
        currentExpPoints = remains;
        checkForLevelUp();
    }

    uint calcExpToNextLevel() {
        return (currentExpLevel + 1) * 10;
    }

    uint getExpToNextLevel() const {
        return expToNextLevel;
    }

    std::string levelUpFeedback() {
        return "Level up! Your level is now " + std::to_string(currentExpLevel) + ".";
    }
};

#endif //TEXT_ADVENTURE_GAME_CHARACTEREXPERIENCESYSTEM_H
