#ifndef DND___AGAIN_SPELL_H
#define DND___AGAIN_SPELL_H


#include <string>
#include "character_stats.h"

class Spell {
public:
    Spell();
    Spell(std::string , int, int);

    std::string getSpellName();
    friend std::ostream& operator<<(std::ostream&, const Spell&);
    virtual ~Spell();
private:
    virtual void print(std::ostream&) const;
    std::string spellName;
    int rank;
    int manaCost;
};

class OffensiveSpell : public Spell{
public:
    OffensiveSpell(const std::string&, int, int, int, int);
    void print(std::ostream&) const override;
    int doDamage() const;
private:
    int spellDamageMin;
    int spellDamageMax;
};

class BuffSpell : public Spell{
public:
    BuffSpell(const std::string&, int, int, int, int);
    void print(std::ostream&) const override;
    int modifyStat(int) const;
private:
    int modifiedStat;
    int statModifier;
};

#endif //DND___AGAIN_SPELL_H
