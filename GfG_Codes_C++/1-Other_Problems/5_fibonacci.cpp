// Printinng first terms of fibonacci series with starting teams as 0, 1

#include <iostream>
using namespace std;

int main()
{

    /* Fibonacci Series up to n number of terms */

    cout << "\n***Fibonacci Series up to n number of terms***\n\n";

    int p, p1 = 0, p2 = 1, nt = 0;
    cin >> p;

    for (int i = 1; i <= p; i++)
    {
        if (i == 1)
        {
            cout << p1 << " , ";
            continue;
        }
        if (i == 2)
        {
            cout << p2 << " , ";
            continue;
        }
        nt = p1 + p2;
        p1 = p2;
        p2 = nt;

        cout << nt << " , ";
    }

    cout << "\n";

    /* Program to Generate Fibonacci Sequence Up to a Certain Number */

    cout << "\n***Program to Generate Fibonacci Sequence Up to a Certain Number***\n\n";

    int n, t1 = 0, t2 = 1, next_term = 0;
    cin >> n;

    cout << t1 << " " << t2 << " ";

    next_term = t1 + t2;

    while (next_term <= n)
    {
        cout << next_term << " ";
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }

    cout << "\n\n";

    return 0;
}