#include <iostream>
using namespace std;

bool isArmstrong(int num)
{
    int original = num;
    int sum = 0, digit;

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == original)
        return true;
    else
        return false;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    return 0;
}