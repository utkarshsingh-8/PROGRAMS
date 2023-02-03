#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int decimal, answer = 0, i = 0;
    cout << "Enter the value of decimal: " << endl;
    cin >> decimal;

    while (decimal != 0)
    {
        int bit = decimal & 1;
        answer = (bit * pow(10, i)) + answer;
        decimal = decimal >> 1;
        i++;
    }
    cout << "Answer is: " << answer << endl;

    return 0;
}