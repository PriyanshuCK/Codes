// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int isPrime(int N)
{
    if (N == 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << isPrime(n) << endl;
    return 0;
}