#include <iostream>
#include <cmath>

using namespace std;

int secondLargest(int arr[], int n)
{
    int largest = 0;
    int res = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }

        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    int arr[] = {5, 20, 12, 20, 8}, n = 5;
    cout << "Your Second Largest Index is : " << secondLargest(arr, n) << endl;

    return 0;
}