#include <iostream>

using namespace std;

int firstOccurrence(int arr[], int n, int x)
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
    int arr[] = {5, 10, 10, 15, 15}, n = 5;
    int x = 15;

    cout << firstOccurrence(arr, n, x);

    return 0;
}