#include <iostream>
using namespace std;

class student
{
    // CONSTRUCTOR-OVERLOADING: We can have more than one constructor in a class with same name, as long as each has a different list of arguments.

    // --Overloaded constructors essentially have the same name (exact name of the class) and different by number and type of arguments.
    // --A constructor is called depending upon the number and type of arguments passed.
    //-- While creating the object, arguments must be passed to let compiler know, which constructor needs to be called. */

public:
    int roll_no;
    char section;

    student()
    {
        cout << "Constructor is called without arguments" << endl;
    }
    student(int r_n)
    {
        cout << "Constructor is called with one arguments" << endl;
        roll_no = r_n;
    }

    student(int r_n, char sec)
    {
        cout << "Constructor is called with two arguments" << endl;
        roll_no = r_n;
        section = sec;
    }
};

int main()
{
    student s1();

    student s2(10);
    cout << s2.roll_no << endl;

    student s3(10, 'C');
    cout << s3.roll_no << endl;
    cout << s3.section << endl;
    
    return 0;
}