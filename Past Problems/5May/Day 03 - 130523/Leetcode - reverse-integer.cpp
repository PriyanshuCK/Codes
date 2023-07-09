// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int reverse(int x)
{
    long long reversedNum = 0;
    long long temp = abs(x);
    while (temp > 0)
    {
        long long ld = temp % 10;
        temp /= 10;
        reversedNum = reversedNum * 10 + ld;
    }
    if (reversedNum > INT32_MAX || reversedNum < INT32_MIN)
    {
        return 0;
    }
    if (x < 0)
    {
        return reversedNum * (-1);
    }

    return reversedNum;
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