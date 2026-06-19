#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[100][100];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Row wise sum of matrix:\n";

    for(int i = 0; i < rows; i++)
    {
        int sum = 0;
        for(int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}