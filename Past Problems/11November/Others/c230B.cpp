// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
set<long long> getTPrimes()
{
    int n = 1e+6;
    vector<bool> v(n + 1, true);
    v[0] = v[1] = false;
    for (int i = 0; i <= 1e+3; i++)
    {
        if (v[i])
        {
            for (long long j = (long long)i * i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }
    set<long long> s;
    for (int i = 2; i <= 1e+6; i++)
    {
        if (v[i])
        {
            s.insert((long long)i * i);
        }
    }
    return s;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    set<long long> tPrimes = getTPrimes();
    for (auto &&i : v)
    {
        if (tPrimes.find(i) != tPrimes.end())
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
