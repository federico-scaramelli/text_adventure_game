//
// Created by ossen on 30/03/2022.
//

//#ifndef TEXT_ADVENTURE_GAME_CHARACTER_H
//#define TEXT_ADVENTURE_GAME_CHARACTER_H
#include <string>

class Character {

private:
    std::string characterClassName;
    std::string name;
    class CharacterStats* characterStats;
    class CharacterExperienceSystem* characterExpSystem;

public:

    Character();

    bool hasEmptyName() const;

    void setCharacterClass(std::string characterClassName);

    const std::string &getClassName() const;

    void setName(std::string name);

    const std::string getName() const;

    CharacterExperienceSystem* getCharacterExperienceSystem();

    CharacterStats* getCharacterStats();
};
//#endif //TEXT_ADVENTURE_GAME_CHARACTER_H
