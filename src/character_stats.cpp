#include "character_stats.h"

character_stats::character_stats(int v1, int v2, int v3,
                                 int v4, int v5):
    str(v1), agi(v2), sta(v3), intl(v4), spi(v5){}

character_stats character_stats::select_stats(const std::string& str,
                                              const std::string& strN) {
    if(str == "Druid"){
        if(strN == "Night elf")
            return character_stats(17, 24, 20, 22, 22);
        else if(strN == "Tauren")
            return character_stats(26, 16, 21, 18, 24);
    }
    else if(str == "Hunter"){
        if(strN == "Dwarf"){
            return character_stats(25, 19, 22, 19, 20);
        }
        else if(strN == "Night elf"){
            return character_stats(16, 27, 21, 20, 21);
        }
        else if(strN == "Orc"){
            return character_stats(23, 20, 22, 17, 23);
        }
        else if(strN == "Tauren"){
            return character_stats(25, 19, 22, 16, 23);
        }
        else if(strN == "Troll"){
            return character_stats(21, 25, 21, 16, 22);
        }
    }
    else if(str == "Mage"){
        if(strN == "Gnome")
            return character_stats(15, 22, 20, 27, 22);
        else if(strN == "Human")
            return character_stats(20, 20, 20, 23, 22);
        else if(strN == "Undead")
            return character_stats(19, 18, 20, 21, 27);
        else if(strN == "Troll")
            return character_stats(21, 22, 20, 19, 23);
    }
    else if(str == "Paladin"){
        if(strN == "Human"){}
        else if(strN == "Dwarf"){}
    }
    else if(str == "Priest"){
        if(strN == "Dwarf"){
            return character_stats(25, 16, 21, 21, 22);
        }
        else if(strN == "Human"){
            return character_stats(20, 20, 20, 22, 23);
        }
        else if(strN == "Night elf"){
            return character_stats(16, 24 ,20 ,22 ,23);
        }
        else if(strN == "Undead"){
            return character_stats(19 ,18 ,20 ,20 ,28);
        }
        else if(strN == "Troll"){
            return character_stats(21 ,22 ,20 ,18 ,24);
        }
    }
    else if(str == "Rogue"){
        return character_stats();
    }
    else if(str == "Shaman"){
        return character_stats();
    }
    else if(str == "Warlock"){
        return character_stats();
    }
    else if(str == "Warrior"){
        return character_stats();
    }
    else
        return character_stats();
}
