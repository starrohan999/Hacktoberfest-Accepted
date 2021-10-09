#include <iostream>

using namespace std;

int maxSumsub(int arr[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            res = max(res, curr);
        }
    }

    return res;
}

int main()
{
    int arr[] = {1, -2, 3, -1, 2}, n = 5;

    cout << maxSumsub(arr, n);

    return 0;
}