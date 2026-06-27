#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, i, sum, max, min, search, pos;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== Array Operations Menu =====";
        cout << "\n1. Display Array";
        cout << "\n2. Find Sum of Elements";
        cout << "\n3. Find Maximum Element";
        cout << "\n4. Find Minimum Element";
        cout << "\n5. Search Element";
        cout << "\n6. Reverse Array";
        cout << "\n7. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Array Elements: ";
                for(i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                cout << "Sum of elements = " << sum;
                break;

            case 3:
                max = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > max)
                        max = arr[i];
                }
                cout << "Maximum element = " << max;
                break;

            case 4:
                min = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < min)
                        min = arr[i];
                }
                cout << "Minimum element = " << min;
                break;

            case 5:
                cout << "Enter element to search: ";
                cin >> search;

                pos = -1;
                for(i = 0; i < n; i++) {
                    if(arr[i] == search) {
                        pos = i;
                        break;
                    }
                }

                if(pos != -1)
                    cout << "Element found at position " << pos + 1;
                else
                    cout << "Element not found";
                break;

            case 6:
                cout << "Reversed Array: ";
                for(i = n-1; i >= 0; i--) {
                    cout << arr[i] << " ";
                }
                break;

            case 7:
                cout << "Exiting Array Operations System...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 7);

    return 0;
}