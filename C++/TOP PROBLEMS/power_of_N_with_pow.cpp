/*Write a Program to Calculate Power of a Number
using inbuilt pow() function by taking two inputs from
users as Base and exponent respectively*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int base, exponent, result;
    cout << "Enter the value of Base and Exponent\n";
    cin >> base >> exponent;

    result = pow(base, exponent);
    cout << "The Power is : " << result;
}
