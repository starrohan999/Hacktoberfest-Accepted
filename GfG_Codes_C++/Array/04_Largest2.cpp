#include <iostream>
#include <cmath>

using namespace std;

int getLargest(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
            res = i;
    }
    return res;
}

int main()
{
    int arr[] = {5, 10, 20, 15, 2}, n = 5;
    cout << "Your Largest Index is : " << getLargest(arr, n);

    return 0;
}