#include <iostream>
#include "main_character.h"

int main(){
    Main_character character;
    character.setCharacterName("Sepultura");
    character.setRace(Orc());
    character.setSpec(Mage());

    return 0;
}