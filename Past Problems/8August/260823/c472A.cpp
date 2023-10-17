// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}
int solve(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (!isPrime(i) && !isPrime(n - i))
        {
            return i;
        }
    }
    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int i = solve(n);
    cout << i << " " << n - i << endl;
    return 0;
}