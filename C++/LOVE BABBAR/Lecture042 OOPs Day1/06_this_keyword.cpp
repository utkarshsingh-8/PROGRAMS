#include <iostream>
using namespace std;

class Employee
{
    // 'this' KEYWORD:this pointer holds the current object's address; in simple words, this pointer points to the class's current object.

    // There can be three main usages of this keyword in C++.
    //  -it can be used to pass the current object as a parameter to another method.
    //  -It can be used to refer to a current class instance variable.
    //  -it can be used to declare indexers.

public:
    int id;
    string name;
    float salary;

    Employee(int id, string name, float salary)
    {

        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main()
{

    Employee el = Employee(101, "Sonoo", 890000);
    Employee e2 = Employee(102, "Nakul", 59000);
    el.display();
    e2.display();

    return 0;
}