#include <bits/stdc++.h>

using namespace std;

int Repeat(int arr[], int n)
{
    int visit[n - 1];
    memset(visit, false, sizeof(visit));

    for (int i = 0; i < n; i++)
    {
        if (visit[arr[i]])
            return arr[i];
        visit[arr[i]] = true;
    }
    return -1;
}

int main()
{
    int arr[] = {0, 2, 1, 3, 2, 2}, n = 6;

    cout << Repeat(arr, n);

    return 0;
}