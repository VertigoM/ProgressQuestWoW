#include <iostream>
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
    return 0;
}