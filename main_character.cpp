#include "main_character.h"
#include <iostream> //pentru operatorul<< ---> char*

Main_character::Main_character():
    characterName(""),
    characterLevel(1),
    race(),
    spellBook(0),
    spec(),
    baseStats(),
    bonusStats(){
        std::cout << "Character created!\n";
    }

void Main_character::setCharacterName(const std::string& nameArg){
    characterName = nameArg;
}

std::ostream& operator<<(std::ostream& os, const Main_character& character){
    os << "Character name: " << character.characterName << "\n";
    os << "Character level: " << character.characterLevel << "\n";

    //de modificat interactiunea
    //base stats cu bonus stats
    //base - stats -> level*(spec_class) + base;
    os << "Character base stats: " << character.baseStats << "\n";
    // bonus stats  ->  stats on items;
    return os;
}

std::string Main_character::getCharacterRace() {
    return race.getRaceName();
}

std::string Main_character::getCharacterName() {
    return characterName;
}

Main_character::~Main_character() {
    for(auto &it : spellBook)
        delete it;
}

void Main_character::setRace(const Race& raceArg) {
    //move constructor, race_ptr is a temp address
    race = raceArg;

    if(race.getRaceName() == "Human")
        baseStats.set_default(20, 20, 20, 20, 21);
    else if(race.getRaceName() == "Dwarf")
        baseStats.set_default(22, 16, 23, 19, 19);
    else if(race.getRaceName() == "Night elf")
        baseStats.set_default(17, 25, 19, 20, 20);
    else if(race.getRaceName() == "Gnome")
        baseStats.set_default(15, 23, 19, 24, 20);
    else if(race.getRaceName() == "Orc")
        baseStats.set_default(19, 18, 21, 18, 25);
    else if(race.getRaceName() == "Tauren")
        baseStats.set_default(25, 15, 22, 15, 22);
    else if(race.getRaceName() == "Troll")
        baseStats.set_default(21, 22, 21, 16, 21);
    else
        baseStats.set_default(0, 0, 0, 0, 0);

}

void Main_character::levelUp() {
    characterLevel ++;

    //test for every spec
}

void Main_character::setSpec(const Spec& specArg) {
    if(this -> race.getRaceName() != ""){
        spec = specArg;
    }
    else
    {
        std::cerr << "This character already has a class\n";
    }
}

void Main_character::castSpell() {
    int i = 1;
    std::cout << "Available spells:\n";

    for(auto it : spellBook){
        std::cout << "#" << i++ << it->getSpellName() << '\n';
    }

    int input;
    std::cout << "Select which spell to cast:\n";
    std::cin >> input;
    while(input < 1 || input > spellBook.size()){
        std::cout << "This is not a valid input; try again.";
        std::cin >> input;
    }
    std::cout << spellBook[input - 1]->getSpellName() << '\n';
}

void Main_character::addSpell(Spell *spell) {
    spellBook.push_back(spell);
}
