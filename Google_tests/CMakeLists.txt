project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# adding the Google_Tests_run target
add_executable(Google_Tests_run Character/CharacterSetupTest.cpp ../Character/Character.cpp ../Character/Character.h ../Utilities/Utility.h ../Character/CharacterClassesCollection.h ../Character/CharacterStats.h ../Character/CharacterExperienceSystem.h Character/CharacterExperienceSystemTest.cpp ../Character/CharacterExperienceSystem.cpp)

target_link_libraries(Google_Tests_run gtest gtest_main)