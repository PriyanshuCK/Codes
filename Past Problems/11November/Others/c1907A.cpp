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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 1; i < 9; i++)
        {
            if (s[1] - '0' != i)
            {
                cout << s[0] << i << endl;
            }
        }
        for (int i = 97; i <= 104; i++)
        {
            if (s[0] != (char)i)
            {
                cout << (char)i << s[1] << endl;
            }
        }
    }
    return 0;
}