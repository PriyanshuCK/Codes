// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;
    while (left < right)
    {
        if (nums[left] + nums[right] == target)
        {
            result.push_back(nums[left]);
            result.push_back(nums[right]);
            break;
        }
        else if (nums[left] + nums[right] > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return result;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, target;
    cin >> n >> target;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<int> result = twoSum(nums, target);
    for (auto &&i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}