#ifndef DND___AGAIN_RACE_H
#define DND___AGAIN_RACE_H
#include <string>
#include "character_stats.h"

class race{
public:
    virtual ~race() = default;
    virtual std::string getName() const{
        return std::string("");}
};

class Horde{};

class Alliance{};

class Human : public race, Alliance{
public:
    std::string getName() const override{return "Human";}

private:
    std::string _name = "Human";
};

class Dwarf : public race, Alliance{
public:
    std::string getName() const override{return "Dwarf";}

private:
    std::string _name = "Dwarf";
};

class NightElf : public race, Alliance{
public:
    std::string getName() const override{return "Night Elf";}

private:
    std::string _name = "Night elf";
};
class Gnome : public race, Alliance{
public:
    std::string getName() const override{return "Gnome";}

private:
    std::string _name = "Gnome";
};

class Orc : public race, Horde{
public:
    std::string getName() const override{return "Orc";}

private:
    std::string _name = "Orc";
};

class Undead : public race, Horde{
public:
    std::string getName() const override{return "Undead";}

private:
    std::string _name = "Undead";
};

class Tauren : public race, Horde{
public:
    std::string getName() const override{return "Tauren";}

private:
    std::string _name = "Tauren";
};

class Troll : public race, Horde{
public:
    std::string getName() const override{return "Troll";}

private:
    std::string _name = "Troll";
};

#endif //DND___AGAIN_RACE_H
