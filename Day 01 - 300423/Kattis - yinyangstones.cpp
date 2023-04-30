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
    string s;
    cin >> s;
    int w = 0, b = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W')
        {
            w++;
        }
        else
        {
            b++;
        }
    }

    cout << (w == b ? 1 : 0) << endl;
    return 0;
}