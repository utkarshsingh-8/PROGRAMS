#include <iostream>
using namespace std;

class student
{
    // CONSTRUCTOR:It is a special type of member function that is called automatically when an object is created.
    // A constructor has the same as that of the class name and does not have a return-type.

public:
    int roll_no;
    char section;

    // DEFAULT-CONSTRUCTOR:It is the constructor that does`t take any argument and it has no return type;
    student()
    {
        cout << "Default Constructor is called" << endl;
    }

    // PARAMETRIZED-CONSTRUCTOR:This constructor takes arguments and it is provided by user.
    student(int r_n, char sec)
    {
        cout << "parameterized Constructor is called" << endl;
        roll_no = r_n;
        section = sec;
    }

    // COPY-CONSTRUCTOR:It is a member function that initialze an object using another object of the same class;

    void print()
    {
        cout << "Roll No Student is :" << roll_no << endl;
        cout << "Section of Student is :" << section << endl;
    }
};

int main()
{
    // Default constructor is called when an object is created statically
    student s1;

    // Default constructor is called when an object is created dynamically
    student *s2 = new student;

    // Parameterized constructor is called
    student s3(10, 'C');
    s3.print();
    
    // Copy Constructor is called
    student s4 = s3;
    s4.print;
    

    return 0;
}