#include "File.hpp"
#include "Folder.hpp"

int main(){
        
        int soup[256];
        //int *delta = soup;
       
        //testing constructor
        File firstFile("FavBands", "Interpol, Strokes, Arctic Monkeys", delta);
        File movieFile("Movies", "Goodfellas, Up, Mad Max: Fury Road, Kung Fu Panda 2", delta);
        File gameFile("Games", "Overwatch, Valorant, Elden Ring, Skate 3", delta);


        
        //TESTING CONSTRUCTORS AND ASSIGNMENT OPERATORS
        //testing copy constructor
        File secondFile(firstFile);

        //testing copy assignment operator
        //File secondFile; secondFile = std::copy(firstFile);

        //testing move constructor
        //File secondFile(std::move(firstFile));
        
        //testing move assignment operator 
        //File secondFile; secondFile = std::move(firstFile); 


        std::cout << "This is first file!\n" << firstFile << std::endl;
        std::cout << "--------------------------" << std::endl;
        std::cout << "This is second file!\n" << secondFile << std::endl;
        //std::cout << "This is movie file !\n" << movieFile << std::endl;
        //TESTING FOLDER

        /*
        Folder newFolder("Media");

        //std::cout << newFolder.getName() << std::endl;
        if(newFolder.addFile(firstFile))
                std::cout << "Added firstFile" << std::endl;
        //if(newFolder.addFile(movieFile))
                //std::cout << "Added movieFile" << std::endl;
        newFolder.addFile(gameFile);
        newFolder.display();*/
        
        return 0;
}