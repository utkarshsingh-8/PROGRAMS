/* Write a Program to display sum of all digits of a given
Number N by user*/
#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Enter a given number :";
    cin >> number;

    while (number != 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }

    cout << "The sum of the digits of a given number :" << sum;
}
