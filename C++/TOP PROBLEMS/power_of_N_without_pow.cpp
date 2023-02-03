/* Write a Program to Calculate Power of a Number
without using inbuilt pow() function by taking two
inputs from users as Base and exponent respectively*/

#include <iostream>
using namespace std;

int main()
{
    int base, exponent, result = 1;
    cout << "Enter the value of Base and Exponent\n";
    cin >> base >> exponent;

    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }
    cout << "The Power of " << base << " is: " << result;
}
