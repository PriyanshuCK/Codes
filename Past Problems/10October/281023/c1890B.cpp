// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(int n, int m, string s, string t)
{
    int type = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            if (type == -1 || type == s[i])
            {
                type = s[i];
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if (type == -1)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < m - 1; i++)
    {
        if (t[i] == t[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (t[0] == t[m - 1] && t[0] != type)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        solve(n, m, s, t);
    }
    return 0;
}