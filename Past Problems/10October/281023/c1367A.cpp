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
        string a, b;
        cin >> b;
        a.push_back(b[0]);
        for (int i = 1; i < b.length() - 1; i += 2)
        {
            a.push_back(b[i]);
        }
        a.push_back(b[b.length() - 1]);
        cout << a << endl;
    }
    return 0;
}