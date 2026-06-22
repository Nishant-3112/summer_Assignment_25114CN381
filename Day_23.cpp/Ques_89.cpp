#include <iostream>
using namespace std;

int main()
{
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    bool found = false;
    for(int i = 0; i < str.length(); i++)
    {
        if(freq[(unsigned char)str[i]] == 1)
        {
            cout << "First non-repeating character is: " << str[i];
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "No non-repeating character found";
    }

    return 0;
}