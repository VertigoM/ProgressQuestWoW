#include "main_character.h"
#include <iostream>

character::character(const std::string& name,
                     std::unique_ptr<race> r,
                     std::unique_ptr<character_class> c):
                     character_name(std::move(name)),
                     some_derived_race(std::move(r)),
                     some_derived_character_class(std::move(c)),
                     character_level(1){
    class_specific_spells = std::move(
            some_derived_character_class->class_spells()
    );
    stats = character_stats::select_stats(
            get_character_class(),
            get_character_race()
            );
}

std::ostream &operator<<(std::ostream &os, const character &c) {
    os << "Character name: "  << c.character_name  << '\n'
       << "Character level: " << c.character_level << '\n'
       << "Character class: " << c.get_character_class() << '\n'
       << "Character race: "  << c.get_character_race() << '\n';
    return os;
}

std::string character::get_character_class() const {
    return std::string(some_derived_character_class->get_name());
}

std::string character::get_character_race() const {
    return std::string(some_derived_race->get_name());
}
/*
character::character(const character &c) {
    character_name = c.character_name;
    character_level = c.character_level;
    stats = c.stats;
    some_derived_race = std::move(std::make_unique<
            race>(*(c.some_derived_race)));
    //!!! override every virtual function
    //!!!allocating an object of abstract type
    some_derived_character_class = std::move(std::make_unique<
            character_class>(*(c.some_derived_character_class)));

    --- class_specific_spells ---

    for(auto &s : c.class_specific_spells)
        class_specific_spells.push_back(std::move(std::make_unique<
                spell>(*s)));
}

character& character::operator=(const character &c) {

}
*/