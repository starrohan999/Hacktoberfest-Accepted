// 19/06/2021
// LCM
// Time Complexity : O(log(min(a,b)))
// Efficient Solution

#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b)
{
    return ((a * b) / gcd(a, b));
}

int main()
{
    int a = 4, b = 6;
    cout << lcm(a, b);

    return 0;
}