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
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v;
    vector<bool> iV(n, 0), jV(m, 0);
    for (int i = 0; i < n; i++)
    {
        vector<char> row;
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            row.push_back(x);
            if (x == 'S')
            {
                iV[i] = 1;
                jV[j] = 1;
            }
        }
        v.push_back(row);
    }
    int count = 0, countI = 0, countJ = 0;
    for (auto &&i : iV)
    {
        if (i == 0)
        {
            countI++;
        }
    }
    for (auto &&i : jV)
    {
        if (i == 0)
        {
            countJ++;
        }
    }
    count += countI * m;
    count += countJ * (n - countI);
    cout << count << endl;

    return 0;
}