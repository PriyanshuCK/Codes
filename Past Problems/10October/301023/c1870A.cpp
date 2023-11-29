// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(int n, int k, int x)
{
    long long sum = 0;
    int i = 0;
    while (i < k)
    {
        if (i > x)
        {
            cout << -1 << endl;
            return;
        }
        sum += i;
        i++;
        n--;
    }
    if (n < 0)
    {
        cout << -1 << endl;
        return;
    }
    i = x;
    if (i == k)
    {
        i--;
    }
    while (i != k && n)
    {
        sum += i;
        n--;
    }
    cout << sum << endl;
}
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
        int n, k, x;
        cin >> n >> k >> x;
        solve(n, k, x);
    }
    return 0;
}