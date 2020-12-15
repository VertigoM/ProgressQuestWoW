#include <iostream>
#include "item.h"
#include "main_character.h"

int main(){
    character ch1(
            "Gandalf",
            std::make_unique<Gnome>(),
            std::make_unique<mage>()
            );
    std::cout << ch1.get_character_race() << '\n'
              << ch1.get_character_class() << '\n';

    character ch2(
            "Grommash",
            std::make_unique<Human>(),
            std::make_unique<warrior>()
            );

    std::cout << ch2;

    chest chest1;
    sword s1("Sabie mare, lunga", 10, 10);

    chest1.add_item(s1);

    chestplate c1("Armura", 123, 123);
    chest1.add_item(c1);
    std::cout << chest1;
    return 0;
}