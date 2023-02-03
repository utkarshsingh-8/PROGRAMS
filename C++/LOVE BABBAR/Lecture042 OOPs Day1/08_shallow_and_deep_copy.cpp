#include <iostream>
using namespace std;

class student
{
    // SHALLOW COPY

private:
    int roll_no;
    char section;

public:
    student()
    {
        cout << "Default Constructor is called" << endl;
    }

    student(int roll_no, char section)
    {
        cout << "parameterized Constructor is called" << endl;
        this->roll_no = roll_no;
        this->section = section;
    }

    // COPY-CONSTRUCTOR:It is a member function that initialze an object using another object of the same class;
    student(student &temp)
    {
        cout<<"Copy Constructor Called"<<endl;
        this->roll_no = temp.roll_no;
        this->section = temp.section;
    }

    int getRoll_no()
    {
        return roll_no;
    }

    char getSection()
    {
        return section;
    }

    void setRoll_no(int r_no)
    {
        roll_no = r_no;
    }

    void setSection(char sec)
    {
        section = sec;
    }

    void print()
    {
        cout << "Roll No Student is :" << getRoll_no() << endl;
        cout << "Section of Student is :" << getSection() << endl;
    }
};

int main()
{

    // Parameterized constructor is called
    // student s3(10, 'C');
    student s3;
    s3.setRoll_no(50);
    s3.setSection('Z');
    s3.print();

    // Copy Constructor is called
    student s4 = s3;
    s4.print();

    return 0;
}