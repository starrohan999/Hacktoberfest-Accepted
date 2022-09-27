#include <iostream>

using namespace std;

int getWater(int arr[], int n)
{
    int res = 0;
    int lMax[n], rMax[n];

    lMax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lMax[i] = max(arr[i], lMax[i - 1]);
    }

    rMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rMax[i] = max(arr[i], rMax[i + 1]);
    }

    for (int i = 1; i < n - 1; i++)
    {
        res = res + (min(lMax[i], rMax[i]) - arr[i]);
    }

    return res;
}

int main()
{
    int arr[] = {3, 0, 1, 2, 5}, n = 5;

    cout << getWater(arr, n);

    return 0;
}