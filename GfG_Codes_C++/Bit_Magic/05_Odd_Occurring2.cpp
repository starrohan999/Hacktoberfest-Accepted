// 26/06/2021
// This program takes an array of integers and displays the number that has odd occurrences in the array.
// Efficient Solution

#include <iostream>

using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = 9;
    cout << findOdd(arr, n);

    return 0;
}
