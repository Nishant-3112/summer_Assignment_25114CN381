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

    int max = 0;
    char result;

    for(int i = 0; i < str.length(); i++)
    {
        if(freq[(unsigned char)str[i]] > max)
        {
            max = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }

    cout << "Maximum occurring character is: " << result;
    cout << "\nFrequency: " << max;

    return 0;
}