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

    cout << "Enter number of left rotations: ";
    cin >> k;

    // Left rotation
    for(int r = 0; r < k; r++)
    {
        temp = arr[0];

        for(int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = temp;
    }

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}