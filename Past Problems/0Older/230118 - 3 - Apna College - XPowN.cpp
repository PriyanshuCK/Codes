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
    return x * xPowN(x, n - 1);
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << xPowN(x, n) << endl;
    return 0;
}