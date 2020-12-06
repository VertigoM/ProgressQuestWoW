#include "Race.h"
#include <iostream>
#include <utility>

Race::Race() = default;

Race::Race(std::string nameArg, std::string factionArg):
    raceName(std::move(nameArg)),
    faction(std::move(factionArg)) { }

Race::~Race() noexcept {}

// Alliance races:

std::string Race::getRaceName() {
    return raceName;
}

Human::Human():
    Race("Human","Alliance") {
        //A human was created - message;
        std::cout << "Human created\n";
}

Dwarf::Dwarf():
    Race("Dwarf", "Alliance") {
        //A dwarf was created - message;
        std::cout << "Dwarf created\n";
}

Night_elf::Night_elf():
    Race("Night-elf", "Alliance"){
    //A night_elf was created - message;
    std::cout << "N-elf created\n";
}

Gnome::Gnome():
    Race("Gnome", "Alliance") {
    //A gnome was created - message;
    std::cout << "Gnome created\n";
}

//Horde races :

Orc::Orc():
    Race("Orc", "Horde") {
    //An GLORIOUS orc was created - message;
    std::cout << "Orc created\n";
}

Undead::Undead():
    Race("Undead", "Horde"){
    //A beautiful undead was created - message;
    std::cout << "Undead created\n";
}

Tauren::Tauren():
    Race("Tauren", "Horde"){
    //A tauren was created - message;
    std::cout << "Tauren created\n";
}

Troll::Troll():
    Race("Troll", "Horde"){
    //A troll was created - message
    std::cout << "Troll created\n";
}