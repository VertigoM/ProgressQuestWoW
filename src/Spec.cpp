#include "Spec.h"

std::vector<std::unique_ptr<spell>> mage::class_spells() const {
    std::vector<std::unique_ptr<spell>> v;
    v.emplace_back(
            std::move(std::make_unique<offensive_spell>(
                    "Fireball", 1, 1, 1, 1
                    ))
            );
    v.emplace_back(
            std::move(std::make_unique<buff_spell>(
                    "Arcane intellect", 1, 1, "int", 1
                    ))
            );
    return v;
}
