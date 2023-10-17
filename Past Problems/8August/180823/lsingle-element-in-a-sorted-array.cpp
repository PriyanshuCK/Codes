// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int singleNonDuplicate(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1, nonDup = nums[0];
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (left == right)
        {
            nonDup = nums[mid];
            break;
        }
        if (nums[mid - 1] != nums[mid] && nums[mid + 1] != nums[mid])
        {
            nonDup = nums[mid];
            break;
        }
        else if (nums[mid - 1] == nums[mid])
        {
            if ((right - mid) % 2 == 0)
            {
                right = mid - 2;
            }
            else
            {
                left = mid + 1;
            }
        }
        else if (nums[mid + 1] == nums[mid])
        {
            if ((right - mid) % 2 == 0)
            {
                left = mid + 2;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return nonDup;
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
    cout << singleNonDuplicate(nums) << endl;
    return 0;
}