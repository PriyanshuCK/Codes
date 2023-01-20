// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int xPowN(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    if (n % 2 != 0)
    {
        return xPowN(x, n / 2) * xPowN(x, (n + 1) / 2);
    }
    return xPowN(x, n / 2) * xPowN(x, n / 2);
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << xPowN(x, n) << endl;
    return 0;
}