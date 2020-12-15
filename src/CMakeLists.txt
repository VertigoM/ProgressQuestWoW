cmake_minimum_required(VERSION 3.17)
project(ProgressQuestWoW)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_FILES main.cpp main_character.cpp main_character.h Race.cpp Race.h character_stats.cpp character_stats.h
        Spec.cpp Spec.h Spell.cpp Spell.h item.cpp item.h)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g")
add_executable(ProgressQuestWoW ${SOURCE_FILES})

include_directories(../classSpells)
file(COPY ../classSpells DESTINATION ${CMAKE_BINARY_DIR})