// 26/06/2021
// Program to check whether a number is a power of 2 or not
// Naive Solution
#include <iostream>

using namespace std;

bool isPow2(int n)
{
    return (n != 0) && ((n & (n - 1)) == 0);
}

int main()
{
    int n = 8;
    cout << isPow2(n);

    return 0;
}