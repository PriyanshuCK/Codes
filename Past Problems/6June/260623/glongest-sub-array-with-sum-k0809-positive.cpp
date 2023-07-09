// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int lenOfLongSubarr(int A[], int N, int K)
{
    long long sum = 0;
    int maxLen = 0, r = 0, l = 0;
    while (r < N)
    {
        sum += A[r];
        if (sum == K && maxLen < r - l + 1)
        {
            maxLen = r - l + 1;
        }
        if (sum > K)
        {
            sum -= A[l];
            l++;
        }
        r++;
    }
    return maxLen;
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