#include <bits/stdc++.h>

using namespace std;

double medianTwo(int arr1[], int n1, int arr2[], int n2)
{
    int n = n1 + n2;

    int temp[n];

    for (int i = 0; i < n; i++)
    {
        if (i < n1)
            temp[i] = arr1[i];
        else
            temp[i] = arr2[i - n1];
    }

    // This is wrong

    /* for(int i=0; i<n1; i++)
    {
        temp[i] = arr1[i];
    }

    for(int i=0; i<n2; i++)
    {
        temp[i] = arr2[n1+1+i];
    } */

    sort(temp, temp + n);

    cout << "New temp array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;

    cout << "The Median is : ";
    if (n % 2 != 0)
        return (double)temp[n / 2];

    return (double)(temp[(n - 1) / 2] + temp[n / 2]) / 2.0;
}

int main()
{
    int arr1[] = {1, 3, 4, 2, 7}, arr2[] = {5, 8, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << medianTwo(arr1, n1, arr2, n2);

    return 0;
}