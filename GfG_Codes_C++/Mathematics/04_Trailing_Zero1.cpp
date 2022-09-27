// 18/06/2021
// Trailing Zeros in Factorial
// Time Complexity : Θ(n)
// Not Possible For Lage n number like n = 20++

#include <iostream>
using namespace std;

int Tra(int n)
{
    int rec = 1;
    for (int i = 2; i <= n; i++)
    {
        rec = rec * i;
    }

    int a = 0;
    while (rec % 10 == 0)
    {
        a++;
        rec /= 10;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    cout << Tra(n);

    return 0;
}