#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int even = 0, odd = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Number of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd << endl;

    return 0;
}