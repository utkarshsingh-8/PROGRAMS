/* Write a Program to display sum of all digits of a given
Number N by user*/
#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0, remainder;
    cout << "Enter a given number :";
    cin >> number;

    while (number != 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    cout << "The sum of the digits of a given number :" << sum;
}
