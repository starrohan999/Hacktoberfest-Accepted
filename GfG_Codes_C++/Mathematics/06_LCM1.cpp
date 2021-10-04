// 19/06/2021
// LCM
// Time Complexity : O(a*b - max(a,b))
// Basic Solution

#include <iostream>
#include <math.h>
using namespace std;

int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            break;
        }
        res++;
    }
    return res;
}

int main()
{
    int a = 2, b = 8;
    cout << lcm(a, b);

    return 0;
}
