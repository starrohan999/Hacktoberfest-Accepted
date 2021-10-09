#include <iostream>

using namespace std;

int sqRootfloor(int x)
{
    int low = 0, high = x;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int msq = mid * mid;

        if (msq == x)
            return mid;

        else if (msq > x)
            high = mid - 1;

        else
        {
            low = mid + 1;
            ans = mid;
        }
    }

    return ans;
}

int main()
{
    cout << sqRootfloor(24);

    return 0;
}