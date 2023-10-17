// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int searchInsert(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[right] < target)
        {
            return right + 1;
        }
        if (left == right || nums[left] > target)
        {
            return left;
        }
        if (nums[mid] >= target)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, n;
    cin >> t;
    vector<int> nums;
    while (cin >> n)
    {
        nums.push_back(n);
    }
    cout << searchInsert(nums, t) << endl;
    return 0;
}