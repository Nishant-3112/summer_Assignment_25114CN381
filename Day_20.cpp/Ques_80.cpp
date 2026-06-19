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

    cout << "Enter matrix elements:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Column wise sum:" << endl;

    for(int j = 0; j < cols; j++)
    {
        int sum = 0;
        for(int i = 0; i < rows; i++)
        {
            sum += arr[i][j];
        }
        cout << "Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}