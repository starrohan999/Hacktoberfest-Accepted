#include <iostream>

using namespace std;

int lastOcc(int arr[], int x, int n)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > x)
            high = mid - 1;

        else if (arr[mid] < x)
            low = mid + 1;

        else
        {
            if (mid == n - 1 || arr[mid + 1] != arr[mid])
                return mid;

            else
                low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {5, 10, 10, 10, 10, 20, 20}, n = 7;
    int x = 10;

    cout << lastOcc(arr, x, n);

    return 0;
}