// 19/06/2021
// Greatest Common Divisor - Euclidean Algorithm
// Time Complexity : O(log(min(a,b)))
// Optimized Implemntation Solution

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

int main()
{
    int a = 12, b = 15;
    cout << gcd(a, b);

    return 0;
}