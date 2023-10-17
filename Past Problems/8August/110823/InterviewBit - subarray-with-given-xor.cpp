// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int solve(int *A, int n1, int B)
{
    int count = 0, totalXor = 0;
    unordered_map<int, int> xorMap;
    xorMap[0] = 1;
    xorMap[A[0]] = 1;
    totalXor ^= A[0];
    if (B == A[0])
    {
        count++;
    }
    for (int i = 1; i < n1; i++)
    {
        totalXor ^= A[i];
        if (xorMap.find(totalXor ^ B) != xorMap.end())
        {
            count += xorMap[totalXor ^ B];
        }
        xorMap[totalXor]++;
    }
    return count;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int b, n;
    cin >> b >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << solve(a, n, b) << endl;
    return 0;
}