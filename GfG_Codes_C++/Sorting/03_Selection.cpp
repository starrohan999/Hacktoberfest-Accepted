#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_ind = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }

        swap(arr[i], arr[min_ind]);
    }
}

int main()
{
    int a[] = {3, 2, 1, 4};

	selectionSort(a, 4);

	for(int i = 0;i < 4; i++){
	    cout<<a[i]<<" ";
	}

    return 0;
}