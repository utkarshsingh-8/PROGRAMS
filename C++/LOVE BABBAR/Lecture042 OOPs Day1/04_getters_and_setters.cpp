#include <iostream>
using namespace std;

class student
{

private:
    int roll_no;
    char section;

public:
    string name;
    string branch;

    // To use the private access modifiers we can use getters and setters fn
    // GETTER: These are those function that allow us to access data members of object
    // SETTER: These are the member function that allow us to change the data members of an object

    int getRoll_no()
    {
        return roll_no;
    }

    char getSection()
    {
        return section;
    }

    void setRoll_no(int roll)
    {
        roll_no =roll;
    }

    void setSection(char ch)
    {
        section = ch;
    }
};

int main()
{
    student s1;
    s1.setRoll_no(50);
    s1.setSection('A');
    cout << "Roll no of student is : " << s1.getRoll_no() << endl;
    cout << "Section of student is : " << s1.getSection() << endl;

    return 0;
}