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

std::vector<std::unique_ptr<spell>> shaman::class_spells() const {
    std::vector<std::unique_ptr<spell>> v;
    v.emplace_back(
            std::move(std::make_unique<offensive_spell>(
                    "Lightning Bolt", 1, 1, 1, 1
            ))
    );
    v.emplace_back(
            std::move(std::make_unique<buff_spell>(
                    "Totem wisdom", 1, 1, "int", 1
            ))
    );
    return v;
}

std::vector<std::unique_ptr<spell>> paladin::class_spells() const {
    std::vector<std::unique_ptr<spell>> v;
    v.emplace_back(
            std::move(std::make_unique<offensive_spell>(
                    "Hammer wrath", 1, 1, 1, 1
            ))
    );
    v.emplace_back(
            std::move(std::make_unique<buff_spell>(
                    "Blessing of wisdom", 1, 1, "int", 1
            ))
    );
    return v;
}

std::vector<std::unique_ptr<spell>> rogue::class_spells() const {
    std::vector<std::unique_ptr<spell>> v;
    v.emplace_back(
            std::move(std::make_unique<offensive_spell>(
                    "Eviscerate", 1, 1, 1, 1
            ))
    );
    v.emplace_back(
            std::move(std::make_unique<offensive_spell>(
                    "Garrote", 1, 1, 1, 1
            ))
    );
    return v;
}

std::vector<std::unique_ptr<spell>> druid::class_spells() const {
    std::vector<std::unique_ptr<spell>> v;
    v.emplace_back(
            std::move(std::make_unique<offensive_spell>(
                    "Nature wrath", 1, 1, 1, 1
            ))
    );
    v.emplace_back(
            std::move(std::make_unique<buff_spell>(
                    "Blessing of Elune", 1, 1, "int", 1
            ))
    );
    return v;
}

std::vector<std::unique_ptr<spell>> warlock::class_spells() const {
    std::vector<std::unique_ptr<spell>> v;
    v.emplace_back(
            std::move(std::make_unique<offensive_spell>(
                    "Hellfire", 1, 1, 1, 1
            ))
    );
    v.emplace_back(
            std::move(std::make_unique<buff_spell>(
                    "Fel intellect", 1, 1, "int", 1
            ))
    );
    v.emplace_back(
            std::move(std::make_unique<offensive_spell>(
                    "Shadow bolt", 1, 1, 1, 1
            ))
    );
    return v;
}

std::vector<std::unique_ptr<spell>> warrior::class_spells() const {
    std::vector<std::unique_ptr<spell>> v;
    v.emplace_back(
            std::move(std::make_unique<offensive_spell>(
                    "Shieldbash", 1, 1, 1, 1
            ))
    );
    v.emplace_back(
            std::move(std::make_unique<buff_spell>(
                    "Armor up!", 1, 1, "int", 1
            ))
    );
    return v;
}
