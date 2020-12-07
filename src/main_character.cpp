#include "main_character.h"

character::character(const std::string& name,
                     std::unique_ptr<race> r,
                     std::unique_ptr<character_class> c):
                     character_name(std::move(name)),
                     some_derived_race(std::move(r)),
                     some_derived_character_class(std::move(c)){
    class_specific_spells = std::move(
            some_derived_character_class->class_spells()
    );
}
