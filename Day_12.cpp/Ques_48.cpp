#include <iostream>
using namespace std;

void checkPerfect(int n)
{
    int sum = 0;

    for(int i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        cout << n << " is a Perfect Number";
    else
        cout << n << " is not a Perfect Number";
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    checkPerfect(num);

    return 0;
}