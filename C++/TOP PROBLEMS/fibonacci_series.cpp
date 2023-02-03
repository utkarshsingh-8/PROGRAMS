
#include <iostream>
using namespace std;

int main()
{
// Write a Program to Display Fibonacci Series upto nth term (n is entered by user
    int n, n1 = 0, n2 = 1, n3, i=1;
    cout << "Enter the term upto to display a fibonacci series: ";
    cin >> n;

    for ( i = 0; i <= n; i++)
    {
        cout << n1 <<" ";
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    // Series Upto certain number
    /*int n, n1 = 0, n2 = 1, n3 = 0, i = 1;
    cout << "Enter the number upto to display a fibonacci series: ";
    cin >> n;
    while (n3 <= n)
    {
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }*/
}