//
// Created by ossen on 06/04/2022.
//

#include "gtest/gtest.h"
#include "../../Character/Character.h"

CharacterExperienceSystem characterExpSystem = CharacterExperienceSystem();



TEST(CharacterExperienceSystem, CharacterHasNotExperienceTest) {
    ASSERT_TRUE(characterExpSystem.isInitializedAtZero());
}

TEST(CharacterExperienceSystem, CharacterAddExperienceTest) {
    ASSERT_EQ(characterExpSystem.getCurrentExpLevel(), 1);
    ASSERT_EQ(characterExpSystem.getCurrentExpPoints(), 0);
    ASSERT_EQ(characterExpSystem.getExpToNextLevel(), 20);
    characterExpSystem.addExperience(10);
    ASSERT_EQ(characterExpSystem.getCurrentExpPoints(), 10);
    ASSERT_EQ(characterExpSystem.getCurrentExpLevel(), 1);
    ASSERT_EQ(characterExpSystem.getExpToNextLevel(), 10);
}

TEST(CharacterExperienceSystem, CharacterLevelIncreaseTest) {
    characterExpSystem.addExperience(10);
    ASSERT_EQ(characterExpSystem.getCurrentExpLevel(), 2);
    ASSERT_EQ(characterExpSystem.getCurrentExpPoints(), 0);
    ASSERT_EQ(characterExpSystem.getExpToNextLevel(), 30);
}

TEST(CharacterExperienceSystem, CharacterLevelIncreaseWithRemainsTest) {
    characterExpSystem.addExperience(35);
    ASSERT_EQ(characterExpSystem.getCurrentExpLevel(), 3);
    ASSERT_EQ(characterExpSystem.getCurrentExpPoints(), 5);
    ASSERT_EQ(characterExpSystem.getExpToNextLevel(), 35);
}

TEST(CharacterExperienceSystem, CharacterStatsIncrease) {
    Character character = Character();

    *character.getCharacterStats() += {1,1,1};

    ASSERT_EQ(character.getStrength(), 1);
    ASSERT_EQ(character.getMind(), 1);
    ASSERT_EQ(character.getEndurance(), 1);
}
