#include <iostream>
using namespace std;

class student
{
public:
    string name;
    string branch;
};

int main()
{
    // Two ways to create an object of a class
    // 1- object creation statically
    student s1;

    // 2-object creation dynamically at runtime
    student *s2 = new student;

    // Dot Operator for accessing the class members(properties and methods)
    // for statically created object
    s1.name;
    s1.branch;

    // for dynamically created object
    // 1st method
    s2->branch;
    s2->name;

    // 2nd method
    (*s2).branch;
    (*s2).name;

    return 0;
}