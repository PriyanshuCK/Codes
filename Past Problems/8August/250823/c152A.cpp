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
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    unordered_set<int> s;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int maxNum = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j][i] > maxNum)
            {
                maxNum = v[j][i];
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (v[j][i] == maxNum && s.find(j) == s.end())
            {
                s.insert(j);
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}