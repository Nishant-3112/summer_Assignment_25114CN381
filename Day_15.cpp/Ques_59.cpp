#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, k, temp;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of rotations: ";
    cin >> k;

    // Right rotation
    for(int r = 0; r < k; r++)
    {
        temp = arr[n - 1];

        for(int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    cout << "Array after right rotation: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}