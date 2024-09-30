#include "File.hpp"

int main(){
        
        int soup[5];
        int *delta = soup;
        
        //testing constructor
        File firstFile("FavBands", "Interpol, Strokes, Arctic Monkeys", delta);
        
        /* TESTING CONSTRUCTORS AND ASSIGNMENT OPERATORS
        //testing copy constructor
        //File secondFile = firstFile;

        //testing copy assignment operator
        //File secondFile; secondFile = firstFile;

        //testing move constructor
        //File secondFile = std::move(firstFile);
        
        //testing move assignment operator 
        //
        //File secondFile; secondFile = std::move(firstFile); 

        */
        //std::cout << "This is second file!\n" << secondFile << std::endl;
        std::cout << "This is first file !\n" << firstFile << std::endl;
}