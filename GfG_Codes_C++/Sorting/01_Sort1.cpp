#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {5, 2, 3, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    for (int x : arr)
        cout << x << " ";

    sort(arr, arr + n, greater<int>());

    cout << endl;
    for (int x : arr)
        cout << x << " ";

    return 0;
}