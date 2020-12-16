#include "item.h"
#include <iostream>

std::unique_ptr<item> sword::clone() const {
    return std::make_unique<sword>(*this);
}

sword::sword(const std::string & n, int v, int x):
    item_name(n),
    item_code(v),
    damage_value(x){}

void sword::print(std::ostream &os) {
    os << item_name << '\n'
       << "Sword damage value : " << damage_value << '\n';
}

std::unique_ptr<item> chestplate::clone() const {
    return std::make_unique<chestplate>(*this);
}

chestplate::chestplate(const std::string& n, int v, int x):
    item_name(n),
    item_code(v),
    armor_value(x){}

void chestplate::print(std::ostream &os) {
    os << item_name << '\n'
       << "Armor value : " << armor_value << '\n';
}

std::unique_ptr<item> healthpotion::clone() const {
    return std::make_unique<healthpotion>(*this);
}

healthpotion::healthpotion(const std::string& n, int v, int x):
    item_name(n),
    item_code(v),
    restore_value(x){}

void healthpotion::print(std::ostream &os) {
    os << item_name << '\n'
       << "Health potion restores " << restore_value << " hp\n";
}


void chest::add_item(const item& i) {
    items.push_back(i.clone());
}

std::ostream &operator<<(std::ostream &os, const chest& c) {
    os << "Items contained in chest:\n";
    for(auto &it : c.items){
        it->print(os);
    }
    return os;
}

chest::chest(const chest &c) {
    for(auto &it : c.items)
        items.emplace_back(it->clone());
}

chest &chest::operator=(chest c) {
    std::swap(items, c.items);
    return *this;
}
