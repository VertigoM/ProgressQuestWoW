#include "Spec.h"

std::vector<spell> mage::class_spells() const {
    std::vector<spell> v;
    v.push_back(spell("Fireball"));
    return v;
}
