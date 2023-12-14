// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int deleteCapital(string &s, int j)
{
    s.erase(j, 1);
    for (int i = j - 1; i >= 0; i--)
    {
        if (s[i] <= 'Z' && s[i] >= 'A')
        {
            s.erase(i, 1);
            j--;
            break;
        }
    }
    return j;
}
int deleteSmall(string &s, int j)
{
    s.erase(j, 1);
    for (int i = j - 1; i >= 0; i--)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s.erase(i, 1);
            j--;
            break;
        }
    }
    return j;
}
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
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B')
            {
                int j = deleteCapital(s, i);
                i = j - 1;
            }
            else if (s[i] == 'b')
            {
                int j = deleteSmall(s, i);
                i = j - 1;
            }
        }
        cout << s << endl;
    }
    return 0;
}