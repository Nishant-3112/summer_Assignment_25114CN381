#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << "First repeating element is: " << arr[i];
                found = true;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
    {
        cout << "No repeating element found";
    }

    return 0;
}