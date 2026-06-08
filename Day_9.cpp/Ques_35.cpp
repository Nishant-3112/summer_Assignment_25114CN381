#include <iostream>
using namespace std;

int main() {
    int n;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}