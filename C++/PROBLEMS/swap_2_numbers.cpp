// Write a Program to Swap Two Numbers

// SWAP USING THIRD VARIABLE
#include <iostream>
using namespace std;
int main()
{

    int a = 3, b = 4, temp;
    cout << "The value of A and B before swap:" << a << " " << b << endl;

    // SWAP USING THIRD VARIABLE
    /*temp=b;
     b = a;
     a = temp;*/

    // SWAP WITHOUT USING THIRD VARIABLE
    /* b = b - a;
     a = a + b;
     b = a - b;*/

    cout << "The value of A and B after swap:" << a << " " << b << endl;
}