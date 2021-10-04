// 20/06/2021
// Check Prime Numbers
// Time Complexity : O(√n)
// More Efficient Method

#include <iostream>
using namespace std;

bool Prime(int n)
{
    if (n == 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 6;
    cout << Prime(n);

    return 0;
}