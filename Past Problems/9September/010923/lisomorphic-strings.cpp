// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> m;
    unordered_set<char> set;
    for (int i = 0; i < (int)s.length(); i++)
    {
        if (m.find(s[i]) == m.end() && set.find(t[i]) == set.end())
        {
            m[s[i]] = t[i];
            set.insert(t[i]);
        }
        else
        {
            if ((set.find(t[i]) != set.end() && m.find(s[i]) == m.end()) || t[i] != m[s[i]])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s, t;
    cin >> s >> t;
    cout << isIsomorphic(s, t) << endl;
    return 0;
}