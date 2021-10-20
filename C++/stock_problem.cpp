#include <bits/stdc++.h>
using namespace std;
string find_min_days(int profit[], int price[], int n, int d)
{
    int k = 0;
    int flag;
    int x, y;
    while (k < d)
    {
        int point = INT_MAX;
        int point2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (profit[k] == (price[j] - price[i]) && ((point - point2) > (j - i) && point >= j))
                { //
                    x = i + 1,
                    y = j + 1;
                    point = j;
                    point2 = i;
                }
            }
        }
        cout << x << " " << y;
        if (k != d - 1)
            cout << ",";
        k++;
    }
    return "";
}

int main()
{
    int n, d, i;
    string answer = "";
    cin >> n >> d;
    int price[n];
    int profit[d];
    for (i = 0; i < n; i++)
        cin >> price[i];
    for (i = 0; i < d; i++)
        cin >> profit[i];
    answer = find_min_days(profit, price, n, d);
    cout << answer << endl;
    return 0;
}