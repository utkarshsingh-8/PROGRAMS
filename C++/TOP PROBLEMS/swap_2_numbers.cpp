// Write a Program to Swap Two Numbers

// SWAP USING THIRD VARIABLE
#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4, c;

    cout << "The value of A and B before swap:" << a << " " << b << endl;

    /* c = b;
     b = a;
     a = c;

     cout << "The value of A and B after swap:" << a << " " << b << endl;*/

    // SWAP WITHOUT USING THIRD VARIABLE

    b = b - a;
    a = a + b;
    b = a - b;

    cout << "The value of A and B after swap:" << a << " " << b << endl;
}