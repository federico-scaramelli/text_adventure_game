//
// Created by ossen on 06/04/2022.
//

#include "gtest/gtest.h"
#include "../../Character/Character.h"

TEST(CharacterExperienceSystem, CharacterHasNotExperienceTest) {
    CharacterExperienceSystem characterExpSystem = CharacterExperienceSystem();
    ASSERT_TRUE(characterExpSystem.hasNoExperience());
}

TEST(CharacterExperienceSystem, CharacterAddExperienceTest) {
    CharacterExperienceSystem characterExpSystem = CharacterExperienceSystem();
    ASSERT_EQ(characterExpSystem.getCurrentExpLevel(), 1);
    ASSERT_EQ(characterExpSystem.getCurrentExpPoints(), 0);
    ASSERT_EQ(characterExpSystem.getExpToNextLevel(), 20);
    characterExpSystem.addExperience(10);
    ASSERT_EQ(characterExpSystem.getCurrentExpPoints(), 10);
    ASSERT_EQ(characterExpSystem.getCurrentExpLevel(), 1);
    ASSERT_EQ(characterExpSystem.getExpToNextLevel(), 20);
}

TEST(CharacterExperienceSystem, CharacterLevelIncreaseTest) {
    CharacterExperienceSystem characterExpSystem = CharacterExperienceSystem();
    characterExpSystem.addExperience(20);
    ASSERT_EQ(characterExpSystem.getCurrentExpLevel(), 2);
    ASSERT_EQ(characterExpSystem.getCurrentExpPoints(), 0);
    ASSERT_EQ(characterExpSystem.getExpToNextLevel(), 30);
}

TEST(CharacterExperienceSystem, CharacterLevelIncreaseWithRemainsTest) {
    CharacterExperienceSystem characterExpSystem = CharacterExperienceSystem();
    characterExpSystem.addExperience(55);
    ASSERT_EQ(characterExpSystem.getCurrentExpLevel(), 3);
    ASSERT_EQ(characterExpSystem.getCurrentExpPoints(), 5);
    ASSERT_EQ(characterExpSystem.getExpToNextLevel(), 40);
}

TEST(CharacterExperienceSystem, CharacterStatsIncrease) {
    Character character = Character();

    *character.getCharacterStats() += {1,1,1};

    ASSERT_EQ(character.getCharacterStats()->getStrength(), 1);
    ASSERT_EQ(character.getCharacterStats()->getMind(), 1);
    ASSERT_EQ(character.getCharacterStats()->getEndurance(), 1);
}

TEST(CharacterExperienceSystem, CharacterStatsIncreaseAtLevelUp) {
    Character character = Character();


}
