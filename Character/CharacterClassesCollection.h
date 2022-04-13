//
// Created by ossen on 30/03/2022.
//

#ifndef TEXT_ADVENTURE_GAME_CHARACTERCLASSESCOLLECTION_CPP
#define TEXT_ADVENTURE_GAME_CHARACTERCLASSESCOLLECTION_CPP

#include <string>
#include <map>
#include "CharacterStats.h"

const std::map<std::string, CharacterStats> characterClassesCollection = {
    {"Warrior", {4,1,3}},
    {"Mage", {2,4,2}}
};

#endif //TEXT_ADVENTURE_GAME_CHARACTERCLASSESCOLLECTION_CPP
