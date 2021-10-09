// 20/06/2021
// All Divisars of a number
// Time Complexity : Θ(n)
// Auxilary Space Complexity : Θ(1)
// Naive Solution

#include <iostream>
using namespace std;

void PrintDivisar(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}

int main()
{
    int n = 6;
    PrintDivisar(n);

    return 0;
}