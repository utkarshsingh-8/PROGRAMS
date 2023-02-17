#include <iostream>
using namespace std;

namespace space_1
{
    void fun()
    {
        cout<<"First namespace";
    }
}

namespace space_2
{
    void fun()
    {
        cout<<"Second namespace";
    }
}

namespace space_3
{
    namespace space_4
    {
        void fun()
        {
            cout<<"Nested Space 4";
        }
    }
}

//using namespace space_1;
//using namespace space_2;
//using namespace space_3::space_4;
int main()
{
    space_1::fun();
    return 0;
}