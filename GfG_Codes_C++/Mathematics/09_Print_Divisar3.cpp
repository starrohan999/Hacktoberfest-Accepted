// 20/06/2021
// All Divisars of a number
// Time Complexity : Θ(√n)
// More Efficient Method - With sorted order

#include <iostream>
using namespace std;

void PrintDivisar(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << (n / i) << " ";
    }
}

int main()
{
    int n = 15;
    PrintDivisar(n);

    return 0;
}