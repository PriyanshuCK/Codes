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
        string s;
        cin >> s;
        long long sumF = 0, sumS = 0;
        for (int i = 0; i < s.length() / 2; i++)
        {
            sumF += s[i] - '0';
        }
        for (int i = s.length() / 2; i < s.length(); i++)
        {
            sumS += s[i] - '0';
        }
        if (sumF == sumS)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}