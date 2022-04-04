//
// Created by ossen on 30/03/2022.
//

#include "Character.h"

bool Character::isInitialized() {
    return strength == mind == endurance == 0;
}

Character::Character() {
    strength = mind = endurance = 0;
}

void Character::setCharacteristics(uint strength, uint mind, uint endurance) {
    this->strength = strength;
    this->endurance = endurance;
    this->mind = mind;
}

uint Character::getStrength() const {
    return strength;
}

uint Character::getMind() const {
    return mind;
}

uint Character::getEndurance() const {
    return endurance;
}

void Character::setClass(std::string className) {
    this->characterClass = className;
    CharacterStats characterCharacteristics = characterClassesCollection.find(characterClass)->second;
    setCharacteristics(characterCharacteristics.strength,
                       characterCharacteristics.mind, characterCharacteristics.endurance);
}

const std::string &Character::getCharacterClass() const {
    return characterClass;
}
