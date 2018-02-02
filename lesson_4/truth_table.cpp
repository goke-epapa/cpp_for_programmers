/*Goal: use logical and relational operators in a C++ program. 
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>


int main()
{
    using namespace std;
    int A = 0;
    int B = 0;
    int C = 0;

    int Q; 
    
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    std::cout<<"A\tB\tC\t\t(A && B && C)\t(!B||!C)\t(A&&(!B||!C))\tQ\n";
    Q = (A && B && C) || (A &&(!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B || !C)<<"\t\t"<<(A &&(!B || !C))<<"\t\t"<<Q<<"\n";
    
    //Use this output format
    C = 1;
    Q = (A && B && C) || (A &&(!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B || !C)<<"\t\t"<<(A &&(!B || !C))<<"\t\t"<<Q<<"\n";
   
    B = 1;
    C = 0;
    Q = (A && B && C) || (A &&(!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B || !C)<<"\t\t"<<(A &&(!B || !C))<<"\t\t"<<Q<<"\n";
   
    C = 1;
    Q = (A && B && C) || (A &&(!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B || !C)<<"\t\t"<<(A &&(!B || !C))<<"\t\t"<<Q<<"\n";
   
    A = 1;
    B = 0;
    C = 0;
    Q = (A && B && C) || (A &&(!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B || !C)<<"\t\t"<<(A &&(!B || !C))<<"\t\t"<<Q<<"\n";
   
    C = 1;
    B = 0;
    A = 1;
    Q = (A && B && C) || (A &&(!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B || !C)<<"\t\t"<<(A &&(!B || !C))<<"\t\t"<<Q<<"\n";
   
    A = 1;
    B = 1;
    C = 0;
    Q = (A && B && C) || (A &&(!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B || !C)<<"\t\t"<<(A &&(!B || !C))<<"\t\t"<<Q<<"\n";
   
    A = 1;
    B = 1;
    C = 1;
    Q = (A && B && C) || (A &&(!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B || !C)<<"\t\t"<<(A &&(!B || !C))<<"\t\t"<<Q<<"\n";
   
    return 0;
}
