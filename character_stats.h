#ifndef DND___AGAIN_CHARACTER_STATS_H
#define DND___AGAIN_CHARACTER_STATS_H
#include <ostream>

class characterStats {
public:
    characterStats();
    void set_default(int, int, int, int, int);
    void set_str(int);
    void set_agi(int);
    void set_sta(int);
    void set_intl(int);
    void set_spi(int);

    //functii
    friend std::ostream& operator<<(std::ostream &, const characterStats&);

private:
    int str, agi, sta, intl, spi;
};

#endif //DND___AGAIN_CHARACTER_STATS_H
