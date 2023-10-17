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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((j + 1 < n) && (v[i][j + 1] == 'o'))
            {
                count++;
            }
            if ((j - 1 >= 0) && (v[i][j - 1] == 'o'))
            {
                count++;
            }
            if ((i + 1 < n) && (v[i + 1][j] == 'o'))
            {
                count++;
            }
            if ((i - 1 >= 0) && (v[i - 1][j] == 'o'))
            {
                count++;
            }
            if (count % 2 != 0)
            {
                break;
            }
        }
        if (count % 2 != 0)
        {
            break;
        }
    }
    if (count % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}