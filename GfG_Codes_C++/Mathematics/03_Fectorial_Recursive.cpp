// 18/06/2021
// Factorial of a Number recursive solution
// Time Complexity : Θ(n)
// Auxilliary Space Complexity : Θ(n)

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (n * fact(n - 1));
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);

    return 0;
}