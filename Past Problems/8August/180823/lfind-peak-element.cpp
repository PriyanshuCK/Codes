// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findPeakElement(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;
    if (nums.size() == 1)
    {
        return 0;
    }
    if (nums[0] > nums[1])
    {
        return 0;
    }
    else if (nums[right] > nums[right - 1])
    {
        return right;
    }
    left++;
    right--;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (nums[mid] < nums[mid - 1])
        {
            right = mid - 1;
        }
        else if (nums[mid] < nums[mid + 1])
        {
            left = mid + 1;
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
    int n;
    vector<int> nums;
    while (cin >> n)
    {
        nums.push_back(n);
    }
    cout << findPeakElement(nums) << endl;
    return 0;
}