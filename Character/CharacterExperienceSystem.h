//
// Created by ossen on 06/04/2022.
//

//#ifndef TEXT_ADVENTURE_GAME_CHARACTEREXPERIENCESYSTEM_H
//#define TEXT_ADVENTURE_GAME_CHARACTEREXPERIENCESYSTEM_H

#include <string>
#include "../Utilities/Utility.h"

class CharacterExperienceSystem {
private:
    uint currentExpLevel;
    uint currentExpPoints;
    uint expToNextLevel; //Cached value of total next level's exp requirement
    class Character* character;
public:


    CharacterExperienceSystem();

    void SetCharacter(Character* character);

    uint getCurrentExpPoints() const;

    uint getCurrentExpLevel() const;

    bool hasNoExperience() const;

    void addExperience(uint amount);

    void checkForLevelUp();

    void levelUp(uint rest);

    uint calcExpToNextLevel();

    uint getExpToNextLevel() const;

    std::string levelUpFeedback();

    Character* GetCharacter();
};

//#endif //TEXT_ADVENTURE_GAME_CHARACTEREXPERIENCESYSTEM_H
