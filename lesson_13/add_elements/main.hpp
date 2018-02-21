// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

  vector<int>::iterator it;
  void printVector(vector<int> vIn);
  void assignFunction(vector<int> vInts, int in);
  void pushBackFunction(vector<int> vInts, int in);
  void emplaceFunction(vector<int> vInts, int loc, int in);
  
 void printVector(vector<int> vIn)
 {//printing the contents of vIns
    for(it = vIn.begin(); it != vIn.end(); it++)
        cout << *it;
 }
 
  void assignFunction(vector<int> vInts, int in)
  {
      cout<<"\nassigning "<<in<<" and printing the vector\n";
      vInts.assign(4, in);
      printVector(vInts);
  }
  void pushBackFunction(vector<int> vInts, int in)
  {
      cout<<"\npush back "<<in<<" and printing the vector\n";
      vInts.push_back(in);
      printVector(vInts);
  }
  void emplaceFunction(vector<int> vInts,  int loc, int in)
  {
      cout<<"\nemplacing "<<in<<" and printing the vector\n";
      vector<int>::iterator it;
      it = vInts.begin() + loc - 1;
      vInts.emplace(it, in);
      printVector(vInts);
  }
