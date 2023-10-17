// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getFirst(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    int first = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            right = mid - 1;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return first;
}
int getLast(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    int last = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            left = mid + 1;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return last;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    auto lower = lower_bound(nums.begin(), nums.end(), target);
    int lowerBound = lower - nums.begin();
    auto upper = upper_bound(nums.begin(), nums.end(), target);
    int upperBound = upper - nums.begin() - 1;
    if (lowerBound == nums.size() || nums[lowerBound] != target)
    {
        return {-1, -1};
    }
    return {lowerBound, upperBound};
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
    vector<int> result = searchRange(nums, target);
    for (auto &&i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}