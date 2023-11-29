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
        int s, e;
        cin >> s >> e;
        int flag = 1;
        for (int i = 1; i < n; i++)
        {
            int si, ei;
            cin >> si >> ei;
            if (si >= s && ei >= e)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            cout << s << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}