// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool isAcronym(vector<string> &words, string s)
{
    string str;
    for (auto &&i : words)
    {
        str.push_back(i[0]);
    }
    if (str == s)
    {
        return true;
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    vector<string> words;
    string w;
    while (cin >> w)
    {
        words.push_back(w);
    }
    cout << isAcronym(words, s) << endl;
    return 0;
}