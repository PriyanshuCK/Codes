// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    // freopen("0i.txt", "r", stdin);
    // freopen("0o.txt", "w", stdout);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ":" << endl;
        vector<pair<string, int>> results;
        int maxim = INT_MIN;
        for (int j = 0; j < 10; j++)
        {
            int n;
            string s;
            cin >> s >> n;
            results.push_back({s, n});
            maxim = max(maxim, n);
        }
        for (int j = 0; j < 10; j++)
        {
            if (results[j].second == maxim)
            {
                cout << results[j].first << endl;
            }
        }
    }
    return 0;
}

// Don't know why this didn't work:
// multimap<int, string, greater<int>> results;
// for (int j = 0; j < 10; j++)
// {
//     string s;
//     int n;
//     cin >> s >> n;
//     results.insert({n, s});
// }
// int prev = results.begin()->first;
// for (auto x : results)
// {
//     if (x.first != prev)
//     {
//         break;
//     }
//     else
//     {
//         cout << x.second << endl;
//     }
// }