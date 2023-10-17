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
    long long l, r;
    cin >> l >> r;
    long long a, b, c = -1;
    for (long long i = l; i <= r; i++)
    {
        a = i;
        for (long long k = l; k <= r; k++)
        {
            if (__gcd(k, a) != 1 && __gcd(k, b) == 1 && k != a)
            {
                c = k;
            }
            for (long long j = i; j <= r; j++)
            {
                if (__gcd(j, a) == 1 && j != a && k != c)
                {
                    b = j;
                    break;
                }
            }
            if (c != -1)
            {
                break;
            }
        }
        if (c != -1)
        {
            break;
        }
    }
    if (c == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}