#include <iostream>

using namespace std;

extern int a = 4;

int main(void)
{
    a = 4;
    cout << a;
}