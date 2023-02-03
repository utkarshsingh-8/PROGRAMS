#include <iostream>
using namespace std;

class hero
{

    // private access modifiers
private:
    int health;

    // public accesss modifiers
public:
    // default constructor
    hero()
    {
        cout << "Constructor Called" << endl;
    }

    // parametrised constructor
    hero(int health, char level)
    {
        cout << "This->" << this << endl;
        this->level = level;
        this->health = health;
    }

    char level;

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void print()
    {
        cout << "heath" << this->health << endl;
        cout << "level" << this->level << endl;
    }
};

int main()
{
    hero R(50, 'C');
    R.print();

    // Copy Constructor
    hero S(R);
    S.print();

    // Object Created statically
    // hero ramesh(50);
    // cout << "Address of Ramesh :" << &ramesh << endl;

    // Object Created dynamically
    // hero *ram = new hero(20);
    // cout << "Address of Ram :" << &ram << endl;

    // hero temp(80, 'B');
    // cout << "Address of temp :" << &temp << endl;
    // temp.print();

    // Statically Allocated
    /* hero arpit;
     arpit.setHealth(50);
     arpit.level = 'A';

     cout << "Health is :" << arpit.getHealth() << endl;
     cout << "Level is :" << arpit.getLevel() << endl;*/

    // Dynamically Allocated
    /*hero *b = new hero;
    (*b).setHealth(80);
    (*b).level = 'B';

    cout << "Health is :" << (*b).getHealth() << endl;
    cout << "Level is :" << (*b).getLevel() << endl;

    b->setHealth(30);
    b->level = 'C';
    cout << "Health is :" << b->getHealth() << endl;
    cout << "Level is :" << b->getLevel() << endl;*/

    return 0;
}