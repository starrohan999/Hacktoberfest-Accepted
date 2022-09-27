// 23/06/2021
// Count set bits Using Naive Solution
// Time Complexity : Θ(Totle Bits in n)

#include <iostream>
using namespace std;

int Countset(int n)
{
    int res = 0;
    while (n > 0)
    {
        if (n % 2 != 0) // == if(n&1 == 1) == res = res + (n&1)
            res++;      // rees++; == nothing
        n = n / 2;      // == n = n>>1 == anything we use
    }
    return res;
}

int main()
{
    int n = 5;
    cout << Countset(n);

    return 0;
}