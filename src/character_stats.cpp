#include "character_stats.h"

characterStats::characterStats():
    str(0), agi(0), sta(0), intl(0), spi(0) {}

void characterStats::set_default(int strArg, int agiArg, int staArg,
                                 int intlArg, int spiArg){
this -> str = strArg;
this -> agi = agiArg;
this -> sta = staArg;
this -> intl = intlArg;
this -> spi = spiArg;
}

void characterStats::set_str(int arg) {
    this -> str = arg;
}

void characterStats::set_agi(int arg) {
    this -> agi = arg;
}


void characterStats::set_sta(int arg) {
    this -> sta = arg;
}

void characterStats::set_intl(int arg) {
    this -> intl = arg;
}

void characterStats::set_spi(int arg) {
    this -> spi = arg;
}

std::ostream& operator<<(std::ostream& os, const characterStats& stats){
    os << stats.str << stats.agi << stats.sta << stats.intl << stats.spi;
    return os;
}