#include <iostream>
using namespace std;

int main()
{
    int n, number = 1;
    cout << "Enter the value of N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number = number + 1;
        }
        cout << endl;
    }
}