// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    set<int> s;
    for (int i = 0; i < m; i++)
    {
        char c;
        int x;
        cin >> c >> x;

        if (c == '+')
        {
            if (s.find(x) == s.end())
            {
                bool flag = true;
                for (auto &&j : s)
                {
                    if (__gcd(j, x) != 1)
                    {
                        flag = false;
                        cout << "Conflict with " << j << endl;
                        break;
                    }
                }
                if (flag)
                {
                    s.insert(x);
                    cout << "Success" << endl;
                }
            }
            else
            {
                cout << "Already on" << endl;
            }
        }
        else
        {
            if (s.find(x) == s.end())
            {
                cout << "Already off" << endl;
            }
            else
            {
                s.erase(s.find(x));
                cout << "Success" << endl;
            }
        }
    }

    return 0;
}