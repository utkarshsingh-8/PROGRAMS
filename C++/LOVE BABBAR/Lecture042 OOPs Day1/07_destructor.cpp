#include <iostream>
using namespace std;

class student
{
    // DESTRUCTOR:It is a special type of member function that works just opposite to constructor,it destroys(or delete) the object
    // A destructor has the same as that of the class name and does not have a return-type.and declaration always begin with (~)tilde symbol

public:
    int roll_no;
    char section;

    // constructor
    student()
    {
        cout << "Constructor is called" << endl;
    }

    // destructor
    ~student()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    // Default destructor is called  automatically when object is created statically
    student s1;

    // Default destructor is not called automatically when object is created dynamically,we call it manually
    student *s2 = new student;
    delete s2;

    return 0;
}