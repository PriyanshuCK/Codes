// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n, m;
    cin >> n;
    vector<int> N;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        N.push_back(x);
    }
    cin >> m;
    vector<int> M;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        M.push_back(x);
    }
    vector<vector<int>> mix;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        for (int j = 0; j < num; j++)
        {
            int x;
            cin >> x;
            mix[i].push_back(N[i] + x);
        }
    }
    vector<int> mini;
    for (int i = 0; i < n; i++)
    {
        sort(mix[i].begin(), mix[i].end());
        mini.push_back(mix[i][0]);
    }
    sort(mini.begin(), mini.end());
    int money;
    cin >> money;
    cout << money / mini[0] - 1 << endl;
    return 0;
}