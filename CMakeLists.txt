cmake_minimum_required(VERSION 3.21)
project(text_adventure_game)

set(CMAKE_CXX_STANDARD 17)

add_executable(text_adventure_game main.cpp Character/Character.cpp Character/Character.h Utilities/utility.h Character/CharacterClasses.h)
add_subdirectory(Google_tests)