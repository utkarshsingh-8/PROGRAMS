#include <iostream>
using namespace std;

class student
{
    // private access modifiers
    // we can access it only within class
private:
    int roll_no;

    // public access modifiers
    // we can access it inside and outside the class anywhere;
public:
    string name;
    string branch;
};

int main()
{
    student s1;
    // we can`t this data member because it is private,it gives error
    s1.roll_no;

    // we can easily this data member because it is public
    s1.branch;
    s1.name;

    return 0;
}