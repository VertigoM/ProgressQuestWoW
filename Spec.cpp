#include "Spec.h"
#include <fstream>
#include <iostream>

Spec::Spec():
    specName(""){}

Spec::Spec(const std::string& nameArg):
    specName(nameArg),
    classSpells(0){}

Spec::Spec(const std::string& nameArg, const std::string& fileName):
    specName(nameArg){
    classSpells = readFromFile(fileName);
}

std::vector<Spell*> Spec::readFromFile(const std::string& fileName) {
    std::vector<Spell *> spellBook;
    std::fstream fileHandler;
    fileHandler.open(fileName, std::ios::in);
    if(fileHandler.is_open()){
        std::string spellType;
        while(!fileHandler.eof()) {
            fileHandler >> spellType;
            if (spellType == "offensive") {
                std::string spellName;
                int rank, cost, spellDamageMin, spellDamageMax;
                fileHandler >> spellName >> rank >> cost >> spellDamageMin >> spellDamageMax;
                spellBook.push_back(new OffensiveSpell(spellName, rank, cost, spellDamageMin, spellDamageMax));
            } else if (spellType == "buff") {
                std::string spellName;
                int mod, rank, cost, stat;
                fileHandler >> spellName >> mod >> rank >> cost >> stat;
                spellBook.push_back(new BuffSpell(spellName, mod, rank, cost, stat));
            }
        }
        fileHandler.close();
        return spellBook;
    }
    else{
        std::cerr<< "File couldn't be open\n";
        return spellBook;
    }
}

std::string Spec::getSpecName() {
    return std::string(specName);
}

Spec::~Spec() noexcept = default;

Hunter::Hunter():
    Spec("Hunter", "classSpells/hunter_spells.txt"){}

Mage::Mage():
    Spec("Mage", "classSpells/mage_spells.txt"){}

Paladin::Paladin():
    Spec("Paladin", "classSpells/paladin_spells.txt"){}

Priest::Priest():
    Spec("Priest", "classSpells/priest_spells.txt"){}

Rogue::Rogue():
    Spec("Rogue", "classSpells/rogue_spells.txt"){}

Shaman::Shaman():
    Spec("Shaman", "classSpells/shaman_spells.txt"){}

Warlock::Warlock():
    Spec("Warlock", "classSpells/warlock_spells.txt"){}

Warrior::Warrior():
    Spec("Warrior", "classSpells/warrior_spells.txt"){}