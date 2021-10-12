#include <iostream>

using namespace std;

int maxSumsub(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];

    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(maxEnding, res);
    }

    return res;
}

int main()
{
    int arr[] = {1, -2, 3, -1, 2}, n = 5;

    cout << maxSumsub(arr, n);

    return 0;
}