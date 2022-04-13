cmake_minimum_required(VERSION 3.21)
project(text_adventure_game)

set(CMAKE_CXX_STANDARD 17)

add_executable(text_adventure_game main.cpp Character/Character.cpp Character/Character.h Utilities/Utility.h Character/CharacterClassesCollection.h Character/CharacterStats.h Character/CharacterExperienceSystem.h Character/CharacterExperienceSystem.cpp)
add_subdirectory(Google_tests)