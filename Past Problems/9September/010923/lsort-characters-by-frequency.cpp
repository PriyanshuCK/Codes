// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool cmp(pair<char, int> &a, pair<char, int> &b)
{
    return a.second > b.second;
}
string frequencySort(string s)
{
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    vector<pair<char, int>> v;
    for (auto &it : m)
    {
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    int i = 0, pos = 0;
    while (i < v.size())
    {
        int j = 0;
        while (j < v[i].second)
        {
            s[pos] = v[i].first;
            pos++;
            j++;
        }
        i++;
    }
    return s;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << frequencySort(s) << endl;
    return 0;
}