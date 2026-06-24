#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of names: ";
    cin >> n;

    string name[n];

    cout << "Enter names: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> name[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(name[i] > name[j])
            {
                string temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    cout << "Names in alphabetical order:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << name[i] << endl;
    }

    return 0;
}