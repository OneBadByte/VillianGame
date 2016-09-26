#include <iostream>
#include <fstream>
#include <strstream>
#include "Tools.h"
#include "Character.h"
#include "Levels.h"




    void intro(){

        std::cout << " " << std::endl;
        std::cout << readFile("TextFiles/intro.txt") << std::endl;


    }

    void menu(){

        char input;
        clearScreen();
        std::cout << readFile("TextFiles/menu.txt") << std::endl;
        std::cin >> input;
        if(input == 'n' || input == 'N'){

            std::cout << "Player selected continue" << std::endl;


        }else if(input == 'c'||input == 'C'){


            std::cout << "Player selected new" << std::endl;


        }else if(input == 'm' || input == 'M'){


            std::cout << "Player selected maker" << std::endl;

        }else{

            menu();



        }


    }




    void outro(){

        std::cout << "Made by brody" << std::endl;



    }

private:
    std::string charactersName;





};





int main() {

    Tools tools;
    bool gameRunning = true;

    while(gameRunning){

        char levelChosen = 0;
        std::cout << "Level to jump to: ";
        std::cin >> levelChosen;
        switch(levelChosen){

            case '0':
                tools.clearScreen();
                tools.intro();
                tools.wait(2);
                tools.menu();

                tools.clearScreen();
                tools.outro();
                break;


        }



        gameRunning = false;
    }

    return 0;
}