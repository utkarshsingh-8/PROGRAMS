#include <iostream>
using namespace std;

int main()
{

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

 int i = 65;
 int *p = &i;
 cout << *p << endl;
 char *pc = (char *)p;
 cout << *pc << endl;
 cout << pc << endl;

 return 0;
}