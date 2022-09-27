// 17/06/2021
// Palindrome Number
// Time Complexity : Θ(d) - d = Number of Digits

#include <iostream>
using namespace std;

bool isPal(int n)
{
    int rev = 0;
    int temp = n;

    while (temp != 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp /= 10;
    }
    return (rev == n);
}

int main()
{
    int n;
    cin >> n;
    cout << isPal(n);

    return 0;
}