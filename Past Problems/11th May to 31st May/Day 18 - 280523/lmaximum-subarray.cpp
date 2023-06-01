// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int maxSubArray(vector<int> &nums)
{
    int maxSum = 0, sum = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    if (maxSum == 0)
    {
        int max = INT_MIN;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (max < nums[i])
            {
                max = nums[i];
            }
        }
        sum = max;
        return sum;
    }
    return maxSum;
}
int main()
{
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << maxSubArray(nums) << endl;
    return 0;
}