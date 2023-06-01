// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void stockBuySell(int price[], int n)
{
    int low = 0, high = 0;
    vector<pair<int, int>> result;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            if (price[i] <= price[i + 1])
            {
                high++;
            }
            else
            {
                if (low < high)
                {
                    result.push_back({low, high});
                }
                low = i + 1;
                high = i + 1;
            }
        }
        if (high == i)
        {
            if (low < high)
            {
                result.push_back({low, high});
            }
        }
    }
    if (result.empty())
    {
        cout << "No Profit" << endl;
    }
    else
    {
        for (auto &&i : result)
        {
            cout << "(" << i.first << " " << i.second << ") ";
        }
        cout << endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    stockBuySell(a, n);
    return 0;
}