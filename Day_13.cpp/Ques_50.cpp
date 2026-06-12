#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, sum = 0;
    float average;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    cout << "Sum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;

    return 0;
}