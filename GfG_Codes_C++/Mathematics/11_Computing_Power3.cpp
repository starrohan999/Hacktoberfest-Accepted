// 21/06/2021
// Computing Power = pow(x,n)
// Time Complexity : O(log(n))
// Auxiliary Space Complexity : O(1)
// More Efficient Method

#include <iostream>
using namespace std;

int power(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1) // means (n % 2 != 0)
        {
            res = res * x;
        }
        x = x * x;
        n = n >> 1; // means (n / 2)
    }
    return res;
}

int main()
{
    int x = 4, n = 5;
    cout << power(x, n);

    return 0;
}