#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ' && i != 0 && sentence[i + 1] != ' ')
        {
            count++;
        }
    }

    // If sentence is not empty, add 1 for the last word
    if (sentence.length() > 0)
        count++;

    cout << "Number of words = " << count;

    return 0;
}