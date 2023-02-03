// Write a Program to Check Whether Number is Even orOdd

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the value of x\n";
    cin >> x;

    /* if (x % 2 == 0)
     {
         cout << "Even Number";
     }
     else
     {
         cout << "Odd Number";
     }*/

    (x % 2 == 0) ? cout << "Even Number" : cout << "Odd Number";
}