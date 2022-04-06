#include "gtest/gtest.h"
#include "../../Character/Character.h"

Character character = Character();

TEST(CharacterSetup, CharacterSetup_InstantiationTest){
    ASSERT_TRUE(character.hasStatsToZero());
    ASSERT_TRUE(character.hasEmptyName());
    ASSERT_TRUE(character.hasNoExperience());
}

TEST(CharacterSetup, CharacterSetup_ClassAssignment) {
    character.setCharacterClass("Warrior");
    std::string characterClass = character.getClassName();
    ASSERT_EQ(characterClass, "Warrior");
    CharacterStats classCharacteristics = characterClassesCollection.find(characterClass)->second;
    ASSERT_EQ(character.getStrength(), classCharacteristics.strength);
    ASSERT_EQ(character.getEndurance(), classCharacteristics.endurance);
    ASSERT_EQ(character.getMind(), classCharacteristics.mind);
}

TEST(CharacterSetup, CharacterSetup_NameAssignment) {
    std::string name = "Ivan";
    character.setName(name);
    ASSERT_EQ(character.getName(), name);
}
//Alt+Insert per generazione automatica