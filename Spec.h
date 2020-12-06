#ifndef DND___AGAIN_SPEC_H
#define DND___AGAIN_SPEC_H
#include <string>
#include <vector>
#include "Spell.h"


class Spec {
public:
    Spec();
    Spec(const std::string&);
    Spec(const std::string&, const std::string&);
    std::string getSpecName();
    virtual ~Spec();
private:
    std::vector<Spell*> readFromFile(const std::string&);
    std::vector<Spell*> classSpells;
    std::string specName;
};

class Druid : public Spec{
public:
    Druid();
};

class Hunter : public Spec{
public:
    Hunter();
};

class Mage : public Spec{
public:
    Mage();
};

class Paladin : public Spec{
public:
    Paladin();
};

class Priest : public Spec{
public:
    Priest();
};

class Rogue : public Spec{
public:
    Rogue();
};

class Shaman : public Spec{
public:
    Shaman();
};

class Warlock : public Spec{
public:
    Warlock();
};

class Warrior : public Spec{
public:
    Warrior();
};
#endif //DND___AGAIN_SPEC_H
