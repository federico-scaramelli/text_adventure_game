//
// Created by ossen on 30/03/2022.
//

#include "Character.h"

bool Character::hasEmptyName() const {
    return name == "";
}

Character::Character() {
    characterStats.strength = characterStats.mind = characterStats.endurance = 0;
    characterExpSystem = CharacterExperienceSystem();
}

void Character::setCharacterClass(std::string characterClassName) {
    this->characterClassName = characterClassName;
    characterStats = characterClassesCollection.find(characterClassName)->second;
}

const std::string &Character::getClassName() const {
    return characterClassName;
}

void Character::setName(std::string name) {
    this->name = name;
}

const std::string Character::getName() const {
    return this->name;
}

CharacterStats* Character::getCharacterStats() {
    return &characterStats;
}

CharacterExperienceSystem *Character::getCharacterExperienceSystem() {
    return &characterExpSystem;
}



