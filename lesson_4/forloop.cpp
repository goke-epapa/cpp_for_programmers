
#include <iostream>

int main() {
    using namespace std;
    
    int input = 0, sum = 0;
    int limit = 5;
    float average = 0;
    
    for(int i = 0; i < limit; i++) {
        cin >> input;
        sum += input;
    }
    
    cout << "Sum: " << sum << "\n";
    cout << "Average: " << (sum / 5.0);
}
