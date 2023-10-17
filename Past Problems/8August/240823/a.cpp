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
        int n, m;
        cin >> n >> m;
        vector<vector<char>> v;
        for (int i = 0; i < n; i++)
        {
            vector<char> row;
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                row.push_back(x);
            }
            v.push_back(row);
        }
        string s = "vika";
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j][i] == s[k])
                {
                    k++;
                    break;
                }
            }
        }
        if (k == 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}