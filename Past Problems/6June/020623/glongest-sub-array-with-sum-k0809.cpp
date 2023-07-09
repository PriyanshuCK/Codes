// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int lenOfLongSubarr(int A[], int N, int K)
{
    map<int, int> sums;
    int sum = 0, maxLength = 0;
    sums.insert({0, -1});
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
        if (sums.find(sum - K) != sums.end())
        {
            maxLength = max(maxLength, (i - sums[sum - K]));
        }
        if (sums.find(sum) == sums.end())
        {
            sums[sum] = i;
        }
    }
    return maxLength;
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
    cout << lenOfLongSubarr(a, n, k) << endl;
    return 0;
}