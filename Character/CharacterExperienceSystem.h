//
// Created by ossen on 06/04/2022.
//

#ifndef TEXT_ADVENTURE_GAME_CHARACTEREXPERIENCESYSTEM_H
#define TEXT_ADVENTURE_GAME_CHARACTEREXPERIENCESYSTEM_H

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
        if (increment >= expToNextLevel) {
            uint remains = (-1) * (expToNextLevel - increment);
            levelUp(remains);
        } else {
            expToNextLevel -= increment;
            currentExpPoints += increment;
        }
    }

    void levelUp(uint remains) {
        currentExpLevel++;
        expToNextLevel = (currentExpLevel + 1) * 10 - remains;
        currentExpPoints = remains;
    }

    uint getExpToNextLevel() const {
        return expToNextLevel;
    }
};

#endif //TEXT_ADVENTURE_GAME_CHARACTEREXPERIENCESYSTEM_H
