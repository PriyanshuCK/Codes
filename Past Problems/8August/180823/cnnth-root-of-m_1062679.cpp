// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int NthRoot(int n, int m)
{
    int left = 1, right = m;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if ((int)pow(mid, n) == m)
        {
            return mid;
        }
        else if (pow(mid, n) < m)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    cout << NthRoot(n, m) << endl;
    return 0;
}