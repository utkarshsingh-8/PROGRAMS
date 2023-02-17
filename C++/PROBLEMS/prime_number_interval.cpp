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

    //1st Method
    /*while (n1 <= n2)                                        
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

    //2nd Method
    /*for (i = n1; i <= n2; i++)                              
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

