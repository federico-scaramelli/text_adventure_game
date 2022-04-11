//
// Created by ossen on 30/03/2022.
//

#ifndef TEXT_ADVENTURE_GAME_CHARACTER_H
#define TEXT_ADVENTURE_GAME_CHARACTER_H

#include <string>
#include <map>
#include "CharacterClassesCollection.h"
#include "../Utilities/utility.h"
#include "CharacterStats.h"
#include "CharacterExperienceSystem.h"

class Character {

private:
    CharacterStats characterStats;
    std::string characterClassName;
    std::string name;
    CharacterExperienceSystem characterExpSystem;

public:
    uint getStrength() const;
    uint getMind() const;
    uint getEndurance() const;
    const std::string &getClassName() const;
    CharacterStats* getCharacterStats();

public:

    Character();

    bool hasStatsToZero();

    bool hasEmptyName();

    bool hasNoExperience();

    void setCharacterClass(std::string characterClassName);

    void setName(std::string name);

    std::string getName();
};
#endif //TEXT_ADVENTURE_GAME_CHARACTER_H
