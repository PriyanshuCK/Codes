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
    int n;
    cin >> n;
    vector<int> v, neg, p, z;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            neg.push_back(v[i]);
        }
        else if (v[i] > 0)
        {
            p.push_back(v[i]);
        }
        else
        {
            z.push_back(0);
        }
        if (v[i] == 0 && i == n - 1)
        {
            p.push_back(neg.back());
            neg.pop_back();
            p.push_back(neg.back());
            neg.pop_back();
        }
    }
    if (neg.size() % 2 == 0)
    {
        z.push_back(neg.back());
        neg.pop_back();
    }

    cout << neg.size();
    for (auto &&i : neg)
    {
        cout << " " << i;
    }
    cout << endl;
    cout << p.size();
    for (auto &&i : p)
    {
        cout << " " << i;
    }
    cout << endl;
    cout << z.size();
    for (auto &&i : z)
    {
        cout << " " << i;
    }
    cout << endl;

    return 0;
}