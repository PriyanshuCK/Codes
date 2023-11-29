// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(int n, vector<int> a, unordered_map<int, int> b)
{
    if (b.size() <= 2)
    {
        if (b.size() == 2)
        {
            int first = -1;
            for (auto &&i : b)
            {
                if (first == -1)
                {
                    first = i.second;
                }
                else
                {
                    if ((n % 2 == 0 && i.second == first) || (n % 2 != 0 && abs(i.second - first) == 1))
                    {
                        cout << "YES" << endl;
                        return;
                    }
                    else
                    {
                        cout << "NO" << endl;
                        return;
                    }
                }
            }
        }
        else if (b.size() == 1)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
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
        vector<int> a;
        unordered_map<int, int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            b[x]++;
        }
        solve(n, a, b);
    }
    return 0;
}