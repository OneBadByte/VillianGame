//
// Created by blackdartq on 9/25/16.
//

#ifndef VILLIANGAME_CHARACTER_H
#define VILLIANGAME_CHARACTER_H

#include <iostream>
#include <string>

class Character {

public:

    std::string getCharacterName();

    void setCharacterName(std::string name);


private:

    std::string characterName;



};


#endif //VILLIANGAME_CHARACTER_H
