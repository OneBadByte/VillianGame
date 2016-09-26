//
// Created by blackdartq on 9/25/16.
//

#include "Tools.h"


void Tools::wait(long seconds){

    long throttle = 1000000000;

    for(int i = 0; i <= seconds; i++) {

        for (int k = 0; k <= throttle; k++) {


        }

    }

}


void Tools::clearScreenFor(int spaces){

    for(int i = 0; i <= spaces; i++){

        std::cout << " " << std::endl;


    }


}

void Tools::clearScreen(){


    //std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
    //        << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl;

    clearScreenFor(60);




}


std::string Tools::readFile(const char * fileName){


    std::fstream file;
    std::strstream strstream;
    std::string fileContents;
    file.open(fileName, std::fstream::in | std::fstream::out);
    if(file.is_open()){

        strstream << file.rdbuf();
        fileContents = strstream.str();
        return fileContents;


    }else{

        std::cout << "File name: \"" << fileName << "\" could not be opened!" << std:: endl;


    }

    file.close();
}
