/*Goal: practice writing functions with parameters and return values.*/

#include "main.hpp"

int main() {
    int m1 = 5;
    int m2 = 7;
    
    int result = sum(m1, m2);
    printEquation(m1, m2, result, '+');
    
    return 0;
}
