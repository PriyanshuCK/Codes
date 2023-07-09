// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int reverse(int x)
{
    int revInt = 0;
    int temp = abs(x);
    while (temp > 0)
    {
        if (revInt > (INT_MAX - 7) / 10 || revInt < (INT_MIN + 8) / 10)
        {
            return 0;
        }
        revInt = revInt * 10 + temp % 10;
        temp /= 10;
    }
    if (x < 0)
    {
        return -revInt;
    }
    return revInt;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x;
    cin >> x;
    cout << reverse(x) << endl;
    return 0;
}