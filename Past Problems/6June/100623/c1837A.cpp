// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
// 10 min
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
        int x, k;
        cin >> x >> k;
        if (x % k != 0)
        {
            cout << "1 " << x << endl;
        }
        else
        {
            cout << "2 " << x - 1 << " 1" << endl;
        }
    }
    return 0;
}