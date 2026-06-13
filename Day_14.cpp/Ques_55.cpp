#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = -1;

    // Finding largest and second largest
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -1)
        cout << "Second largest element does not exist";
    else
        cout << "Second largest element is: " << secondLargest;

    return 0;
}