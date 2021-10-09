// 18/06/2021
// Trailing Zeros in Factorial
// Time Complexity : Θ(log(n))
// Vaild for all numbers

#include <iostream>
using namespace std; 

int countZero(int n)
{
    int rec = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        rec = rec + (n / i);
    }
    return rec;
}

int main()
{
    int n;
    cin >> n;
    cout << countZero(n);

    return 0;
}