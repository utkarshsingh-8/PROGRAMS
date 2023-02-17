#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    /*
    // wide character
    wchar_t w = L'A';
    cout << w << endl;

    // reference variable --> it is declared and initialized at the same time
    int pizza = 10;
    int &burger = pizza;
    int &samosa=burger;


    cout << "--> " << pizza << endl;
    cout << "--> " << burger << endl;
    cout << "--> " << samosa << endl;

    // burger = 50;
    burger = pizza + 20;
    cout << "After --> " << pizza << endl;
    cout << "After --> " << burger << endl;

    // int &hello; // --> it produces errors*/

    // register storage class
    /*register int x = 5;
    int *ptr = &x;
    cout << "value of x is " << x << endl;
    cout << "value of ptr is " << ptr << endl;
    cout << "address of x is " << &x << endl;

    register int y = 5;
    int *ptrr = &y;
    cout << "value of x is " << y << endl;
    cout << "value of ptr is " << ptrr << endl;
    cout << "address of x is " << &y << endl;*/

    // array of pointers to integers
    /*cout << endl;
    int a = 3, b = 5, c = 8;
    int *ptr[3] = {&a, &b, &c};
    //int *ptr[3];
    // ptr[0] = &a;
    // ptr[1] = &b;
    // ptr[2] = &c;

    cout << "values" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "--> " << *ptr[i] << endl;
    }
    cout << endl
         << "Addresses" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "--> " << ptr[i] << endl;
    }*/

    // array of pointers to characters
    /*char a[5] = {"One", "Two", "Three", "Four", "Five"};

    printf("The values in every string location are : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%s", a[i]);
    }*/

    // cout << "Address of a main() function is : " << &main << endl;
    // cout << "Address of a sum() function is : " << &sum << endl;
    //  function pointer
    /*int (*funcptr)(int, int);
    funcptr = sum;
    int add = funcptr(5, 5);
    cout << "The add is " << add << endl;
    cout << "The add is " << funcptr(5, 5);*/

    // dynamically allocated memory using new and delete operator
    /*int *ptr;
    ptr = new int(55);
    //*ptr = 55;
    // delete ptr;
    cout << "Value at the address is " << *ptr << endl;

    int dynamically = (int *)malloc(sizeof(int));*/

    // cout << "75";
    // cout << '75';
    // cout << "abcde";
    // cout << '%';

    // cout << sizeof(short);

    // char ch = 1;
    // cout << "Value is :" << ch;

    // PRINT FRACTIONAL PART OF FLOATING NUMBER
    /*float f;
    cout << "Enter a floating number : ";
    cin >> f;

    cout << "The fractional part of the given number is" << endl;
    float frac_part = f - (int)f;
    cout << frac_part;*/

    /*int a;
    a=1,2,3;
    cout<<a;*/

    // char test = 0;
    // cout << (test ? 9 : 'a');

   /* int a = 10, b = 20;
    (a, b) = 30; // Since b is l-value, this statement is valid in C++, but not in C.
    printf("b = %d", b);*/

    // cout << INT32_MAX << " " << INT32_MIN;

    /*int i = 0;
    for (i = 0; i < 5; i++)
        ;
    {
        cout << i;
    }*/

/*void *ptr;
int i = 10;
ptr = &i;

cout << "--> " << &i << endl;
cout << "--> " << ptr << endl;
cout << "--> " << *ptr << endl;// we cannot derefernce a void pointer*/

 /*int i = 65;
 int *p = &i;
 cout << *p << endl;
 char *pc = (char *)p;
 cout << *pc << endl;
 cout << pc << endl;*/


    return 0;
}