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
    int n, x;
    cin >> n >> x;
    int prevMin = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        time += (l - prevMin) % x;
        time += r - l + 1;
        prevMin = r + 1;
    }
    cout << time << endl;
    return 0;
}