// 20/06/2021
// All Divisars of a number
// Time Complexity : Θ(√n)
// Efficient Method

#include <iostream>
using namespace std;

void PrintDivisar(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != (n / i))
                cout << (n / i) << " ";
        }
    }
}

int main()
{
    int n = 25;
    PrintDivisar(n);

    return 0;
}