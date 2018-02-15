#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
    // Three params
    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);
    // Array params
    int findSmaller(int * array, int size);
    float findSmaller(float * array, int size);
    char findSmaller(char * array, int size);
};
char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3) {
    if(input2 < input3) {
        return findSmaller(input1, input2);
    }
    return findSmaller(input1, input3);
}

float Compare::findSmaller(float input1, float input2, float input3) {
    if(input2 < input3) {
        return findSmaller(input1, input2);
    }
    return findSmaller(input1, input3);
}

char Compare::findSmaller(char input1, char input2, char input3) {
    if(input2 < input3) {
        return findSmaller(input1, input2);
    }
    return findSmaller(input1, input3);
}


int Compare::findSmaller(int * array, int size) {
    // This algorithm assumes the array is none empty
    int smallest = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}

float Compare::findSmaller(float * array, int size) {
    // This algorithm assumes the array is none empty
    float smallest = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}

char Compare::findSmaller(char * array, int size) {
    // This algorithm assumes the array is none empty
    char smallest = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}

