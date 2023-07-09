// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
// 11 min
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
        string a, s;
        int n;
        cin >> n >> s;
        char current = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] == current)
            {
                a.push_back(current);
                current = s[i + 1];
                i++;
            }
        }
        cout << a << endl;
    }
    return 0;
}