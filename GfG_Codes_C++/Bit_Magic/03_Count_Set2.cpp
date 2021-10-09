// 23/06/2021
// Count set bits Using "Brian Kerningam's Algorithm"
// Time Complexity : Θ(Set Bit count)

#include <iostream>

using namespace std;

int Countset(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    return res;
}

int main()
{
    int n = 40;
    cout << Countset(n);

    return 0;
}