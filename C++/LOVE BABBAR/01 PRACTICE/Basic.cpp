#include <iostream>
#include <istream>
#include <string>
using namespace std;

struct
{
    string brand;
    string model;
    int year;
} myCar1, myCar2;

struct newType
{
    string firstName;
    string lastName;
    int age;
} myType1, myType2;

int main()
{
    // PRINT IN A NEW LINE                                           👻👻💀💀
    /*cout << "Namaste Duniya" << endl;
    cout << "Namaste Duniya\n";
    cout << "Namaste Duniya" << '\n';*/

    // DATA TYPE                                                     👻👻💀💀
    /*int a = 55;
    cout << a << endl;
    float b = 555.90;
    cout << b << endl;
    double c = 33.555555;
    cout << c << endl;
    char d = 'u';
    cout << d << endl;
    bool e = true;
    cout << e << endl;

    // SIZE OF()                                                     👻👻💀💀
    int f = sizeof(a);
    int g = sizeof(b);
    int h = sizeof(c);
    int i = sizeof(d);
    int j = sizeof(e);
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;
    cout << i << endl;
    cout << j << endl;*/

    // TYPE CONVERSION                                               👻👻💀💀
    /*int x = 'a';
    cout << x << endl;
    char ch = 66;
    cout << ch << endl;
    char d = 223333;
    cout << d << endl;
    float y = 55.25;
    cout << (int)y << endl;
    int z = 80;
    float k = z;
    cout << k << endl;*/

    // CONDITIONAL STATEMENTS                                        👻👻💀💀
    /*int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n > 0)
        cout << "Positive";
    else
        cout << "Negative";*/

    // CHECK WHETHER X IS GREATER THAN Y OR NOT                      👻👻💀💀
    /* int x, y;
     cout << "Enter the value of X and Y" << endl;
     cin >> x >> y;
     if (x > y)
         cout << "X is greater than Y";
     else
         cout << "Y is greater than X";*/

    // cin DOES NOT READ SPACE ,ENTER ,TAB                           👻👻💀💀
    // TO READ IT WE USE CIN.GET() IT RETURNS ASCII VALUE
    /*int a;
    a = cin.get();
    cout << "The value of a is :" << a << endl;*/

    // CHECK WHETHER A NUMBER A IS POSITIVE , NEGATIVE OR ZERO
    /* int num;
     cout << "Enter the value of num :";
     cin >> num;
     if (num > 0)
     {
         cout << "Num is Positive";
     }
     else
     {
         if (num < 0)
         {
             cout << "Num is Negative";
         }
         else
             cout << "Num is Zero";
     }*/

    // ENTERED CHARACTER IS UPPER CASE LOWER CASE, AND NUMERIC       👻👻💀💀
    /* char ch;
     cout << "Enter a character :";
     cin >> ch;
     if (ch >= 65 && ch <= 90)
     {
         cout << "UPPER CASE";
     }
     else if (ch >= 97 && ch <= 122)
     {
         cout << "LOWER CASE";
     }
     else if (ch >= 48 && ch <= 57)
     {
         cout << "NUMERIC CHARACTER";
     }
     else
     {
         cout << "CHARACTER IS INVALID";
     }*/

    // LOOP STATEMENTS                                               👻👻💀💀
    // PRINT 1 TO N and SUM UPTO N
    /*int N, i = 1, sum = 0;
    cout << "Enter the value of N :";
    cin >> N;
    while (i <= N)
    {
        cout << i << " ";
        sum = sum + i;
        i++;
    }
    cout<<endl;
    cout << "Sum is : " << sum;*/

    // SUM UPTO 1 TO N OF EVEN NUMBERS                               👻👻💀💀
    /*int N, i = 1, sum = 2;
    cout << "Enter the value of N :";
    cin >> N;
    while (i <= N)
    {
        cout << i << " ";
        sum = sum + 2;
        i++;
    }
    cout<<endl;
    cout << "Sum is : " << sum;*/

    // IN THREE NUMBER WHICH IS GREATER                              👻👻💀💀
    /*int x, y, z;
    cout << "Enter the value of X,Y AND Z" << endl;
    cin >> x >> y >> z;
    if (x > y)
    {
        if (x > z)
        {
            cout << "X is Greater";
        }
        else
        {
            cout << "Z is Greater";
        }
    }
    else
    {
        if (y > z)
        {
            cout << "Y is Greater";
        }
        else
        {
            cout << "Z is Greater";
        }
    }*/

    // CHECK WHETHER A NUMBER IS ODD OR EVEN                         👻👻💀💀
    /*int num;
    cout << "Enter the value of num :";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }*/

    // NUMBER BETWEEN 1 TO 100 DIVISIBLE BY 3 IS SKIP                👻👻💀💀
    /*for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << " ";
    }*/

    // CHECK WHETHER A NUMBER IS PRIME OR NOT                        👻👻💀💀
    /*int num, count = 0;
    cout << "Enter the value of num :";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count = count + 1;
        }
    }
    if (count > 0)
    {
        cout << "Not Prime Number";
    }
    else
    {
        cout << "Prime Number";
    }*/

    // PRINT ALL PRIME NUMBERS BETWEEN X AND Y                       👻👻💀💀
    /*int x, y;
    cout << "Enter the value of X and Y" << endl;
    cin >> x >> y;
    cout << "The prime number between  x and y is " << endl;

    for (int i = x; i <= y; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            count = count + 1;
        }
        if (count == 2)
        {
            cout << i << endl;
        }
    }*/

    // SWITCH-CASE STATEMENT                                         👻👻💀💀
    /*int number;
    cout << "Enter the value of number between 1-5" << endl;
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "Ram";
        break;
    case 2:
        cout << "Shyam";
        break;
    case 3:
        cout << "Mohan";
        break;
    case 4:
        cout << "Krishna";
        break;
    case 5:
        cout << "Anuj";
        break;

    default:
        cout << "Invalid Input";
        break;
    }*/

    // SIMPLE ARITHMETIC CALCULATOR                                  👻👻💀💀
    // The exit () function is used to break out of a loop.This function causes an immediate termination of the entire program done by the operation system.
    /*int a, b;
    cout << "Enter the Value of A and B" << endl;
    cin >> a >> b;

    cout << "Enter any arithmetic operator for operation(+,-,*,/,%)" << endl;
    char ch;
    cin >> ch;

    while (1)
    {

        switch (ch)
        {
        case '+':
            cout << a + b;
            exit(0);

        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
        case '%':
            cout << a % b;
            break;

        default:
            cout << "Invalid operation";
            break;
        }
        cout << "out of loop";
    }*/

    // BITWISE OPERATOR                                              👻👻💀💀
    /*int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << ~a;
    cout << (a << 1) << endl;
    cout << (a >> 1) << endl;*/

    // FIBONACCI SERIES                                              👻👻💀💀
    /*int n1 = 0, n2 = 1, n3, num;
    cout << "Enter the value upto you want to print fibonacci series" << endl;
    cin >> num;
    cout << n1 << " " << n2 << " ";
    for (int i = 1; i <= num; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }*/

    // CHECK NUMBER IS ODD OR EVEN                                   👻👻💀💀
    /*int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    if (n & 1)
        printf("Odd");
    else
        cout << "Even";*/

    // DIVIDE 1330 INTO 100,50,20,10 RUPEE                           👻👻💀💀
    /*int num = 1330;

    switch (num)
    {
    case 1330:
        cout << "The 100 Ruppee note is :" << 1330 / 100 << endl;

    case 1:
        cout << "The 50 Ruppee note is :" << (1330 % 100) / 50 << endl;

    case 2:
        cout << "The 20 Ruppee note is :" << ((1330 % 100) % 50) / 20 << endl;

    case 3:
        cout << "The 10 Ruppee note is :" << (((1330 % 100) % 50) % 20) / 10 << endl;

    default:
        break;
    }*/

    // POWER OF TWO NUMBERS                                          👻👻💀💀
    /*int base, exponent, ans = 1;
    cout << "Enter the value of base and exponent" << endl;
    cin >> base >> exponent;

    for (int i = 1; i <= exponent; i++)
    {
        ans = ans * base;
    }
    cout << ans;*/

    // Factorial program                                             👻👻💀💀
    /*int fact = 1, num;
    cout << "Enter the Number you want factorial" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << fact;*/

    // COMBINATION PROBLEM                                           👻👻💀💀
    /*int n, r, combination, fact_n = 1, fact_r = 1, fact_nr = 1;

    cout << "Enter the value of n and r" << endl;
    cin >> n >> r;

    for (int i = 1; i <= n; i++)
    {
        fact_n = fact_n * i;
    }

    for (int i = 1; i <= r; i++)
    {
        fact_r = fact_r * i;
    }

    for (int i = 1; i <= (n - r); i++)
    {
        fact_nr = fact_nr * i;
    }

    combination = (fact_n) / (fact_r * fact_nr);
    cout << "Combination is :" << combination;*/

    /*string name = "Utkarsh";
    cout << name ;*/

    /*string firstname = "UTKARH ";
    string lastname = "SINGH";
    string name = firstname.append(lastname);
    cout << name;
    cout << endl;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the string is :" << txt.length() << endl;
    cout << "The length of the string is :" << txt.size() << endl;
    cout << txt[5];*/

    /*string fullname;
    cout << "Enter the Fullname" << endl;
    getline(cin, fullname);
    cout << "FullName is :" << fullname;*/

    /*int num = 55;
    int result = (55 > 1) ? true : false;
    cout << result;*/

    /*int myNumbers[] = {10, 25, 10, 30, 50};
    cout << "Size of array in byte is :" << sizeof(myNumbers) << endl;
    cout << "Size of array :" << sizeof(myNumbers) / sizeof(int);*/

    // STRUCTURE                                                    👻👻💀💀
    /*myCar1.brand = "MERCEDES";
    myCar1.model = "LATEST";
    myCar1.year = 2022;
    myCar2.brand = "AUDI";
    myCar2.model = "OLDEST";
    myCar2.year = 2010;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

    myType1.firstName="Utkarsh";
    myType1.lastName="Singh";
    myType1.age=25;
    cout << myType1.firstName << " " << myType1.lastName << " " << myType1.age << endl;*/

    // REFERENCE VARIABLE                                            👻👻💀💀
    string food = "Pizza";
    string &meal = food;

    cout << food << endl;
    cout << meal << endl;
    return 0;
}