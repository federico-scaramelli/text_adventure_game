//
// Created by ossen on 30/03/2022.
//

#ifndef TEXT_ADVENTURE_GAME_CHARACTER_H
#define TEXT_ADVENTURE_GAME_CHARACTER_H
#include "CharacterClasses.h"

class Character {

private:
    uint strength;
    uint mind;
    uint endurance;
    std::string characterClass;

public:
    uint getStrength() const;
    uint getMind() const;
    uint getEndurance() const;
    const std::string &getCharacterClass() const;

public:
    Character();

    bool isInitialized();

    void setCharacteristics(uint strength, uint mind, uint endurance);

    void setClass(std::string className);
};


#endif //TEXT_ADVENTURE_GAME_CHARACTER_H
