#include <iostream>
using namespace std;


class student
{
};

class employee{
    public:
    int employee_id;
    int age;
    char gender;
};

int main()
{
    student s1;

    // size of empty class is -1 because for unique address identification of object
    cout << "Size of class Student: " << sizeof(s1) << endl;

    employee e1;
    cout << "Size of class Employee: " << sizeof(e1) << endl;
    // Here the size will come 12 due to padding and greedy align


    return 0;
}