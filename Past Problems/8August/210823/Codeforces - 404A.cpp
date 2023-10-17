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
    vector<vector<char>> v;
    for (int i = 0; i < n; i++)
    {
        vector<char> row;
        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }
    char onDiag = v[0][0], other = v[0][1];
    if (onDiag == other)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((i == j || i + j == n - 1) && v[i][j] != onDiag) || ((i != j && i + j != n - 1) && v[i][j] != other))
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}