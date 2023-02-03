#include <iostream>
using namespace std;

// CHECK WHETHER NUMBER IS ODD OR EVEN                               👻👻💀💀
/*bool isEven_Odd(int num)
{
    if (num & 1)
        return 0;
    else
        return 1;
}

int main()
{
    int a;
    cout << "Enter the Number :";
    cin >> a;
    if (isEven_Odd(a))
    {
        cout << "Number is Even";
    }
    else
    {
        cout << "Number is Odd";
    }

    return 0;
}*/

// COMBINATION AND PERMUTATION                                       👻👻💀💀
/*int fact(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = (factorial * i);
    }
    return factorial;
}

int nCr(int n, int r)
{

    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r" << endl;
    cin >> n >> r;

    cout << "nCr is :" << nCr(n, r);

    return 0;
}*/

// ARITHMETIC PROGRESSION                                            👻👻💀💀
/*int arith_Prog(int n)


{
    int ap = (3 * n + 7);
    return ap;
}

int main()
{
    int term;
    cout << "Enter the value of nth term" << endl;
    cin >> term;

    cout << "Arithmetic Progression is :" << arith_Prog(term);
    return 0;
}*/

// FIBONACCI SERIES                                                   👻👻💀💀
/*int fib(int n)
{
    int n1 = 0, n2 = 1, n3;
    cout << n1 << " " << n2 << " ";
    for (int i = 1; i < n; i++)
    {
        n3 = n2 + n1;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    return n3;
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << n << "th Fibonacci Number in the series is :" << fib(n-1);

    return 0;
}*/