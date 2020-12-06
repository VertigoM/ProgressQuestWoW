#include <utility>
#include <vector>
#include <random>
#include "Spell.h"


Spell::Spell():
    spellName(""),
    manaCost(0){}

Spell::Spell(std::string  nameArg, int rankArg, int costArg):
    spellName(std::move(nameArg)),
    rank(rankArg),
    manaCost(costArg){}

std::string Spell::getSpellName() {
    return std::string(spellName);
}

std::ostream &operator<<(std::ostream &os, const Spell &spell) {
    os << "Spell name: " << spell.spellName << '\n';
    os << "Spell rank: " << spell.rank << '\n';
    os << "Mana cost: " << spell.manaCost;
    return os;
}

void Spell::print(std::ostream &os) const {
    os << "Base spell\n";
}

Spell::~Spell() = default;

OffensiveSpell::OffensiveSpell(const std::string &nameArg, int rankArg, int costArg, int damageArgMin, int damageArgMax):
    Spell(nameArg, rankArg, costArg){
    spellDamageMin = damageArgMin;
    spellDamageMax = damageArgMax;
}

int OffensiveSpell::doDamage() const{
    //srand(time(nullptr));
    int minDmg = spellDamageMin;
    int maxDmg = spellDamageMax;
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(minDmg, maxDmg);
    return dist(mt);
    //return (std::rand() % (spellDamageMax - spellDamageMin + 1));
}

void OffensiveSpell::print(std::ostream &os) const {
    os << "Derived class::spell offensive\n";
}

BuffSpell::BuffSpell(const std::string &nameArg, int modifiedArg, int rankArg, int costArg, int statArg):
    Spell(nameArg, rankArg, costArg){
    modifiedStat = modifiedArg;
    statModifier = statArg;
}

int BuffSpell::modifyStat(int stat) const {
    return stat + statModifier;
}

void BuffSpell::print(std::ostream &os) const {
    os << "Derived class::spell buff";
}
