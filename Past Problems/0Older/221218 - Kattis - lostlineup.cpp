// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i + 2});
    }
    sort(v.begin(), v.end());
    cout << 1;
    for (int i = 0; i < n - 1; i++)
    {
        cout << " " << v[i].second;
    }
    cout << endl;
    return 0;
}

// Simpler approach by github.com/mpfeifer1

// for (int i = 2; i <= n; i++)
// {
//     int t;
//     cin >> t;
//     ans[t + 1] = i;
// }