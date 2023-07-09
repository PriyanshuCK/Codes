// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
// 21 min
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findOnes(float n, float k)
{
    if (k == 1)
    {
        return n;
    }
    if (int(n) % int(k) == 1)
    {
        return ceil(n / k);
    }
    return ceil(n / k) + 1;
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
        float n, k;
        cin >> n >> k;
        cout << findOnes(n, k) << endl;
    }
    return 0;
}