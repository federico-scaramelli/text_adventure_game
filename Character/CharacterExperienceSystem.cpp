//
// Created by ossen on 13/04/2022.
//

#include "CharacterExperienceSystem.h"

CharacterExperienceSystem::CharacterExperienceSystem() {
    currentExpPoints = 0;
    currentExpLevel = 1;
    expToNextLevel = calcExpToNextLevel();
}

uint CharacterExperienceSystem::getCurrentExpPoints() const {
    return currentExpPoints;
}

uint CharacterExperienceSystem::getCurrentExpLevel() const {
    return currentExpLevel;
}

bool CharacterExperienceSystem::hasNoExperience() const {
    return currentExpLevel == 1 && currentExpPoints == 0;
}

void CharacterExperienceSystem::addExperience(uint amount) {
    currentExpPoints += amount;
    checkForLevelUp();
}

void CharacterExperienceSystem::checkForLevelUp() {
    if (currentExpPoints >= expToNextLevel)
        levelUp((-1) * (expToNextLevel - currentExpPoints));
}

void CharacterExperienceSystem::levelUp(uint rest) {
    currentExpLevel++;

    expToNextLevel = calcExpToNextLevel();
    currentExpPoints = rest;
    checkForLevelUp();
}

uint CharacterExperienceSystem::calcExpToNextLevel() {
    return (currentExpLevel + 1) * 10;
}

uint CharacterExperienceSystem::getExpToNextLevel() const {
    return expToNextLevel;
}

std::string CharacterExperienceSystem::levelUpFeedback() {
    return "Level up! Your level is now " + std::to_string(currentExpLevel) + ".";
}