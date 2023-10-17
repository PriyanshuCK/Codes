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
        int n;
        cin >> n;
        vector<int> a, b;
        int y;
        cin >> y;
        b.push_back(y);
        a.push_back(y);
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < b.back())
            {
                a.push_back(x);
            }
            b.push_back(x);
            a.push_back(x);
        }
        cout << a.size() << endl;
        for (auto &&i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}