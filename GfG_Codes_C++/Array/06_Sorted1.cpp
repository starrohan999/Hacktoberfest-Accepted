#include <iostream>

using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int arr[] = {7, 2, 30, 10}, n = 4;
    cout << isSorted(arr, n);

    return 0;
}