// Write a Program to Check whether a year entered byuser is Leap Year or not

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the Year\n";
    cin >> year;

    // 1st Method   🙄🙄🙄
    /*if ((year % 4 == 0) && (year % 100 == 0 && year % 400 == 0))
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not Leap Year";
    }*/

    // 2nd Method   🙄🙄🙄
    //((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) ? cout << "Leap Year" : cout << "Not Leap Year";

}