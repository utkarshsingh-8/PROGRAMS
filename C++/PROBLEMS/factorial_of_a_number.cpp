// Write a Program to Find Factorial of a given number N(N is entered by user)

#include <iostream>
using namespace std;
int factorial(int number);

int main()
{
    int fact = 1, n, value;
    cout << "Enter any Number: ";
    cin >> n;

    value = factorial(n);
    cout << "The value of Factorial: " << value;
    

    // 1st METHOD                              👈👈😣😣
    /*if (n < 0)
    {
        cout << "Error! Factorial of number not exist:";
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            fact = fact * i;
        }
    }
    cout << "The value of Factorial is:" << fact;*/
}

// 2nd Method-A                                👈👈😣😣
/*int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}*/

// 2nd Method-B                                👈👈😣😣
/*int factorial(int number)
{
    return (number == 0 || number == 1) ? 1 : (number * factorial(number - 1));
}*/