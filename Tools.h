//
// Created by blackdartq on 9/25/16.
//

#ifndef VILLIANGAME_TOOLS_H
#define VILLIANGAME_TOOLS_H

#include <iostream>
#include <fstream>
#include <strstream>
class Tools {

public:
    void wait(long seconds);
    void clearScreenFor(int spaces);
    void clearScreen();
    std::string readFile(const char * fileName);


private:



};


#endif //VILLIANGAME_TOOLS_H
