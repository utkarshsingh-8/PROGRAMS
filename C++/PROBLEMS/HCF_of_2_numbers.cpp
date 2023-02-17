// Write a Program to Find GCD or HCF of two numbers entered by user

#include <iostream>
using namespace std;

int main()
{
    int x, y, gcd;
    cout << "Enter the value of x and y:" << endl;
    cin >> x >> y;

    for (int i = 1; i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }
    cout << "GCD of two numbers is: " << gcd;
}