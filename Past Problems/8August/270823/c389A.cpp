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
    int x, y;
    cin >> x >> y;
    int gcd = __gcd(x, y);
    for (int i = 2; i < n; i++)
    {
        int x;
        cin >> x;
        gcd = __gcd(gcd, x);
    }
    cout << gcd * n << endl;
    return 0;
}