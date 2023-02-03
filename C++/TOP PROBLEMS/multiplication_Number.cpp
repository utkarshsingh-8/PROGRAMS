// Write a Program to Generate  Multiplication Table of anumber (entered by the user)
// using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int number, count;
    cout << "Enter the Number and its count:"<<endl;
    cin >> number >> count;

    for (int i = 1; i <= count; i++)
    {
        cout << number*i <<" ";
    }
}