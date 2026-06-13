#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, key, i;
    bool found = false;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    // Linear Search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Element found at position " << i + 1;
    else
        cout << "Element not found";

    return 0;
}