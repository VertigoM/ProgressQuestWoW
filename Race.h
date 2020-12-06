#ifndef DND___AGAIN_RACE_H
#define DND___AGAIN_RACE_H
#include <string>
#include "character_stats.h"

class Race {
public:
    //default-constructor - ?am nevoie de el?
    Race();
    //constructor
    Race(std::string, std::string);

    //get-ers
    std::string getRaceName();
    virtual ~Race();
private:
std::string raceName;
std::string faction;
};

//Aliance races :

class Human : public Race{
public:
    Human();
};

class Dwarf : public Race {
public:
    Dwarf();
};

class Night_elf : public Race {
public:
    Night_elf();
};

class Gnome : public Race {
public:
    Gnome();
};

//Horde races :

class Orc : public Race {
public:
    Orc();
};

class Undead : public Race {
public:
    Undead();
};

class Tauren : public Race{
public:
    Tauren();
};

class Troll : public Race {
public:
    Troll();
};
#endif //DND___AGAIN_RACE_H
