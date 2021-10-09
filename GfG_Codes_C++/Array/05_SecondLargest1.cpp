#include <iostream>
#include <cmath>

using namespace std;

// for first largest number
int getLargest(int arr[], int n)
{
    int largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }

    return largest;
}

// for second largest number
int secondLargest(int arr[], int n)
{
    int Largest = getLargest(arr, n);

    int res = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[Largest])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }

    return res;
}

int main()
{
    int arr[] = {5, 10, 20, 15, 2}, n = 5;
    cout << "Your First Largest Index is : " << getLargest(arr, n) << endl;
    cout << "Your Second Largest Index is : " << secondLargest(arr, n) << endl;

    return 0;
}