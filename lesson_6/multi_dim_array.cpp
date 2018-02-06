/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

using namespace std;
int main()
{
    int matrix[4][4];
    int vector[4];
    int dotProduct[4];
    int sum;
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    
    // Read Matrix
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Read Vector
    for(int i = 0; i < 4; i++) {
        cin >> vector[i];
    }
    
    // Dot Product
    for(int i = 0; i < 4; i++) {
        sum = 0;
        for(int j = 0; j < 4; j++) {
            sum += matrix[i][j] * vector[i];
        }
        dotProduct[i] = sum;
    }
    
    for(int i = 0; i < 4; i++) {
        cout << dotProduct[i] << " ";
    }
    
    return 0;
}
