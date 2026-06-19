#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10], rows, cols;
    bool symmetric = true;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    if (rows != cols)
    {
        cout << "Matrix is not symmetric";
        return 0;
    }

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
        cout << "Matrix is symmetric";
    else
        cout << "Matrix is not symmetric";

    return 0;
}