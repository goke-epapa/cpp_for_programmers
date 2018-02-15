#include <iostream>
 
using namespace std;

//TODO: Add all necessary functions and 
//Overload the '+' sign 
//To achieve the required total

class Shape 
{
    private:
      int length;     // Length of a box
      int width;
      
    public:
      // Constructor definition
      Shape(int l = 2, int w = 2) 
      {
         length = l;
         width = w;
      }
	  
      double Area() 
      {
         return length * width;
      }
      
      int getLength() {
          return length;
      }
      
      int getWidth() {
          return width;
      }
      
      int operator + (Shape s2) {
          int newLenght = length + s2.getLength();
          int newWidth = width + s2.getWidth();
          return newLenght * newWidth;
      }
		
};

