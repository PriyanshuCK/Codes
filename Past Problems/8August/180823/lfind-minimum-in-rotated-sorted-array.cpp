// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findMin(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1, min = INT_MAX;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < min)
        {
            min = nums[mid];
        }
        if (nums[right] < nums[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return min;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    vector<int> nums;
    while (cin >> n)
    {
        nums.push_back(n);
    }
    cout << findMin(nums) << endl;
    return 0;
}