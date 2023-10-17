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
    int n, c;
    cin >> n >> c;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int maxDiff = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] - v[i + 1] > maxDiff)
        {
            maxDiff = v[i] - v[i + 1];
        }
    }
    cout << ((maxDiff - c < 0) ? 0 : maxDiff - c) << endl;
    return 0;
}