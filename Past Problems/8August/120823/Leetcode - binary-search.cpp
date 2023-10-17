// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getIndex(vector<int> &nums, int left, int right, int target)
{
    if (target < nums[left] || target > nums[right])
    {
        return -1;
    }
    int mid = (left + right) / 2;
    if (target == nums[mid])
    {
        return mid;
    }
    else if (target > nums[mid])
    {
        return getIndex(nums, mid + 1, right, target);
    }
    return getIndex(nums, left, mid, target);
}
int search(vector<int> &nums, int target)
{
    return getIndex(nums, 0, nums.size() - 1, target);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, target;
    cin >> target;
    vector<int> nums;
    while (cin >> n)
    {
        nums.push_back(n);
    }
    cout << search(nums, target) << endl;
    return 0;
}