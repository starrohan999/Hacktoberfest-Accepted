#include <iostream>

using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0)
        return 0;

    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }

    return res;
}

int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30}, n = 6;
    cout << "Before Removal" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    n = removeDuplicates(arr, n);
    cout << "After Removal" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}