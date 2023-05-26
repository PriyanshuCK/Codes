// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    long long maxL = 0, sum = a[0], right = 0, left = 0, n = a.size();
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }
        if (sum == k)
        {
            maxL = max(maxL, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += a[right];
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
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        a.push_back(x);
    }
    cout << longestSubarrayWithSumK(a, k);
    return 0;
}