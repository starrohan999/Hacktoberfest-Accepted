// 26/06/2021
// This program generates the Power Set of a given Set using bitwise operators
// Efficient Solution
// Time Complexity : Θ(2^n * n)

#include <iostream>
#include <cmath>

using namespace std;

void printPowerSet(string str)
{
    int n = str.length();
    int powSize = pow(2, n);

    for (int counter = 0; counter < powSize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((counter & (1 << j)) != 0)
                cout << str[j];
        }
        cout << endl;
    }
}

int main()
{
    string s = "abc";
    printPowerSet(s);

    return 0;
}