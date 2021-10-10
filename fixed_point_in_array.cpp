
#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    vector<int> valueEqualToIndex(int arr[], int n)
    {
        vector<int> v;

        for (int i = 0; i <= n - 1; i++)
        {
            if (arr[i] == i + 1)
            {
                v.push_back(arr[i]);
            }
        }

        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty())
        {
            cout << "Not Found";
        }
        else
        {
            for (int x : ans)
            {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}