//
// Created by ossen on 30/03/2022.
//

#include "Character.h"

bool Character::hasStatsToZero() {
    return characterStats.strength == characterStats.mind == characterStats.endurance == 0;
}

bool Character::hasEmptyName() {
    return name == "";
}

bool Character::hasNoExperience() {
    return characterExpSystem.isInitializedAtZero();
}

Character::Character() {
    characterStats.strength = characterStats.mind = characterStats.endurance = 0;
    characterExpSystem = CharacterExperienceSystem();
}

uint Character::getStrength() const {
    return characterStats.strength;
}

uint Character::getMind() const {
    return characterStats.mind;
}

uint Character::getEndurance() const {
    return characterStats.endurance;
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

std::string Character::getName() {
    return this->name;
}

CharacterStats* Character::getCharacterStats() {
    return &characterStats;
}

CharacterExperienceSystem *Character::getCharacterExperienceSystem() {
    return &characterExpSystem;
}



