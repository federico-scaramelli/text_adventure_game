#include "gtest/gtest.h"
#include "../Character/Character.h"

Character character = Character();


TEST(CharacterSetup, CharacterSetup_CreationTest){
    ASSERT_TRUE(character.isInitialized());
}


TEST(CharacterSetup, CharacterSetup_InizializationTest) {
    character.setCharacteristics(10, 10, 10);
    ASSERT_EQ(character.getStrength(), 10);
    ASSERT_EQ(character.getEndurance(), 10);
    ASSERT_EQ(character.getMind(), 10);
}

TEST(CharacterSetup, CharacterSetup_ClassAssignment) {
    character.setClass("Warrior");
    std::string characterClass = character.getCharacterClass();
    ASSERT_EQ(characterClass, "Warrior");
    CharacterStats classCharacteristics = characterClassesCollection.find(characterClass)->second;
    ASSERT_EQ(character.getStrength(), classCharacteristics.strength);
    ASSERT_EQ(character.getEndurance(), classCharacteristics.endurance);
    ASSERT_EQ(character.getMind(), classCharacteristics.mind);

}
//Alt+Insert per generazione automatica
