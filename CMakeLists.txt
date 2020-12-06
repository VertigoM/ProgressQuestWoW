cmake_minimum_required(VERSION 3.17)
project(DnD___again)

set(CMAKE_CXX_STANDARD 20)

add_executable(DnD___again main.cpp main_character.cpp main_character.h Race.cpp Race.h character_stats.cpp
        character_stats.h Spec.cpp Spec.h Spell.cpp Spell.h)
include_directories(classSpells)
file(COPY classSpells DESTINATION ${CMAKE_BINARY_DIR})