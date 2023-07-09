// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum <= 0)
        {
            maxSum = max(maxSum, sum - arr[i]);
            sum = 0;
        }
        maxSum = max(sum, maxSum);
    }
    if (maxSum == 0)
    {
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        maxSum = max;
    }
    return maxSum;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << maxSubarraySum(a, n) << endl;
    return 0;
}