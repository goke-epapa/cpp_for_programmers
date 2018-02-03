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
    float * floatPointer = &givenFloat;
    std::cin >> givenDouble;
    double * doublePointer = &givenDouble;
    std::cin >> givenChar;
    char * charPointer = &givenChar;
    std::cin >> givenString;
    std::string * stringPointer = &givenString;
    
    std::cout << *intPointer << "\n";
    std::cout << intPointer << "\n";
    
    std::cout << *floatPointer << "\n";
    std::cout << floatPointer << "\n";
    
    std::cout << *doublePointer << "\n";
    std::cout << doublePointer << "\n";
    
    std::cout << *stringPointer << "\n";
    std::cout << stringPointer << "\n";
    
    std::cout << *charPointer << "\n";
    std::cout << charPointer << "\n";
    
    return 0;
}

