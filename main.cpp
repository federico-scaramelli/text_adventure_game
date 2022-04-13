#include <iostream>
#include "./Character/Character.h"
#include "./Utilities/Utility.h"

bool isNumber(const std::string& s)
{
    return s.find_first_not_of("0123456789") == std::string::npos;
}

bool classInput(Character& character) {
    std::string choice;
    std::cout << "1 - Warrior \n"
                 "2 - Mage" << std::endl;

    std::getline(std::cin, choice);
    if (!isNumber(choice)){
        std::cout << choice << "?! ";
        choice = "-1";
    }

    switch (stoi(choice)) {
        case 1:
            character.setCharacterClass("Warrior");
            break;
        case 2:
            character.setCharacterClass("Mage");
            break;
        default:
            std::cout << "I didn't get it.. can you repeat?" << std::endl;
            return false;
    }
    return true;
}

int main() {
    Character character = Character();

    std::cout << "Hello, adventurer!" << std::endl;
    std::cout << "What are you doing in the Black Forest!?" << std::endl;
    std::cout << "This is a really dangerous place..." << std::endl;

    std::cout << "Anyway, nice to meet you. What's your name?!" << std::endl;
    std::string name;
    std::getline(std::cin, name, '\n');
    character.setName(name);

    std::cout << "Oh! " << name << ", nice name for a..." << std::endl;
    while(!classInput(character)) {}
    std::cout << "...a " << character.getClassName() << "! Wow!" << std::endl;
    std::cout << "Well.. I hope you stay safe in this place! See you!" << std::endl << std::endl;
    std::cout << character.getName() << " - " << character.getClassName() << std::endl;
    std::cout << "Stats: \n" << character.getCharacterStats()->toString() << std::endl;



    return 0;
}
