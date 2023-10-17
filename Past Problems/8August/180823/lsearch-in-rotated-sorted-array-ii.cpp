// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool search(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] != target && nums[left] == nums[right] && nums[mid] == nums[left])
        {
            left++;
            right--;
        }
        else if (nums[mid] == target)
        {
            return true;
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
    return false;
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