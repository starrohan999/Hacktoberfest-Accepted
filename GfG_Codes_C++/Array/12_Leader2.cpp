#include <iostream>

using namespace std;

void Leader(int arr[], int n)
{
    int curr_led = arr[n - 1];
    cout << curr_led << " ";

    for (int i = n - 2; i >= 0; i--)
    {
        if (curr_led < arr[i])
        {
            curr_led = arr[i];
            cout << curr_led << " ";
        }
    }
}

int main()
{
    int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;

    Leader(arr, n);

    return 0;
}