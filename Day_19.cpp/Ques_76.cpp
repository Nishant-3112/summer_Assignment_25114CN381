#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter size of square matrix : ";
    cin >> n;

    int arr[100][100];

    cout << "Enter matrix elements :\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;

    for(int i = 0; i < n; i++)
    {
        primarySum += arr[i][i];           // Main diagonal matrix
        secondarySum += arr[i][n-i-1];     // Secondary diagonal matrix
    }

    cout << "Sum of primary diagonal = " << primarySum << endl;
    cout << "Sum of secondary diagonal = " << secondarySum << endl;

    return 0;
}