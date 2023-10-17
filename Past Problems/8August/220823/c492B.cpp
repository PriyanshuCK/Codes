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
    int n, l;
    vector<int> a;
    cin >> n >> l;
    double maxDiff = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
    {
        maxDiff = max(maxDiff, double(a[i] - a[i - 1]));
    }
    maxDiff = max(maxDiff / 2.0, (double)max(a[0] - 0, l - a[n - 1]));
    cout << fixed << maxDiff << endl;
    return 0;
}