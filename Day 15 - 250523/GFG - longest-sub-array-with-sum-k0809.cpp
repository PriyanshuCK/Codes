// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int lenOfLongSubarr(int A[], int N, int K)
{
    int maxL = 0, sum = 0;
    unordered_map<int, int> sums;
    sums.insert({0, -1});
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
        if (sums.find(sum) == sums.end())
        {
            sums.insert({sum, i});
        }
        if (sums.find(sum - K) != sums.end())
        {
            int length = i - sums.find(sum - K)->second;
            maxL = max(length, maxL);
        }
    }
    return maxL;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << lenOfLongSubarr(a, n, k);
    return 0;
}