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
    int x, y, z;
    cin >> x >> y >> z;
    int left = min(x, min(y, z)), right = max(x, max(y, z)), mid = x + y + z - left - right;
    cout << right - left << endl;
    return 0;
}