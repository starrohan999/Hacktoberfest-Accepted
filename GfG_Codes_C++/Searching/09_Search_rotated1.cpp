#include <iostream>

using namespace std;

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {100, 200, 400, 1000, 10, 20}, n = 6;
    int x = 10;

    cout << search(arr, n, x);

    return 0;
}