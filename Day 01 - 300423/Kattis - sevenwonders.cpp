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
    int c = 0, g = 0, t = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == 'T')
        {
            c++;
        }
        else if (s[i] == 'G')
        {
            g++;
        }
        else
        {
            t++;
        }
    }
    int minNum = min(c, min(g, t));
    cout << pow(c, 2) + pow(g, 2) + pow(t, 2) + (minNum * 7) << endl;
    return 0;
}