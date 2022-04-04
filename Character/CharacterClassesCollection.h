//
// Created by ossen on 30/03/2022.
//

#ifndef TEXT_ADVENTURE_GAME_CHARACTERCLASSESCOLLECTION_CPP
#define TEXT_ADVENTURE_GAME_CHARACTERCLASSESCOLLECTION_CPP

#include "../Utilities/utility.h"
#include <string>
#include <map>

struct CharacterStats {
    uint strength;
    uint mind;
    uint endurance;
};

const std::map<std::string, CharacterStats> characterClassesCollection = {
    {"Warrior", {2,3,4}}
};

#endif //TEXT_ADVENTURE_GAME_CHARACTERCLASSESCOLLECTION_CPP
