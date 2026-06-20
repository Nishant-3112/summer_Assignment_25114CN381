#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a lowercase character: ";
    cin >> ch;

    ch = ch - 32;   // Convert lowercase to uppercase

    cout << "Uppercase character: " << ch;

    return 0;
}