#include "main_character.h"

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
    return os;
}

std::string character::get_character_class() const {
    return std::string(some_derived_character_class->get_name());
}

std::string character::get_character_race() const {
    return std::string(some_derived_race->get_name());
}
