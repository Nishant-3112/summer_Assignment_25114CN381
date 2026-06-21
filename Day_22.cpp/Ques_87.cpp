#include <iostream>
using namespace std;

int main()
{
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    // Count frequency of each character
    for(int i = 0; i < str.length(); i++)
    {
        freq[(int)str[i]]++;
    }

    cout << "Character Frequency:" << endl;

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > 0)
        {
            cout << char(i) << " = " << freq[i] << endl;
        }
    }

    return 0;
}