#include <iostream>
#include <cmath>

using namespace std;

void moveZero(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[j], arr[i]);
                }
            }
        }
    }
}

int main()
{
    int arr[] = {10, 20, 0, 0, 30, 0, 50}, n = 7;

    moveZero(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}