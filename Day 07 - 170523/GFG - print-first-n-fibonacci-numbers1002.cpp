// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<long long> printFibb(int n, vector<long long> fibb = {1, 1})
{
    if (n == 1)
    {
        fibb.pop_back();
        return fibb;
    }
    if (fibb.size() == n)
    {
        return fibb;
    }
    fibb.push_back(fibb[fibb.size() - 1] + fibb[fibb.size() - 2]);
    return printFibb(n, fibb);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<long long> fibb = printFibb(n);
    for (auto x : fibb)
    {
        cout << x << " ";
    }
    return 0;
}