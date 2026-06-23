#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, compressed = "";

    cout << "Enter a string: ";
    cin >> str;

    int count = 1;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            compressed += str[i];
            compressed += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed string: " << compressed;

    return 0;
}