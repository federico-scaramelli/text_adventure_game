//
// Created by ossen on 06/04/2022.
//

#ifndef TEXT_ADVENTURE_GAME_CHARACTERSTATS_H
#define TEXT_ADVENTURE_GAME_CHARACTERSTATS_H

#include "../Utilities/Utility.h"

struct CharacterStats {
    uint strength;
    uint mind;
    uint endurance;

    CharacterStats() {
        strength = mind = endurance = 0;
    }

    CharacterStats(uint a, uint b, uint c) {
        strength = a;
        mind = b;
        endurance = c;
    }

    bool hasStatsToZero() {
        return strength == mind == endurance == 0;
    }

    uint getStrength() const {
        return strength;
    }

    uint getMind() const {
        return mind;
    }

    uint getEndurance() const {
        return endurance;
    }

    std::string toString() {
        std::string out = "";
        out += "    Strength:   " + std::to_string(strength) + "\n";
        out += "    Mind:       " + std::to_string(mind) + "\n";
        out += "    Endurance:  " + std::to_string(endurance);
        return out;
    }

    void operator+=(CharacterStats toSum) {
        strength += toSum.strength;
        mind += toSum.mind;
        endurance += toSum.endurance;
    }
};

#endif //TEXT_ADVENTURE_GAME_CHARACTERSTATS_H
