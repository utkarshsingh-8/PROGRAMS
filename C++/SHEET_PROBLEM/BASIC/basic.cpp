#include <iostream>
using namespace std;

int main()
{
    // Write a Program to print "Hello, World!"                       //😬😬😬
    // cout << "Hello, World!";

    // 2) Write a Program to Print Integer Number Entered by User     //😬😬😬
    /*int num;
    cout << "Enter the Num" << endl;
    cin >> num;
    cout << "You entered " << num;*/

    // Write a Program to Add Two Integer Numbers Entered byUser      //😬😬😬
    /*int num1, num2;
    cout << "Enter the Value of Num1 and Num2" << endl;
    cin >> num1 >> num2;
    cout << "Sum of Num1 & Num2 is: " << num1 + num2 << endl;*/

    // Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor anddividend should be integers.)           //😬😬😬
    /*int dividend, divisor, quotient, remainder;
    cout << "Enter the value of divisor & dividend" << endl;
    cin >> dividend >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "Quotient is :" << quotient << " Remainder is :" << remainder << endl;*/

    // Write a Program to Find Size of int, float, double and char    //😬😬😬
    /*cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of char: " << sizeof(char) << endl;*/

    // Write a Program to Swap Two Numbers                            //😬😬😬
    /*int a = 3, b = 4, c;
    cout << "Before Swap is " << a << "and " << b << endl;
    c = b;
    b = a;
    a = c;
    cout << "After Swap is " << a << "and " << b << endl;*/

    // Write a Program to Find ASCII Value of a Character             //😬😬😬
    /*char ch;
    cout << "Enter any character value: " << endl;
    cin >> ch;
    cout << "ASCII value of the character is " << (int)ch << endl;*/

    // Write a Program to Multiply two decimal Numbers entered by User //😬😬😬
    /*float num1, num2;
    cout << "Enter the value of Num1 & Num2" << endl;
    cin >> num1 >> num2;
    cout << "Multiplication of Num1 & Num2 is " << num1 * num2 << endl;*/

    // PRINT Count from 1 to N
    /*int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        cout << i << " ";
    }*/

    // ADD N Numbers from user
    /*int count, sum = 0, num;
    cout << "Enter the value of count" << endl;
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        cin >> num;
        sum += num;
    }
    cout << "sum is " << sum;*/

    // Print 1 to N only ODD numbers
    /*int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    for (int i = 1; i < num; i = i + 2)
    {
        cout << i << " ";
    }*/

    /*int number;
    cout << "Enter the value of num" << endl;
    cin >> number;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "Not Prime Number\n";
        }
    }*/

    // cout << "hello" << endl;// use double quote to display multople character
    // cout << 'h' << endl; // use single quote to display one character
    // cout << '4' << endl;

    char ch = 102;
    cout << ch;
}
