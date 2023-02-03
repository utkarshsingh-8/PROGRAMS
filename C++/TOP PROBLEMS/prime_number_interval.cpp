// Program to Display Prime Numbers Between Two Intervals
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1, n2, n3, i, j, count;
    cout << "Enter the value of n1 & n2\n";
    cin >> n1 >> n2;
    cout << "Prime Number between n1 and n2 is\n";

    /*while (n1 <= n2)                                        //👻 1st Method
    {
        int n3 = 1;
        count = 0;
        while (n3 <= n1)
        {
            if (n1 % n3 == 0)
            {
                count++;
            }
            n3++;
        }
        if (count == 2)
        {
            printf("%d\n", n1);
        }
        n1++;
    }*/

    /*for (i = n1; i <= n2; i++)                              //👻 2nd Method
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }*/

    
}

/*bool isPrime(int num)                                       //👻 3rd Method
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x, y;
    cout << "Enter Two Numbers\n";
    cin >> x >> y;

    for (int  i = x; i <= y; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<endl;
        }
    }
}*/
