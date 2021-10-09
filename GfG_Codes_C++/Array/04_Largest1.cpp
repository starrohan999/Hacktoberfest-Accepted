#include <iostream>
#include <cmath>

using namespace std;

int getLargest(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {5, 10, 20, 15, 2}, n = 5;
    cout << "Your Largest Index is : " << getLargest(arr, n);

    return 0;
}