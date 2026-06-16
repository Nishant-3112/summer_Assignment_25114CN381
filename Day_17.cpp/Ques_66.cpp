#include <iostream>
using namespace std;

int main()
{
    int a[100], b[100], uni[200];
    int n1, n2, k = 0;

    cout << "Enter size of first array : ";
    cin >> n1;

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second array : ";
    cin >> n2;

    cout << "Enter elements of second array : ";
    for(int i = 0; i < n2; i++)
        cin >> b[i];

    // Store first array elements
    for(int i = 0; i < n1; i++)
        uni[k++] = a[i];

    // Store second array elements if not already present
    for(int i = 0; i < n2; i++)
    {
        bool found = false;

        for(int j = 0; j < k; j++)
        {
            if(b[i] == uni[j])
            {
                found = true;
                break;
            }
        }

        if(!found)
            uni[k++] = b[i];
    }

    cout << "Union of two arrays: ";
    for(int i = 0; i < k; i++)
        cout << uni[i] << " ";

    return 0;
}