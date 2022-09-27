// 17/06/2021
// Count Digits
// Time Complexity : Θ(d) - d = number or count

#include <iostream>
using namespace std;

int countDigits(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n / 10;
        res++;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << countDigits(n);

    return 0;
}
