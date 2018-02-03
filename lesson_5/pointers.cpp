/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;

    std::cin >> givenInt;
    int * intPointer = &givenInt;
    std::cin >> givenFloat;
    std::cin.ignore();
    float * floatPointer = &givenFloat;
    std::cin >> givenDouble;
    double * doublePointer = &givenDouble;
    std::cin.ignore();
    std::cin >> givenChar;
    char * charPointer = &givenChar;
    std::cin.ignore();
    std::getline(std::cin, givenString);
    std::string * stringPointer = &givenString;

    std::cout << *intPointer << "\n";
    std::cout << intPointer << "\n";

    std::cout << *floatPointer << "\n";
    std::cout << floatPointer << "\n";

    std::cout << *doublePointer << "\n";
    std::cout << doublePointer << "\n";

    std::cout << *stringPointer << "\n";
    std::cout << stringPointer << "\n";

    std::cout <<  (char) *charPointer << "\n";
    std::cout << (void *) charPointer << "\n";

    return 0;
}
