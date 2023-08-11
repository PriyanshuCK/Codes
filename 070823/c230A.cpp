// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string canMoveNextLevel(vector<pair<int, int>> strengthNDefeat, int &s)
{
    for (auto &&i : strengthNDefeat)
    {
        if (i.first < s)
        {
            s += i.second;
        }
        else
        {
            return "NO";
        }
    }

    return "YES";
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> strengthNDefeat;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        strengthNDefeat.push_back({x, y});
    }
    sort(strengthNDefeat.begin(), strengthNDefeat.end());
    cout << canMoveNextLevel(strengthNDefeat, s) << endl;
    return 0;
}