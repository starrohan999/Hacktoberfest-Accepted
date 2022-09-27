// Checking ia a number is prime

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter any number: ";
    // cin >> n;

    // bool flag = true;

    // for (int i = 2; i * i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         flag = false;
    //         break;
    //     }
    // }

    // if (n <= 1)
    // {
    //     flag = false;
    // }

    // if (flag)
    // {
    //     cout << "Prime\n";
    // }
    // else
    // {
    //     cout << "Not Prime\n";
    // }

    /* OR */

    int n;
    cin >> n;

    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-Prime" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Prime" << endl;
    }

    return 0;
}