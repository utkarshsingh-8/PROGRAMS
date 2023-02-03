//Write a Program to Find Largest Number Among ThreeNumbers entered by users

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the value of  A, B and C\n";
    cin >> a >> b >> c;

    /*if (a > b)
    {
        if (a > c)
        {
            cout << "A is Greater";
        }
        else
        {
            cout << "C is greater";
        }
    }
    else if (b>a)
    {
        if (b>c)
        {
            cout<<"B is greater";
        }
        else
        {
            cout<<"C is greater";
        }

    }*/

    if (a > b && a > c)
    {
        cout << "A is greater";
    }
    else if (b > c && b > a)
    {
        cout << "B is greater";
    }
    else
    {
        cout << "C is greater";
    }

    return 0;
}