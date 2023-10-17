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
    int k, l;
    cin >> k >> l;
    int count = -2;
    while (l)
    {
        if (l % k != 0 && l != 1)
        {
            cout << "NO" << endl;
            return 0;
        }
        count++;
        l /= k;
    }
    cout << "YES" << endl;
    cout << count << endl;

    return 0;
}