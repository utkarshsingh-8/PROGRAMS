// Program to Check Whether a Number is Prime or Not
#include <iostream>
using namespace std;

int main()
{
    int number, count = 0, result, i = 2;
    cout << "Enter a positive number: ";
    cin >> number;

    //1st Method                                   👀👀👀
    /*for (int i = 2; i < number; i++)                   
    {
        number % i == 0 ? count = count + i : count == 0;
    }
    count > 1 ? cout << "Not Prime Number" : cout << "Prime Number";*/


    //2nd Method                                   👀👀👀
    /*while (i < number)                                  
    {
        number % i == 0 ? count = count + i : count == 0;
        i++;
    }
    count > 1 ? cout << "Not Prime Number" : cout << "Prime Number";*/
}