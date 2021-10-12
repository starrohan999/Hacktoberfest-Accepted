// 26/06/2021
// Program to check whether a number is a power of 2 or not
// Naive Solution

#include <iostream>

using namespace std;

bool isPow2(int n)
{
    if (n == 0)
        return false;

    while (n != 1)
    {
        if (n % 2 != 0)
            return false;

        n /= 2;
    }
    return true;
}

int main()
{
    int n = 4;
    cout << isPow2(n);

    return 0;
}