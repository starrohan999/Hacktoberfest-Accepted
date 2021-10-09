// 26/06/2021
// Find the Missing Number

#include <iostream>

using namespace std;

int getNumber(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    for (int i = 0; i <= (n + 1); i++)
    {
        res = res ^ i;
    }
    return res;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int n = 9;
    cout << getNumber(arr, n);

    return 0;
}