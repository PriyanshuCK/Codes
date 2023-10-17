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
    int prev, count = 1;
    cin >> prev;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        if (x != prev)
        {
            count++;
            prev = x;
        }
    }
    cout << count << endl;
    return 0;
}