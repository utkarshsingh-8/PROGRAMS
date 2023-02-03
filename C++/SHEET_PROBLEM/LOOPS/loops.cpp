#include <iostream>
using namespace std;

int main()
{
    // Write a Program to Calculate Sum of first N NaturalNumbers (here value of N is Entered by user)
    /*int num, sum = 0;
    cout << "Enter the value of Num" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "The Sum of first N NaturalNumbers is : " <<sum<< endl;*/

    // Write a Program to Find Factorial of a given number N(N is entered by user)
    /*int fact = 1, num;
    cout << "Enter the Number you want the factorial" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial is : " << fact << endl;*/

    // Write a Program to Generate Multiplication Table of anumber (entered by the user) using a for loop.
    /*int num, term = 1;
    cout << "Enter the Number You want to generate multiplication table" << endl;
    cin >> num;
    cout << "Enter the term upto you get multiplication table" << endl;
    cin >> term;
    for (int i = 1; i <= term; i++)
    {

        cout << "Table is : " << num * i << endl;
    }*/

    // Write a Program to Display Fibonacci Series upto nth term (n is entered by user)
    /*int num1 = 0, num2 = 1, num3, n;
    cout << "Enter the value of n upto you want to get fibbonacci series" << endl;
    cin >> n;
    cout << num1 << " " << num2 << "";

    for (int i = 3; i <= n; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        cout << " " << num3;
    }*/

    // Write a Program to Display Fibonacci Series upto certain number n (n is entered by user)
    /*int num1 = 0, num2 = 1, num3 = 0, fibb, term;
    cout << "Enter the term upto you want to get fibbonacci series" << endl;
    cin >> term;
    cout << num1 << " " << num2 << "";

    for (int i = 3; i <= term; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        cout << " " << num3;
    }*/

    // Write a Program to Find GCD or HCF of two numbers entered by user
    /*int x, y, hcf;
    cout << "Enter the value of x and y" << endl;
    cin >> x >> y;
    for (int i = 1; i <= y; i++)
    {
        if (y % i == 0 && x % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF is :" << hcf;*/

    // Write a Program to Find LCM of two numbers entered by user
    /*int x, y, hcf, lcm;
    cout << "Enter the value of x and y" << endl;
    cin >> x >> y;
    for (int i = 1; i <= y; i++)
    {
        if (y % i == 0 && x % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (x * y) / hcf;
    cout << "LCM is :" << lcm;*/

    /*int x, y, lcm, num;
    cout << "Enter the value of x and y" << endl;
    cin >> x >> y;
    //cout << "Enter the value of num" << endl;

    for (int i = 1; i <= num; i++)
    {
        if (num % x == 0 && num % y == 0)
        {
            lcm = num;
        }
    }
    cout << "LCM is :" << lcm;*/

    //Write a Program to Reverse a given Number N by user
    int num,rem,ans=0;
    cout<<"Enter the Number :"<<endl;
    cin>>num;

    while (num>0)
    {
        
    }
    
    

    return 0;
}
