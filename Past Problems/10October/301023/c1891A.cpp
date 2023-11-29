// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(int n, vector<int> a)
{
    vector<int> b = a;
    sort(b.begin(), b.end());
    if (b == a)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            if (__builtin_popcount(i + 1) != 1)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                for (int j = 0; j <= i; j++)
                {
                    a[j] -= a[i] - a[i + 1];
                }
            }
        }
    }
    cout << "YES" << endl;
    return;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        solve(n, a);
    }
    return 0;
}