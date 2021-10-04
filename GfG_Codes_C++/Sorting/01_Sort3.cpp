#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;
};

bool MyComp(Point p1, Point p2)
{
    return (p1.x >= p2.x);
}

int main()
{
    Point arr[] = {{2, 1}, {5, 2}, {1, 8}};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n, MyComp);

    for (auto i : arr)
        cout << i.x << " " << i.y << " " << endl;

    return 0;
}