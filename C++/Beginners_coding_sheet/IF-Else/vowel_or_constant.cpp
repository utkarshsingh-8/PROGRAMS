// Write a Program to Check Whether a Character is Vowel or Consonant

#include <iostream>
using namespace std;

int main()
{
    /*char ch;
    cout << "Enter the value of ch\n";
    cin >> ch;

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "Entered character is Vowel";
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "Entered character is Vowel";
    }
    else
    {
        cout << "Entered character is Constant";*/

    char c;
    cout << "Enter an Alphabtet: ";
    cin >> c;

    bool isLowercaseVowel, isUppercaseVowel;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
    {
        cout << "Error! Non-Alphabetic Character";
    }
    else if (isLowercaseVowel || isUppercaseVowel)
    {
        cout << c << " is a Vowel ";
    }
    else
    {
        cout << c << " is a constant";
    }
}
