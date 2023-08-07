// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> triplets;
    int n = nums.size();
    int left = 0, mid = 1, right = n - 1;
    while (left < right)
    {
        while (mid < right)
        {
            if (-(nums[left] + nums[right]) == nums[mid])
            {
                triplets.push_back({nums[left], nums[mid], nums[right]});
                int prevM = nums[mid], prevR = nums[right];
                while (nums[mid] == prevM && mid < right)
                {
                    mid++;
                }
                while (nums[right] == prevR && right > mid)
                {
                    right--;
                }
            }
            else if (-(nums[left] + nums[right]) > nums[mid] && mid < right)
            {
                mid++;
            }
            else
            {
                right--;
            }
        }
        if (left != n - 1)
        {
            int prevL = nums[left];
            while (nums[left] == prevL && left < n - 1)
            {
                left++;
            }
            mid = left + 1;
            right = n - 1;
        }
    }
    return triplets;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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
    vector<vector<int>> result = threeSum(nums);
    for (auto &&i : result)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}