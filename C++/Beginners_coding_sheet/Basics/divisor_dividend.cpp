/*Write a program where the user is asked to enter two integers (divisor and dividend)
 and the quotient and the remainder of their division is computed.(Both divisor and dividend
  should be integers.)*/

#include <iostream>
using namespace std;

int main()
{
  int divisor, dividend;
  int quotient, remainder;

  cout << "Enter the value of Dividend :";
  cin >> dividend;
  cout << "Enter the value of Divisor :";
  cin >> divisor;

  quotient = dividend / divisor;
  remainder = dividend % divisor;

  cout << "The value of quotient is :" << quotient << endl;
  cout << "The value of remainder is :" << remainder << endl;
}