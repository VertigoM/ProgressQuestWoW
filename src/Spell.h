#ifndef DND___AGAIN_SPELL_H
#define DND___AGAIN_SPELL_H
#include "memory"


class spell{
public:
    virtual ~spell() = default;
    //virtual void cast(std::unique_ptr<Main_character>) = 0;
    virtual std::string get_spell_name(){return std::string("");};
/*private:
    int rank = 0,
        mana_cost = 0;
    std::string _name = "";*/
};

class offensive_spell : public spell{
public:
    offensive_spell(std::string, int, int, int, int);
    //void cast(std::unique_ptr<Main_character>) override;
    std::string get_spell_name() override;
private:
    std::string _name;
    int rank, mana_cost,
        spell_damage_min, spell_damage_max;
};

class buff_spell : public spell{
public:
    buff_spell(std::string, int, int, std::string, int);
    //void cast(std::unique_ptr<Main_character>) override;
    std::string get_spell_name() override;
private:
    std::string _name, modified_stat;
    int rank, mana_cost, stat_modifier;
};


#endif //DND___AGAIN_SPELL_H
