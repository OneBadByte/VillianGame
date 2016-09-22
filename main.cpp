#include <iostream>
#include <fstream>
#include <strstream>



class Tools{


public:



    void wait(long seconds){

        long throttle = 1000000000;

        for(int i = 0; i <= seconds; i++) {

            for (int k = 0; k <= throttle; k++) {


            }

        }

    }



    void clearScreenFor(int spaces){

        for(int i = 0; i <= spaces; i++){

            std::cout << " " << std::endl;


        }


    }

    void clearScreen(){


        //std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
        //        << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl;

        clearScreenFor(60);




    }




    std::string readFile(const char * fileName){


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

    void spaceGenerator(int spacesNeeded){

        for(int i = 0; i <= spacesNeeded; i++){

            std::cout << " ";


        }


    }

    void spaceGeneratorWithLines(int spacesNeeded){

        for(int i = 0; i <= spacesNeeded; i++){

            std::cout << "-";


        }


    }





    void intro(){

        std::cout << " " << std::endl;
        std::cout << readFile("TextFiles/intro.txt") << std::endl;


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
                tools.clearScreen();
                tools.outro();
                break;


        }



        gameRunning = false;
    }

    return 0;
}