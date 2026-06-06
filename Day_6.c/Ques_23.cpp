#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        count += (n & 1);  // Check if the last bit is 1
        n = n >> 1;        // Right shift by 1
    }

    cout << "Number of set bits = " << count << endl;

    return 0;
}