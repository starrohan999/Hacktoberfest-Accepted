#include <iostream>

using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int arr[] = {7, 10, 30, 50}, n = 4;
    cout << isSorted(arr, n);

    return 0;
}