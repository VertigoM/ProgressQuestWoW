#ifndef DND___AGAIN_MAIN_CHARACTER_H
#define DND___AGAIN_MAIN_CHARACTER_H
#include <string>
#include "Race.h"
#include "Spec.h"
#include "Spell.h"

class Main_character {
public:
    Main_character();

    //set - ers
    void setCharacterName(const std::string&);
    void setRace(const Race&);
    void setSpec(const Spec&);

    //utility
    void levelUp();
    void castSpell();
    void addSpell(Spell*);
    friend std::ostream& operator<<(std::ostream&, const Main_character&);

    //get-ers
    std::string getCharacterRace();
    std::string getCharacterName();

    ~Main_character();
private:
    std::string characterName;
    int characterLevel;
    Race race;
    //Specialization specialization
    Spec spec;
    std::vector<Spell*> spellBook;
    //stats
    characterStats baseStats;
    characterStats bonusStats;
};

#endif //DND___AGAIN_MAIN_CHARACTER_H
