// Checking if a number is armstrong number

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    int org_num = n;

    cin >> n;

    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + (rem * rem * rem);
        n /= 10;
    }

    if (org_num == sum)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }

    return 0;
}