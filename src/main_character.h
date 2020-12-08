#ifndef DND___AGAIN_MAIN_CHARACTER_H
#define DND___AGAIN_MAIN_CHARACTER_H
#include <string>
#include <memory>
#include <vector>
#include "Race.h"
#include "Spec.h"
#include "Spell.h"

class character{
public:
    character(
            const std::string&,
            std::unique_ptr<race>,
            std::unique_ptr<character_class>
            );
    std::string get_character_class() const;
    std::string get_character_race() const;
    friend std::ostream &operator<<(std::ostream&,
            const character&);

private:
    std::string character_name;
    int character_level;
    character_stats stats;
    std::unique_ptr<race> some_derived_race;
    std::unique_ptr<character_class> some_derived_character_class;
    std::vector<std::unique_ptr<spell>> class_specific_spells;
};

#endif //DND___AGAIN_MAIN_CHARACTER_H
