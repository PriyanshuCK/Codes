// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
long long sumOfSeries(long long N, long long sumSeries = 0)
{
    if (N == 0)
    {
        return sumSeries;
    }
    sumSeries += (N * N * N);
    return sumOfSeries(N - 1, sumSeries);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long n;
    cin >> n;
    cout << sumOfSeries(n);
    return 0;
}