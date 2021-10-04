// 21/06/2021
// Computing Power = pow(x,n)
// Time Complexity : Θ(log(n))
// Efficient Method

#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
        return 1;

    int temp = power(x, n / 2);
    temp = temp * temp;

    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}

int main()
{
    int x = 3, n = 5;
    cout << power(x, n);

    return 0;
}