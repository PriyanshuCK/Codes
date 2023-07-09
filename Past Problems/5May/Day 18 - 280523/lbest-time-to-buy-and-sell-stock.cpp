// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int maxProfit(vector<int> &prices)
{
    int low = 0, high = 0, maxProfit = 0;
    for (size_t i = 0; i < prices.size(); i++)
    {
        if (prices[i] < prices[low])
        {
            low = i;
            high = i;
        }
        if (prices[i] > prices[high])
        {
            high = i;
            if (high > low)
            {
                maxProfit = max(maxProfit, prices[high] - prices[low]);
            }
        }
    }
    return maxProfit;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> prices;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }
    cout << maxProfit(prices) << endl;
    return 0;
}