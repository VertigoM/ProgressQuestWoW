#ifndef DND___AGAIN_CHARACTER_STATS_H
#define DND___AGAIN_CHARACTER_STATS_H
#include <string>

class character_stats{
public:
    character_stats() = default;
    character_stats(int, int, int, int, int);
    static character_stats select_stats(const std::string&,
                                        const std::string&);
private:
    int str, agi, sta, intl, spi;
};

#endif //DND___AGAIN_CHARACTER_STATS_H
