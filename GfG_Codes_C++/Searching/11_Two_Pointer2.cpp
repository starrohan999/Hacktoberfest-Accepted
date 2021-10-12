#include <bits/stdc++.h>

using namespace std;

/* bool isPair(int arr[], int l, int r, int x)
{
    while(l < r)
    {
        if(arr[l] + arr[r] == x)
        return true;

        else if(arr[l] + arr[r] > x)
        r--;
        
        else
        l++;
    }
    return false;
}

bool find3Number(int arr[], int n, int x)
{
    sort(arr, arr + n);

    for(int i=0; i<n-2; i++)
    {
        if(isPair(arr, i+1, n-1, x-arr[i]))
        return true;
    }
    return false;
} */

// also make this type of this function

bool find3Number(int arr[], int n, int x)
{
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {
        int l = 0, r = n - 1;

        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == x)
            {
                cout << "Your Ans. is " << arr[i] << " + " << arr[l] << " + " << arr[r] << " = " << x << endl;
                return true;
            }

            else if (arr[i] + arr[l] + arr[r] > x)
                r--;

            else
                l++;
        }
    }

    return false;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    int x = 22; // x = sum of numbers
    int n = (sizeof(arr) / sizeof(arr[0]));

    cout << find3Number(arr, n, x);

    return 0;
}