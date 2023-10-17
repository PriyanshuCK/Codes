// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int solve(vector<int> a, vector<int> b, int n, int m)
{
    int flag = 0;
    int maxA = *max_element(a.begin(), a.end()), minA = *min_element(a.begin(), a.end());
    maxA = max(maxA, 2 * minA);
    for (int i = 0; i < m; i++)
    {
        if (b[i] <= maxA)
        {
            return -1;
        }
    }
    return maxA;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    cout << solve(a, b, n, m) << endl;
    return 0;
}