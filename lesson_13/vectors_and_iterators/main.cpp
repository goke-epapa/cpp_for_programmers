// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it

//TODO: Add the necessary libraries
#include "main.hpp"
#include <iostream>
#include <vector>

int main ()
{
  std::vector<float> vFloat;
  
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";
  
  std::cout<<"\n\nAdding 10 elements to the vector\n";
  
  vFloat.assign(10, 8.8);
   
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n"; 


  //TODO: Complete the Print function in main.hpp 
  // Call the function here to print out each element of vFloat
  printVector(vFloat);

  return 0;
}


