/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>

using namespace std;
int main() {
    int number;
    int min = 101;
    int max = -1;
    int sum = 0;
    float average;
    
    for(int i = 0; i < 15; i++) {
        cin >> number;
        if(number > max) {
            max = number;
        }
        
        if(number < min) {
            min = number;
        }
        sum += number;
    }
    
    cout << "Min: " << min << "\n";
    cout << "Max: " << max << "\n";
    cout << "Average: " << (sum / 15);
    return 0;
}
