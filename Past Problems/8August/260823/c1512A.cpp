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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int first = v[0], last = v.back(), mid = v[n / 2];
        if (first == last)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (v[i] != first)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            if (first == mid)
            {
                cout << n << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}