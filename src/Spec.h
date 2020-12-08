#ifndef DND___AGAIN_SPEC_H
#define DND___AGAIN_SPEC_H

#include <string>
#include <vector>
#include "Spell.h"

class character_class{
public:
    virtual ~character_class() = default;
    virtual std::string get_name() const = 0;
    virtual std::vector<
            std::unique_ptr<spell>>
            class_spells() const{
        return std::vector<std::unique_ptr<spell>>();}
private:
    std::string _name;
};

class mage : public character_class{
public:
    std::string get_name() const override{return "Mage";}
    std::vector<std::unique_ptr<spell>>class_spells() const override;

};

class shaman : public character_class{
public:
    std::string get_name() const override{return "Shaman";}
    std::vector<std::unique_ptr<spell>> class_spells() const override;
};

class paladin : public character_class{
public:
    std::string get_name() const override{return "Paladin";}
    std::vector<std::unique_ptr<spell>> class_spells() const override;
};

class rogue : public character_class{
public:
    std::string get_name() const override{return "Rogue";}
    std::vector<std::unique_ptr<spell>> class_spells() const override;
};

class druid : public character_class{
public:
    std::string get_name() const override{return "Druid";}
    std::vector<std::unique_ptr<spell>> class_spells() const override;
};

class warlock : public character_class{
public:
    std::string get_name() const override{return "Warlock";}
    std::vector<std::unique_ptr<spell>> class_spells() const override;
};

class warrior : public character_class{
    std::string get_name() const override{return "Warrior";}
    std::vector<std::unique_ptr<spell>> class_spells() const override;
};

#endif //DND___AGAIN_SPEC_H
