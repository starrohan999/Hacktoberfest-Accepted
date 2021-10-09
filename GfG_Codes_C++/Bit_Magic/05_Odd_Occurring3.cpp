// 26/06/2021
// This program takes an array of integers and displays the two number that has odd occurrences in the array.
// Naive Solution
// Time Complexity : Θ(n^2)

#include <iostream>

using namespace std;

void oddAppearing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7}, n = 10;
    oddAppearing(arr, n);

    return 0;
}