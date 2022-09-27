#include <bits/stdc++.h>

using namespace std;

int Majority(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > n / 2)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 2}, n = 6;

    cout << Majority(arr, n);

    return 0;
}