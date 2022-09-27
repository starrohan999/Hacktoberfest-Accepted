#include <iostream>

using namespace std;

int firstOccurrence(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] < x)
        return firstOccurrence(arr, mid + 1, high, x);

    else if (arr[mid] > x)
        return firstOccurrence(arr, low, mid - 1, x);

    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;

        else
            return firstOccurrence(arr, low, mid - 1, x);
    }
}

int main()
{
    int arr[] = {5, 10, 10, 15, 15}, n = 5;
    int x = 15;

    cout << firstOccurrence(arr, 0, n - 1, x);

    return 0;
}