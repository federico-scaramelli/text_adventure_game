//
// Created by ossen on 06/04/2022.
//

#ifndef TEXT_ADVENTURE_GAME_CHARACTERSTATS_H
#define TEXT_ADVENTURE_GAME_CHARACTERSTATS_H

struct CharacterStats {
    uint strength;
    uint mind;
    uint endurance;

    std::string toString() {
        std::string out = "";
        out += "    Strength:   " + std::to_string(strength) + "\n";
        out += "    Mind:       " + std::to_string(mind) + "\n";
        out += "    Endurance:  " + std::to_string(endurance);
        return out;
    }
};

#endif //TEXT_ADVENTURE_GAME_CHARACTERSTATS_H
