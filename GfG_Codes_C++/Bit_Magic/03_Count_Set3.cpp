// 26/06/2021
// Count set bits Using Lookup Table
// Time Complexity : Θ(1)

#include <iostream>

using namespace std;

int table[256];

void initialize()
{
    table[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}

int Countset(int n)
{
    return table[n & 0xff] +
           table[(n >> 8) & 0xff] +
           table[(n >> 16) & 0xff] +
           table[(n >> 24)];
}

int main()
{
    initialize();
    int n = 9;
    cout << Countset(n);

    return 0;
}