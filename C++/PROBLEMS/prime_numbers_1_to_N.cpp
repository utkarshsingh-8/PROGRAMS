// PRIME NUMBERS BETWEEN 1 TO N
#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, count;
    cout << "Enter the value of num : ";
    cin >> num;
    cout << "The Prime Numbers Between 1 to " << num << " is" << endl;

    while (i <= num)
    {
        int j = 1;
        count = 0;
        while (j <= i)
        {
            if (i % j == 0)
            {
                count++;
            }
            j++;
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
        i++;
    }
}