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
    string s, t;
    cin >> s >> t;
    int pos = 1;
    for (int i = 0; i < t.length(); i++)
    {
        if (s[pos - 1] == t[i])
        {
            pos++;
        }
    }
    cout << pos << endl;
    return 0;
}