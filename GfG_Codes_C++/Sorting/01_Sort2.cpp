#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {2, 3, 1, 4, 5};

    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";

    sort(v.begin(), v.end());

    cout << endl;
    for (int x : v)
        cout << x << " ";

    return 0;
}