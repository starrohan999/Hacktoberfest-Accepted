#include <iostream>
#include <cmath>

using namespace std;

int deleteEle(int arr[], int n, int x)
{
    int i = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            break;
    }

    if (i == n)
        return n;

    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    return n - 1;
}

int main()
{
    int arr[] = {3, 8, 12, 5, 6}, n = 5, x = 12;
    cout << "Before Deletion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    n = deleteEle(arr, n, x);
    cout << "After Deketion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}