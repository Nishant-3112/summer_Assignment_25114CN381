#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter array elements: ";
    for(int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }

    int total = n * (n + 1) / 2;
    int sum = 0;

    for(int i = 0; i < n-1; i++)
    {
        sum += arr[i];
    }

    int missing = total - sum;

    cout << "Missing number is: " << missing;

    return 0;
}