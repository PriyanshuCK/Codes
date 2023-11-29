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
    int n, i, j;
    while (cin >> n >> i >> j)
    {
        int d = 1, u = pow(2, n), count = 0;
        while (true)
        {
            if (i <= (u + d) / 2 && j <= (u + d) / 2)
            {
                u = (u + d) / 2;
                count++;
            }
            else if (i > (u + d) / 2 && j > (u + d) / 2)
            {
                d = (u + d) / 2;
                count++;
            }
            else
            {
                cout << n - count << endl;
                break;
            }
        }
    }
    return 0;
}