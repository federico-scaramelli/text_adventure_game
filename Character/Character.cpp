//
// Created by ossen on 30/03/2022.
//

#include "Character.h"
#include "CharacterExperienceSystem.h"
#include "CharacterClassesCollection.h"

bool Character::hasEmptyName() const {
    return name == "";
}

Character::Character() {
    characterStats = new CharacterStats();
    characterExpSystem = new CharacterExperienceSystem();

}

void Character::setCharacterClass(std::string characterClassName) {
    this->characterClassName = characterClassName;
    CharacterStats stats = (characterClassesCollection.find(characterClassName)->second);
    *characterStats = stats;
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
    return characterStats;
}

CharacterExperienceSystem* Character::getCharacterExperienceSystem() {
    return characterExpSystem;
}



