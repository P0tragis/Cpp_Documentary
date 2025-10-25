#include <iostream>

int main()
{
    /*
    type conversion = converting one data type to another

    implicit = automatic type conversion done by the compiler
    explicit = manual type conversion done by the programmer
    */
    //IMPLICIT  
    //int x = 3.14;
    //double x = 3.14;

    //EXPLICIT
    //double x = (int) 3.14;


    //char x = 100; // will be converted to ASCII
    //std::cout << (char) 100;


    int correct = 8;
    int question = 10;
    double score = (double) correct/question * 100;

    std::cout << score << '%';


    return 0;
}
