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
    int n;
    cin >> n;
    vector<int> v;
    int minDiff = INT_MAX, maxDiff = INT_MIN;
    int first;
    cin >> first;
    v.push_back(first);
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        maxDiff = max(maxDiff, v[i] - v[i - 1]);
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i + 2] - v[i] < minDiff && i != n - 1)
        {
            minDiff = v[i + 2] - v[i];
        }
    }
    cout << (minDiff > maxDiff ? minDiff : maxDiff) << endl;

    return 0;
}