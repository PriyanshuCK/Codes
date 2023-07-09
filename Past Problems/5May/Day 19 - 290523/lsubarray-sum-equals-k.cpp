// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int subarraySum(vector<int> &nums, int k)
{
    int count = 0, sum = 0;
    unordered_map<int, int> prefixSums;
    prefixSums.insert({0, 1});
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (prefixSums.find(sum - k) != prefixSums.end())
        {
            count += prefixSums[sum - k];
        }
        prefixSums[sum]++;
    }
    return count;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << subarraySum(nums, k);
    return 0;
}