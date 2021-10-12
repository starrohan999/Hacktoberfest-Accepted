#include <bits/stdc++.h>

using namespace std;

int Repeat(int arr[], int n)
{
    int slow = arr[0] + 1, fast = arr[0] + 1;

    do
    {
        slow = arr[slow] + 1;
        fast = arr[arr[fast] + 1] + 1;
    } while (slow != fast);

    slow = arr[0] + 1;
    while (slow != fast)
    {
        slow = arr[slow] + 1;
        fast = arr[fast] + 1;
    }

    return slow - 1;
}

int main()
{
    int arr[] = {1, 3, 2, 4, 6, 5, 0, 7, 3, 3}, n = 10;

    cout << Repeat(arr, n);

    return 0;
}