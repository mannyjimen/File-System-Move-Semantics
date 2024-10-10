#include "File.hpp"
#include "Folder.hpp"

int main(){
     /*   //size_t icon_dimsum = 256;
        //int* delta = new int[icon_dimsum];
        int delta[256] = {0};
       
        //testing constructor
        File bandFile("FavBands", "Interpol, Strokes, Arctic Monkeys", delta);
        File movieFile("Movies.pdf", "Goodfellas, Up, Mad Max: Fury Road, Kung Fu Panda 2", delta);
        File gameFile("Games", "Overwatch, Valorant, Elden Ring, Skate 3", delta);
        File historyEssay("wgsEssay", "Humans evolved from apes!", delta);
        File jobResume("Resume.pdf", "I know how to do everything! Hire me!", delta);*/
/*   
        //TESTING CONSTRUCTORS AND ASSIGNMENT OPERATORS
        //testing copy constructor
        //File secondFile(bandFile);

        //testing copy assignment operator
        //File secondFile; secondFile = bandFile;

        //testing move constructor
        //File secondFile(std::move(bandFile));
        
        //testing move assignment operator 
        //File secondFile; secondFile = std::move(bandFile); 


        std::cout << "This is bandFile!\n" << bandFile << std::endl;
        std::cout << "--------------------------" << std::endl;
        std::cout << "This is second file!\n" << secondFile << std::endl;
        //std::cout << "This is movie file !\n" << movieFile << std::endl;
        //TESTING FOLDER
*/
   /*
        Folder Media("Media");
        Folder Docs("Documents");

        //std::cout << Media.getName() << std::endl;
        //std::cout << Docs.getName() << std::endl;
        if (Media.addFile(bandFile))
                std::cout << "Added band file to Media" << std::endl;
        if (Media.addFile(movieFile))   
                std::cout << "Added movie file to Media" << std::endl;*/


/*
        if (Docs.addFile(historyEssay))
                std::cout << "Added historyEssay to Docs" << std::endl;
        if (Docs.addFile(jobResume))
                std::cout << "Added jobResume to Docs" << std::endl;

        Media.display();
        Docs.display();
        std::cout << "-----------------------" << std::endl;
        
        //if (Media.removeFile("FavBands.txt"))
            //    std::cout << "Removed FavBands.txt file from Media" << std::endl;
        if (Docs.removeFile("wgsEssay.txt"))
                std::cout << "Removed wgsEssay.txt file from Docs" << std::endl;
        if (Media.moveFileTo("FavBands.txt", Docs))
                std::cout << "Moved FavBands.txt from Media to Docs"<< std::endl;
        else
                std::cout << "Failed to move file for some unknown reason!" << std::endl;

        if (Docs.copyFileTo("FavBands.txt", Media))
                std::cout << "Copied FavBands.txt from Docs to Media!" << std::endl;

*/

        return 0;
}