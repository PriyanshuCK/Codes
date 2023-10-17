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
    int n, m;
    cin >> n >> m;
    long long prev = 1, count = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (x > prev)
        {
            count += x - prev;
        }
        else if (x < prev)
        {
            count += n - prev + x;
        }
        prev = x;
    }
    cout << count << endl;
    return 0;
}