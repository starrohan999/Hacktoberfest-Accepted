// 21/06/2021
// Computing Power = pow(x,n)
// Time Complexity : Θ(n)
// Naive Method

#include <iostream>
using namespace std;

int power(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res * x;
    }
    return res;
}

int main()
{
    int x = 3, n = 4;
    cout << power(x, n);

    return 0;
}