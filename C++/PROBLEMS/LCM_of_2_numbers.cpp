// Write a Program to Find LCM of two numbers entered by user

#include <iostream>
using namespace std;

int main()
{
    int x, y, lcm, gcd;
    cout << "Enter the value of x and y:" << endl;
    cin >> x >> y;

    //1st method
   /* for (int i = 1;i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }*/

    //2nd method
   /* for (int i; i >= x && i >= y; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            lcm = i;
        }
    }*/

    //lcm = x = (x * y) / gcd;
    cout << "LCM of two numbers is: " << lcm;
    
}