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
    int num1 = 3;
    int num2 = 6;
    int num3 = 9;

    // Assigning the variables... but, you can't assign a variable before declearing it !
    num1 = 9;
    num2 = 6;
    num3 = 3;

    // Constant variable [ const ]
    const int sum = num1 + num2 + num3;
    const int product = num1 * num2 * num3;


    std::cout << ">_    Here's Some Info...\n";
    std::cout << "+ The Numbers Of Code: 3\n";
    std::cout << "+ The Codes Join Upto: " << sum << std::endl;
    std::cout << "+ The Codes Product Upto: " << product << std::endl;

    std::cout << "\n\tNow, Enter The Code:\t";


    return 0;
}
