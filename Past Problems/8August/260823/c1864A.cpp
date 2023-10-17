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
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> a;
        a.push_back(y);
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            a.push_back(a.back() - count);
            count++;
        }
        reverse(a.begin(), a.end());
        if (a[0] >= x)
        {
            a[0] = x;
            for (auto &&i : a)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}