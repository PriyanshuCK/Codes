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
    int n, k;
    cin >> n >> k;
    int time = 240 - k, count = 0, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 5 * i;
        if (sum > time)
        {
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}