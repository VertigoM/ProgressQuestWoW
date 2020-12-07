#include <iostream>
#include "main_character.h"

int main(){
    character ch1(
            "Gandalf",
            std::make_unique<Orc>(),
            std::make_unique<mage>()
            );
    return 0;
}