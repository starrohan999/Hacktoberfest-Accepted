// 17/06/2021
// Factorial of a Number itrative solution
// Time Complexity : Θ(n) 
// Auxilliary Space Complexity : O(1)

#include <iostream>
using namespace std;

int fact(int n)
{
    int rec = 1;
    for (int i = 2; i <= n; i++)
    {
        rec = rec * i;
    }
    return rec;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);

    return 0;
}