// Program to Check Whether a Number is Prime or Not
#include <iostream>
using namespace std;

int main()
{
    int number, count = 0, result, i = 2;
    cout << "Enter a positive number: ";
    cin >> number;

    /*for (int i = 2; i < number; i++)                                //😵 1st Method
    {
        number % i == 0 ? count = count + i : count == 0;
    }
    count > 1 ? cout << "Not Prime Number" : cout << "Prime Number";*/

    /*while (i < number)                                             //😵 2nd Method
    {
        number % i == 0 ? count = count + i : count == 0;
        i++;
    }
    count > 1 ? cout << "Not Prime Number" : cout << "Prime Number";*/
}