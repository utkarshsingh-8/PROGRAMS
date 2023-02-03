#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, decimal, i = 0, answer = 0;
    cout << "Enter the number : ";
    cin >> num;

    while (num != 0)
    {
        decimal = num % 10;

        if (decimal == 1)
        {
            answer = answer + pow(2, i);
        }

        num /= 10;
        i++;
    }
    cout << "The decimal equivalent of " << answer << " is ";
}