// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, v;
    cin >> n >> v;
    vector<vector<int>> prices;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vector<int> row;
        for (int j = 0; j < k; j++)
        {
            int s;
            cin >> s;
            row.push_back(s);
        }
        prices.push_back(row);
    }
    int count = 0;
    vector<int> sellers;
    for (int i = 0; i < n; i++)
    {
        sort(prices[i].begin(), prices[i].end());

        if (prices[i][0] < v)
        {
            sellers.push_back(i + 1);
            count++;
        }
    }
    cout << count << endl;
    for (auto &&i : sellers)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}