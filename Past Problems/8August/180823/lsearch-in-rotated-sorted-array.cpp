// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getTargetIndex(vector<int> &nums, int left, int right, int target)
{
    int mid = left + (right - left) / 2;
    if (left >= right)
    {
        if (target == nums[mid])
        {
            return mid;
        }
        else
        {
            return -1;
        }
    }
    if (nums[mid] == target)
    {
        return mid;
    }
    else if (nums[mid] > target)
    {
        if (nums[right] < nums[mid] && target <= nums[right])
        {
            return getTargetIndex(nums, mid + 1, right, target);
        }
        return getTargetIndex(nums, left, mid - 1, target);
    }
    if (nums[left] > nums[mid] && target >= nums[left])
    {
        return getTargetIndex(nums, left, mid - 1, target);
    }
    return getTargetIndex(nums, mid + 1, right, target);
}
int search(vector<int> &nums, int target)
{
    // return getTargetIndex(nums, 0, nums.size() - 1, target);
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            if (nums[right] < nums[mid] && target <= nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        else
        {
            if (nums[left] > nums[mid] && target >= nums[left])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int target, n;
    cin >> target;
    vector<int> nums;
    while (cin >> n)
    {
        nums.push_back(n);
    }
    cout << search(nums, target) << endl;
    return 0;
}