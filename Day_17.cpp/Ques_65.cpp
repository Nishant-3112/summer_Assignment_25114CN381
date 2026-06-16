#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], merge[200];
    int n1, n2, i;

    cout << "Enter size of first array : ";
    cin >> n1;

    cout << "Enter elements of first array : ";
    for(i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array : ";
    cin >> n2;

    cout << "Enter elements of second array: ";
    for(i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    // Copy first array elements
    for(i = 0; i < n1; i++)
    {
        merge[i] = arr1[i];
    }

    // Copy second array elements
    for(i = 0; i < n2; i++)
    {
        merge[n1 + i] = arr2[i];
    }

    cout << "Merged array is: ";
    for(i = 0; i < n1 + n2; i++)
    {
        cout << merge[i] << " ";
    }

    return 0;
}