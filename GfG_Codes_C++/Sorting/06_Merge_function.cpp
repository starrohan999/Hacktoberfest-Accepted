#include <bits/stdc++.h>

using namespace std;

void merge(int a[], int l, int m, int h)
{
    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = a[i + l];

    for (int i = 0; i < n2; i++)
        right[i] = a[m + 1 + i];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            a[k++] = left[i++];
        else
            a[k++] = right[j++];
    }

    while (i < n1)
        a[k++] = left[i++];
    while (j < n2)
        a[k++] = right[j++];
}

int main()
{
    int a[] = {10, 15, 20, 40, 8, 11, 15, 22, 25};
    int l = 0, h = 8, m = 3;

    merge(a, l, m, h);

    for (int x : a)
        cout << x << " ";

    return 0;
}