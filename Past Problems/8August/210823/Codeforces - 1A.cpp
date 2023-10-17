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
    int n, m, a;
    cin >> n >> m >> a;
    cout << (long long)((long long)ceil(n / (double)(a)) * (long long)ceil(m / (double)(a))) << endl;
    return 0;
}