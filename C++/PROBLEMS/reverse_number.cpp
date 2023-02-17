// Write a Program to Reverse a given Number N by user

#include <iostream>
using namespace std;

int main()
{
    int number, rev = 0, remainder;
    cout << "Enter a given number :";
    cin >> number;

    while (number != 0)
    {
        remainder = number % 10;
        rev = rev * 10 + remainder;
        number = number / 10;
    }
    cout << "The reverse of a given number :" << rev;
}