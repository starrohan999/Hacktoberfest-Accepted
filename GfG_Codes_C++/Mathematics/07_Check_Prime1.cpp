// 20/06/2021
// Check Prime Numbers
// Time Complexity : O(n) 
// Naive Method Solution

#include <iostream>
using namespace std;

bool Prime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 13;
    cout << Prime(n);

    return 0;
}