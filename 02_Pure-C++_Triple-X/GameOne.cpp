// Preprocessor directive...
#include <iostream>


int main(int argc, char const *argv[])
{
    /*
    Developer: Master Skywalker
    Purpose: Game Development Project with C++
    Stardate: 12021.253.00:49:00
    */

    std::cout << "\n\t\"ASAI's Research Lab Is Under Attack, Break The Codes To Get Into The Datacentre Facility, Cut The Hard Line & Save The Research Data From Going Into Wrong Hands...\"\n";
    std::cout << std::endl;

    // Declaring & Initialising the variables...
    int CodeA = 3;
    int CodeB = 6;
    int CodeC = 9;

    // Assigning the variables... but, you can't assign a variable before declearing it !
    CodeA = 9;
    CodeB = 6;
    CodeC = 3;

    // Constant variable [ const ]
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;


    std::cout << ">_    Here's Some Information About The Codes...\n\n";
    std::cout << "+ The Total Numbers Of Code: 3\n";
    std::cout << "+ The Codes Join Upto: " << CodeSum << std::endl;
    std::cout << "+ The Codes Product Upto: " << CodeProduct << std::endl;

    std::cout << "\n\tNow, Enter The Code:\t";


    int PlayerGuess;




    return 0;
}
