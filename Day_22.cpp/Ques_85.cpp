#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, rev = "";

    cout << "Enter a string: ";
    cin >> str;

    // Reverse the string
    for(int i = str.length() - 1; i >= 0; i--)
    {
        rev = rev + str[i];
    }

    // Check palindrome
    if(str == rev)
        cout << "String is Palindrome";
    else
        cout << "String is not Palindrome";

    return 0;
}